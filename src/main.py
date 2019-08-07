#!/usr/bin/python
'''
GENERAL LIBRARIES
'''

import sys
import binascii
import select
import time
from datetime import datetime
import threading
import socket
from threading import Thread
from threading import Timer
from queue import Queue
import liib


#########################################  TESTING AND LOGING ########################################

#CONNECTIONS TO SQL
print ("Loging into SQL...")
conn = liib.SqlLog()
if conn == -1:
    print("Connection not Sucessful")
else:
    print ("Login Sucessful\n")

i = "SET search_path TO ii"
res = liib.SqlQuery(conn,i)

#MODBUS LOGINS


#########################################  MAIN PROGRAM   ########################################

#INITIALIZING CONTROL VARIABLES
queue_pre_plan = Queue()

#INITIALIZING UDP CYCLE FOR READING PHASE
thread_prep = threading.Thread(name='Prep_cycle',target=liib.Prep_cycle,args=(conn,queue_pre_plan,))
thread_plan = threading.Thread(name='Plan_cycle',target=liib.Plan_cycle,args=(conn,queue_pre_plan,))
thread_statistics = threading.Thread(name='Statistics_cycle',target=liib.Statistics,args=(conn,))
thread_control = threading.Thread(name = 'control_thread',target=liib.start_control,args=(conn,))

thread_prep.start()
thread_plan.start()
thread_statistics.start()
thread_control.start()

thread_prep.join()
thread_plan.join()

print ("Exit Main thread")
print ("Program will Shut Down")
