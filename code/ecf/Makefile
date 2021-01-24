CFLAGS=-g -Og
CC=gcc

OBJECT = write getpid fork forkfork forkprob0 waitpid1 waitpid2 waitprob0 waitprob1\
	sleep pause snooze myecho shellex pgrp kill alarm sigint sigintsafe signal1\
	signal2

all : $(OBJECT)

write : write.c
	$(CC) $(CFLAGS) -o write write.c

waitpid1 : waitpid1.c ../src/csapp.c ../include/csapp.h
	$(CC) $(CFLAGS) -o waitpid1 waitpid1.c ../src/csapp.c -I../include/ -lpthread

waitpid2 : waitpid2.c ../src/csapp.c ../include/csapp.h
	$(CC) $(CFLAGS) -o waitpid2 waitpid2.c ../src/csapp.c -I../include/ -lpthread

waitprob0 : waitprob0.c ../src/csapp.c ../include/csapp.h
	$(CC) $(CFLAGS) -o waitprob0 waitprob0.c ../src/csapp.c -I../include/ -lpthread

waitprob1 : waitprob1.c ../src/csapp.c ../include/csapp.h
	$(CC) $(CFLAGS) -o waitprob1 waitprob1.c ../src/csapp.c -I../include/ -lpthread

myecho : myecho.c ../src/csapp.c ../include/csapp.h
	$(CC) $(CFLAGS) -o myecho myecho.c ../src/csapp.c -I../include/ -lpthread

shellex : shellex.c ../src/csapp.c ../include/csapp.h
	$(CC) $(CFLAGS) -o shellex shellex.c ../src/csapp.c -I../include/ -lpthread

kill : kill.c ../src/csapp.c ../include/csapp.h
	$(CC) $(CFLAGS) -o kill kill.c ../src/csapp.c -I../include/ -lpthread

sigint : sigint.c ../src/csapp.c ../include/csapp.h
	$(CC) $(CFLAGS) -o sigint sigint.c ../src/csapp.c -I../include/ -lpthread

sigintsafe : sigintsafe.c ../src/csapp.c ../include/csapp.h
	$(CC) $(CFLAGS) -o sigintsafe sigintsafe.c ../src/csapp.c -I../include/ -lpthread

snooze : snooze.c ../src/csapp.c ../include/csapp.h
	$(CC) $(CFLAGS) -o snooze snooze.c ../src/csapp.c -I../include/ -lpthread

signal1 : signal1.c ../src/csapp.c ../include/csapp.h
	$(CC) $(CFLAGS) -o signal1 signal1.c ../src/csapp.c -I../include/ -lpthread

signal2 : signal2.c ../src/csapp.c ../include/csapp.h
	$(CC) $(CFLAGS) -o signal2 signal2.c ../src/csapp.c -I../include/ -lpthread

.c.s :
	$(CC) $(CFLAGS) -S $*.c
.c.o :
	$(CC) $(CFLAGS) -c $*.c

clean :
	rm -rf $(OBJECT) *.s *.o
