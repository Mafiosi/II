import psycopg2
from xml.dom.minidom import parse, parseString
from xml.dom import minidom
from pymodbus.client.sync import ModbusTcpClient
from socket import *
import sys
import binascii
import select
import time
import threading
from threading import Thread
from threading import Timer

def SqlLog():

    log = open("login.txt", 'r')
    info = log.read().splitlines()
    try:
        myconn=psycopg2.connect(host=info[0], user=info[1], password=info[2], dbname=info[3])
        myconn.autocommit = True
    except:
        print ("Error Connecting to SQL SERVER")
        return -1

    try:
        cur = myconn.cursor()
    except:
        print("ERROR CONNECTING TO SQL DATABASE")
        return -1

    log.close()
    return myconn

def SqlCreate(conn, cmd):
    cur = conn.cursor()
    try:
        result = cur.execute(cmd)
        return result
    except psycopg2.Error:
        return -1

def SqlClose(myconn):
    myconn.close()

#LOGS INTO SQL
print ("Logging into SQL...")
conn = SqlLog()
if conn == -1:
	print("Connection not Sucessful \n Exiting")
	exit()
else:
	print ("Login Sucessful\n")

# DELETS EXISTING CONTENT FOR FRESH START ^^
try:
	i = "DROP SCHEMA ii CASCADE"
	res = SqlCreate(conn,i)

	i = "CREATE SCHEMA ii"
	res = SqlCreate(conn,i)

	i = "SET search_path TO ii"
	res = SqlCreate(conn,i)

    ######### CREATES TABLES NEEDED TO PROCESS DATABASE ########

	#CREATE INVENTORY TABLE

	i = "CREATE TABLE warehouse (type int, quantity int);"
	res = SqlCreate(conn,i)

	i = "INSERT INTO warehouse (type,quantity) VALUES (1,27),(2,27),(3,27),(4,27),(5,27),(6,27),(7,27),(8,27),(9,27);"
	res = SqlCreate(conn,i)

	#CREATES TABLES FOR GENERIC ORDERS
	i = "CREATE TABLE genorders (id int PRIMARY KEY, type int NOT NULL, origin varchar(255) NOT NULL, destiny varchar(255) NOT NULL, quantity int NOT NULL, done bool NOT NULL);"
	res = SqlCreate(conn,i)

	#CREATES TABLES TO GUIDE THROUGH THE TRANSFORMATION PATH
	i = "CREATE TABLE formula (id int PRIMARY KEY, origin varchar(255) NOT NULL, destiny varchar(255) NOT NULL, machine int NOT NULL, tool int NOT NULL, times int NOT NULL);"
	res = SqlCreate(conn,i)

	i = """INSERT INTO formula (id, origin, destiny, machine, tool, times)
		VALUES (1,'P1','P3',1,1,5),(2,'P2','P4',2,1,10),(3,'P3','P5',1,2,10),(4,'P4','P6',2,2,5),
		(5,'P5','P7',1,3,5),(6,'P8','P7',3,2,20),(7,'P6','P8',2,3,5),(8,'P7','P8',3,1,20),(9,'P7','P9',3,3,20),
		(0,'P8','P9',3,3,20);"""
	res = SqlCreate(conn,i)

	#CREATES ACTUAL PATCH FOR EACH PIECE
	i = "CREATE TABLE pathway (id int PRIMARY KEY, origin varchar(255) NOT NULL, destiny varchar(255) NOT NULL, steps int NOT NULL, cell int NOT NULL);"
	res = SqlCreate(conn,i)

	#NEEDS TO BE COMPLETED
	i = """INSERT INTO pathway (id,origin, destiny, steps, cell)
		VALUES (0,'P1','P3',1,1),(1,'P2','P4',2,2),(2,'P3','P5',3,1),(3,'P1','P5',13,1),
		(4,'P4','P6',4,2),(5,'P2','P6',24,2),(6,'P5','P7',5,1),(7,'P8','P7',6,3),(8,'P3','P7',35,1),
		(9,'P1','P7',135,1),(10,'P6','P7',76,2),(11,'P4','P7',476,2),(12,'P6','P8',7,2),(13,'P7','P8',8,3),
		(14,'P4','P8',47,2),(15,'P2','P8',247,2),(16,'P5','P8',58,1),(17,'P3','P8',358,1),(18,'P7','P9',9,3),
		(19,'P8','P9',0,3),(20,'P5','P9',59,1),(21,'P3','P9',359,1),(22,'P6','P9',70,2),(23,'P4','P9',470,2);"""
	res = SqlCreate(conn,i)

	#CREATES TABLE TO COMUNICATE WITH CONTROL
	i = "CREATE TABLE orders (id SERIAL PRIMARY KEY, idorder int NOT NULL, norder int NOT NULL, cell int NOT NULL, maq_1 bool NOT NULL, px_1 int NOT NULL, py_1 int NOT NULL, maq_2 bool NOT NULL, px_2 int NOT NULL, py_2 int NOT NULL, done_start bool NOT NULL DEFAULT False, done_end bool NOT NULL DEFAULT False);"
	res = SqlCreate(conn,i)

	i = "CREATE TABLE order_statistics (id SERIAL PRIMARY KEY, id_order int NOT NULL, type varchar(255) NOT NULL, state varchar(255) NOT NULL, Pending_Pieces int NOT NULL, Processing_Pieces int NOT NULL DEFAULT 0, Finished_Pieces int NOT NULL DEFAULT 0, Total_Pieces int NOT NULL, Time_received  TIME(0) without time zone, Time_started TIME(0) without time zone, Time_finished TIME(0) without time zone);"
	res = SqlCreate(conn,i)

	i = """CREATE TABLE machine_statistics (id SERIAL PRIMARY KEY, cell_machine varchar(255) NOT NULL, type_P1 int NOT NULL DEFAULT 0, type_P2 int NOT NULL DEFAULT 0, type_P3 int NOT NULL DEFAULT 0,
		type_P4 int NOT NULL DEFAULT 0, type_P5 int NOT NULL DEFAULT 0, type_P6 int NOT NULL DEFAULT 0, type_P7 int NOT NULL DEFAULT 0, type_P8 int NOT NULL DEFAULT 0, type_P9 int NOT NULL DEFAULT 0,total_pieces int NOT NULL DEFAULT 0, total_time_seconds int DEFAULT 0);"""
	res = SqlCreate(conn,i)

	i = """INSERT INTO machine_statistics (id,cell_machine)
		VALUES (1,'1_A'),(2,'1_C'),(3,'2_A'),(4,'2_C'),(5,'3_B'),(6,'3_C');"""
	res = SqlCreate(conn,i)

	i = """CREATE TABLE unload_statistics (id SERIAL PRIMARY KEY, machine_name varchar(255) NOT NULL, type_P1 int NOT NULL DEFAULT 0, type_P2 int NOT NULL DEFAULT 0, type_P3 int NOT NULL DEFAULT 0,
		type_P4 int NOT NULL DEFAULT 0, type_P5 int NOT NULL DEFAULT 0, type_P6 int NOT NULL DEFAULT 0, type_P7 int NOT NULL DEFAULT 0, type_P8 int NOT NULL DEFAULT 0, type_P9 int NOT NULL DEFAULT 0,total_pieces int NOT NULL DEFAULT 0);"""
	res = SqlCreate(conn,i)

	i = """INSERT INTO unload_statistics (id,machine_name)
		VALUES (1,'D1'),(2,'D2'),(3,'D3');"""
	res = SqlCreate(conn,i)

	i = """INSERT INTO orders (idorder,norder,cell,maq_1,px_1,py_1,maq_2,px_2,py_2)
		VALUES (1,1,1,True,1,3,False,0,0),(1,2,1,True,1,3,False,0,0),(2,1,5,False,2,1,False,0,0),(3,1,5,False,3,2,False,0,0),
				(4,1,4,False,1,7,False,0,0),(5,1,4,False,1,7,False,0,0),(6,1,4,False,1,7,False,0,0);"""
	res = SqlCreate(conn,i)

	print("SQL DATABASE READY")

except:
	print("ERROR CREATING SQL DATABASE")
