/**
 * Head of code common to all C targets
 **/

#include "beremiz.h"
#include <string.h>
/*
 * Prototypes of functions provided by generated C softPLC
 **/
void config_run__(unsigned long tick);
void config_init__(void);

/*
 * Prototypes of functions provided by generated target C code
 * */
long long AtomicCompareExchange64(long long*, long long, long long);
void __init_debug(void);
void __cleanup_debug(void);
/*void __retrieve_debug(void);*/
void __publish_debug(void);

/*
 *  Variables used by generated C softPLC and plugins
 **/
IEC_TIME __CURRENT_TIME;
IEC_BOOL __DEBUG = 0;
unsigned long __tick = 0;
char *PLC_ID = NULL;

/*
 *  Variable generated by C softPLC and plugins
 **/
extern unsigned long greatest_tick_count__;

/* Help to quit cleanly when init fail at a certain level */
static int init_level = 0;

/*
 * Prototypes of functions exported by plugins
 **/
int __init_py_ext(int argc,char **argv);
void __cleanup_py_ext(void);
void __retrieve_py_ext(void);
void __publish_py_ext(void);
int __init_0(int argc,char **argv);
void __cleanup_0(void);
void __retrieve_0(void);
void __publish_0(void);

/*
 * Retrieve input variables, run PLC and publish output variables
 **/
void __run(void)
{
    __tick++;
    if (greatest_tick_count__)
        __tick %= greatest_tick_count__;

    __retrieve_py_ext();
    __retrieve_0();

    /*__retrieve_debug();*/

    config_run__(__tick);

    __publish_debug();

    __publish_0();
    __publish_py_ext();

}

/*
 * Initialize variables according to PLC's default values,
 * and then init plugins with that values
 **/
int __init(int argc,char **argv)
{
    int res = 0;
    init_level = 0;
    
    /* Effective tick time with 1ms default value */
    if(!common_ticktime__)
        common_ticktime__ = 1000000;

    config_init__();
    __init_debug();
    init_level=1; if((res = __init_py_ext(argc,argv))){return res;}
    init_level=2; if((res = __init_0(argc,argv))){return res;}
    return res;
}
/*
 * Calls plugin cleanup proc.
 **/
void __cleanup(void)
{
    if(init_level >= 2) __cleanup_0();
    if(init_level >= 1) __cleanup_py_ext();
    __cleanup_debug();
}

void PLC_GetTime(IEC_TIME *CURRENT_TIME);
void PLC_SetTimer(unsigned long long next, unsigned long long period);



/**
 * Linux specific code
 **/

#include <stdio.h>
#include <string.h>
#include <time.h>
#include <signal.h>
#include <stdlib.h>
#include <pthread.h>
#include <locale.h>
#include <semaphore.h>

static sem_t Run_PLC;

long AtomicCompareExchange(long* atomicvar,long compared, long exchange)
{
    return __sync_val_compare_and_swap(atomicvar, compared, exchange);
}
long long AtomicCompareExchange64(long long* atomicvar, long long compared, long long exchange)
{
    return __sync_val_compare_and_swap(atomicvar, compared, exchange);
}

void PLC_GetTime(IEC_TIME *CURRENT_TIME)
{
    struct timespec tmp;
    clock_gettime(CLOCK_REALTIME, &tmp);
    CURRENT_TIME->tv_sec = tmp.tv_sec;
    CURRENT_TIME->tv_nsec = tmp.tv_nsec;
}

void PLC_timer_notify(sigval_t val)
{
    PLC_GetTime(&__CURRENT_TIME);
    sem_post(&Run_PLC);
}

timer_t PLC_timer;

void PLC_SetTimer(unsigned long long next, unsigned long long period)
{
    struct itimerspec timerValues;
	/*
	printf("SetTimer(%lld,%lld)\n",next, period);
	*/
    memset (&timerValues, 0, sizeof (struct itimerspec));
	{
#ifdef __lldiv_t_defined
		lldiv_t nxt_div = lldiv(next, 1000000000);
		lldiv_t period_div = lldiv(period, 1000000000);
	    timerValues.it_value.tv_sec = nxt_div.quot;
	    timerValues.it_value.tv_nsec = nxt_div.rem;
	    timerValues.it_interval.tv_sec = period_div.quot;
	    timerValues.it_interval.tv_nsec = period_div.rem;
#else
	    timerValues.it_value.tv_sec = next / 1000000000;
	    timerValues.it_value.tv_nsec = next % 1000000000;
	    timerValues.it_interval.tv_sec = period / 1000000000;
	    timerValues.it_interval.tv_nsec = period % 1000000000;
#endif
	}
    timer_settime (PLC_timer, 0, &timerValues, NULL);
}
//
void catch_signal(int sig)
{
//  signal(SIGTERM, catch_signal);
  signal(SIGINT, catch_signal);
  printf("Got Signal %d\n",sig);
  exit(0);
}


static unsigned long __debug_tick;

pthread_t PLC_thread;
static pthread_mutex_t python_wait_mutex = PTHREAD_MUTEX_INITIALIZER;
static pthread_mutex_t python_mutex = PTHREAD_MUTEX_INITIALIZER;
static pthread_mutex_t debug_wait_mutex = PTHREAD_MUTEX_INITIALIZER;
static pthread_mutex_t debug_mutex = PTHREAD_MUTEX_INITIALIZER;

int PLC_shutdown = 0;

void PLC_thread_proc(void *arg)
{
    while (!PLC_shutdown) {
        sem_wait(&Run_PLC);
        __run();
    }
    pthread_exit(0);
}

#define maxval(a,b) ((a>b)?a:b)
int startPLC(int argc,char **argv)
{
    struct sigevent sigev;
    setlocale(LC_NUMERIC, "C");

    PLC_shutdown = 0;

    sem_init(&Run_PLC, 0, 0);

    pthread_create(&PLC_thread, NULL, (void*) &PLC_thread_proc, NULL);

    memset (&sigev, 0, sizeof (struct sigevent));
    sigev.sigev_value.sival_int = 0;
    sigev.sigev_notify = SIGEV_THREAD;
    sigev.sigev_notify_attributes = NULL;
    sigev.sigev_notify_function = PLC_timer_notify;

    pthread_mutex_init(&debug_wait_mutex, NULL);
    pthread_mutex_init(&debug_mutex, NULL);
    pthread_mutex_init(&python_wait_mutex, NULL);
    pthread_mutex_init(&python_mutex, NULL);

    pthread_mutex_lock(&debug_wait_mutex);
    pthread_mutex_lock(&python_wait_mutex);

    timer_create (CLOCK_REALTIME, &sigev, &PLC_timer);
    if(  __init(argc,argv) == 0 ){
        PLC_SetTimer(common_ticktime__,common_ticktime__);

        /* install signal handler for manual break */
        signal(SIGINT, catch_signal);
    }else{
        return 1;
    }
    return 0;
}

int TryEnterDebugSection(void)
{
    if (pthread_mutex_trylock(&debug_mutex) == 0){
        /* Only enter if debug active */
        if(__DEBUG){
            return 1;
        }
        pthread_mutex_unlock(&debug_mutex);
    }
    return 0;
}

void LeaveDebugSection(void)
{
    pthread_mutex_unlock(&debug_mutex);
}

int stopPLC()
{
    /* Stop the PLC */
    PLC_shutdown = 1;
    sem_post(&Run_PLC);
    PLC_SetTimer(0,0);
	pthread_join(PLC_thread, NULL);
	sem_destroy(&Run_PLC);
    timer_delete (PLC_timer);
    __cleanup();
    pthread_mutex_destroy(&debug_wait_mutex);
    pthread_mutex_destroy(&debug_mutex);
    pthread_mutex_destroy(&python_wait_mutex);
    pthread_mutex_destroy(&python_mutex);
    return 0;
}

extern unsigned long __tick;

int WaitDebugData(unsigned long *tick)
{
    int res;
    if (PLC_shutdown) return 1;
    /* Wait signal from PLC thread */
    res = pthread_mutex_lock(&debug_wait_mutex);
    *tick = __debug_tick;
    return res;
}

/* Called by PLC thread when debug_publish finished
 * This is supposed to unlock debugger thread in WaitDebugData*/
void InitiateDebugTransfer()
{
    /* remember tick */
    __debug_tick = __tick;
    /* signal debugger thread it can read data */
    pthread_mutex_unlock(&debug_wait_mutex);
}

int suspendDebug(int disable)
{
    /* Prevent PLC to enter debug code */
    pthread_mutex_lock(&debug_mutex);
    /*__DEBUG is protected by this mutex */
    __DEBUG = !disable;
    if (disable)
    	pthread_mutex_unlock(&debug_mutex);
    return 0;
}

void resumeDebug(void)
{
    __DEBUG = 1;
    /* Let PLC enter debug code */
    pthread_mutex_unlock(&debug_mutex);
}

/* from plc_python.c */
int WaitPythonCommands(void)
{
    /* Wait signal from PLC thread */
    return pthread_mutex_lock(&python_wait_mutex);
}

/* Called by PLC thread on each new python command*/
void UnBlockPythonCommands(void)
{
    /* signal debugger thread it can read data */
    pthread_mutex_unlock(&python_wait_mutex);
}

int TryLockPython(void)
{
    return pthread_mutex_trylock(&python_mutex) == 0;
}

void UnLockPython(void)
{
    pthread_mutex_unlock(&python_mutex);
}

void LockPython(void)
{
    pthread_mutex_lock(&python_mutex);
}

void InitRetain(void)
{
}

void CleanupRetain(void)
{
}

int CheckRetainBuffer(void)
{
	return 1;
}

void ValidateRetainBuffer(void)
{
}

void InValidateRetainBuffer(void)
{
}

void Retain(unsigned int offset, unsigned int count, void *p)
{
}

void Remind(unsigned int offset, unsigned int count, void *p)
{
}
/**
 * Tail of code common to all C targets
 **/

/** 
 * LOGGING
 **/

#ifndef LOG_BUFFER_SIZE
#define LOG_BUFFER_SIZE (1<<14) /*16Ko*/
#endif
#ifndef LOG_BUFFER_ATTRS
#define LOG_BUFFER_ATTRS
#endif

#define LOG_BUFFER_MASK (LOG_BUFFER_SIZE-1)

static char LogBuff[LOG_LEVELS][LOG_BUFFER_SIZE] LOG_BUFFER_ATTRS;
static void inline copy_to_log(uint8_t level, uint32_t buffpos, void* buf, uint32_t size){
    if(buffpos + size < LOG_BUFFER_SIZE){
        memcpy(&LogBuff[level][buffpos], buf, size);
    }else{
        uint32_t remaining = LOG_BUFFER_SIZE - buffpos; 
        memcpy(&LogBuff[level][buffpos], buf, remaining);
        memcpy(LogBuff[level], (char*)buf + remaining, size - remaining);
    }
}
static void inline copy_from_log(uint8_t level, uint32_t buffpos, void* buf, uint32_t size){
    if(buffpos + size < LOG_BUFFER_SIZE){
        memcpy(buf, &LogBuff[level][buffpos], size);
    }else{
        uint32_t remaining = LOG_BUFFER_SIZE - buffpos; 
        memcpy(buf, &LogBuff[level][buffpos], remaining);
        memcpy((char*)buf + remaining, LogBuff[level], size - remaining);
    }
}

/* Log buffer structure

 |<-Tail1.msgsize->|<-sizeof(mTail)->|<--Tail2.msgsize-->|<-sizeof(mTail)->|...
 |  Message1 Body  |      Tail1      |   Message2 Body   |      Tail2      |

*/
typedef struct {
    uint32_t msgidx;
    uint32_t msgsize;
    unsigned long tick;
    IEC_TIME time;
} mTail;

/* Log cursor : 64b
   |63 ... 32|31 ... 0|
   | Message | Buffer |
   | counter | Index  | */
static uint64_t LogCursor[LOG_LEVELS] LOG_BUFFER_ATTRS = {0x0,0x0,0x0,0x0};

void ResetLogCount(void) {
	uint8_t level;
	for(level=0;level<LOG_LEVELS;level++){
		LogCursor[level] = 0;
	}
}

/* Store one log message of give size */
int LogMessage(uint8_t level, char* buf, uint32_t size){
    if(size < LOG_BUFFER_SIZE - sizeof(mTail)){
        uint32_t buffpos;
        uint64_t new_cursor, old_cursor;

        mTail tail;
        tail.msgsize = size;
        tail.tick = __tick;
        PLC_GetTime(&tail.time);

        /* We cannot increment both msg index and string pointer 
           in a single atomic operation but we can detect having been interrupted.
           So we can try with atomic compare and swap in a loop until operation
           succeeds non interrupted */
        do{
            old_cursor = LogCursor[level];
            buffpos = (uint32_t)old_cursor;
            tail.msgidx = (old_cursor >> 32); 
            new_cursor = ((uint64_t)(tail.msgidx + 1)<<32) 
                         | (uint64_t)((buffpos + size + sizeof(mTail)) & LOG_BUFFER_MASK);
        }while(AtomicCompareExchange64(
            (long long*)&LogCursor[level],
            (long long)old_cursor,
            (long long)new_cursor)!=(long long)old_cursor);

        copy_to_log(level, buffpos, buf, size);
        copy_to_log(level, (buffpos + size) & LOG_BUFFER_MASK, &tail, sizeof(mTail));

        return 1; /* Success */
    }else{
    	char mstr[] = "Logging error : message too big";
        LogMessage(LOG_CRITICAL, mstr, sizeof(mstr));
    }
    return 0;
}

uint32_t GetLogCount(uint8_t level){
    return (uint64_t)LogCursor[level] >> 32;
}

/* Return message size and content */
uint32_t GetLogMessage(uint8_t level, uint32_t msgidx, char* buf, uint32_t max_size, uint32_t* tick, uint32_t* tv_sec, uint32_t* tv_nsec){
    uint64_t cursor = LogCursor[level];
    if(cursor){
        /* seach cursor */
        uint32_t stailpos = (uint32_t)cursor; 
        uint32_t smsgidx;
        mTail tail;
        tail.msgidx = cursor >> 32;
        tail.msgsize = 0;

        /* Message search loop */
        do {
            smsgidx = tail.msgidx;
            stailpos = (stailpos - sizeof(mTail) - tail.msgsize ) & LOG_BUFFER_MASK;
            copy_from_log(level, stailpos, &tail, sizeof(mTail));
        }while((tail.msgidx == smsgidx - 1) && (tail.msgidx > msgidx));

        if(tail.msgidx == msgidx){
            uint32_t sbuffpos = (stailpos - tail.msgsize ) & LOG_BUFFER_MASK; 
            uint32_t totalsize = tail.msgsize;
            *tick = tail.tick; 
            *tv_sec = tail.time.tv_sec; 
            *tv_nsec = tail.time.tv_nsec; 
            copy_from_log(level, sbuffpos, buf, 
                          totalsize > max_size ? max_size : totalsize);
            return totalsize;
        }
    }
    return 0;
}

#define CALIBRATED -2
#define NOT_CALIBRATED -1
static int calibration_count = NOT_CALIBRATED;
static IEC_TIME cal_begin;
static long long Tsync = 0;
static long long FreqCorr = 0;
static int Nticks = 0;
static unsigned long last_tick = 0;

/*
 * Called on each external periodic sync event
 * make PLC tick synchronous with external sync
 * ratio defines when PLC tick occurs between two external sync
 * @param sync_align_ratio 
 *          0->100 : align ratio
 *          < 0 : no align, calibrate period
 **/
void align_tick(int sync_align_ratio)
{
	/*
	printf("align_tick(%d)\n", calibrate);
	*/
	if(sync_align_ratio < 0){ /* Calibration */
		if(calibration_count == CALIBRATED)
			/* Re-calibration*/
			calibration_count = NOT_CALIBRATED;
		if(calibration_count == NOT_CALIBRATED)
			/* Calibration start, get time*/
			PLC_GetTime(&cal_begin);
		calibration_count++;
	}else{ /* do alignment (if possible) */
		if(calibration_count >= 0){
			/* End of calibration */
			/* Get final time */
			IEC_TIME cal_end;
			PLC_GetTime(&cal_end);
			/*adjust calibration_count*/
			calibration_count++;
			/* compute mean of Tsync, over calibration period */
			Tsync = ((long long)(cal_end.tv_sec - cal_begin.tv_sec) * (long long)1000000000 +
					(cal_end.tv_nsec - cal_begin.tv_nsec)) / calibration_count;
			if( (Nticks = (Tsync / common_ticktime__)) > 0){
				FreqCorr = (Tsync % common_ticktime__); /* to be divided by Nticks */
			}else{
				FreqCorr = Tsync - (common_ticktime__ % Tsync);
			}
			/*
			printf("Tsync = %ld\n", Tsync);
			printf("calibration_count = %d\n", calibration_count);
			printf("Nticks = %d\n", Nticks);
			*/
			calibration_count = CALIBRATED;
		}
		if(calibration_count == CALIBRATED){
			/* Get Elapsed time since last PLC tick (__CURRENT_TIME) */
			IEC_TIME now;
			long long elapsed;
			long long Tcorr;
			long long PhaseCorr;
			long long PeriodicTcorr;
			PLC_GetTime(&now);
			elapsed = (now.tv_sec - __CURRENT_TIME.tv_sec) * 1000000000 + now.tv_nsec - __CURRENT_TIME.tv_nsec;
			if(Nticks > 0){
				PhaseCorr = elapsed - (common_ticktime__ + FreqCorr/Nticks)*sync_align_ratio/100; /* to be divided by Nticks */
				Tcorr = common_ticktime__ + (PhaseCorr + FreqCorr) / Nticks;
				if(Nticks < 2){
					/* When Sync source period is near Tick time */
					/* PhaseCorr may not be applied to Periodic time given to timer */
					PeriodicTcorr = common_ticktime__ + FreqCorr / Nticks;
				}else{
					PeriodicTcorr = Tcorr;
				}
			}else if(__tick > last_tick){
				last_tick = __tick;
				PhaseCorr = elapsed - (Tsync*sync_align_ratio/100);
				PeriodicTcorr = Tcorr = common_ticktime__ + PhaseCorr + FreqCorr;
			}else{
				/*PLC did not run meanwhile. Nothing to do*/
				return;
			}
			/* DO ALIGNEMENT */
			PLC_SetTimer(Tcorr - elapsed, PeriodicTcorr);
		}
	}
}
