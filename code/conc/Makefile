CFLAGS=-g -Og
CC=gcc

OBJECT = echoclient echoserverp

all : $(OBJECT)

echoclient : echoclient.c ../src/csapp.c ../include/csapp.h
	$(CC) $(CFLAGS) -o echoclient echoclient.c ../src/csapp.c -I../include/ -lpthread

echoserverp : echoserverp.c ../src/csapp.c ../include/csapp.h
	$(CC) $(CFLAGS) -o echoserverp echoserverp.c echo.c ../src/csapp.c -I../include/ -lpthread

.c.s :
	$(CC) $(CFLAGS) -S $*.c
.c.o :
	$(CC) $(CFLAGS) -c $*.c

clean :
	rm -rf $(OBJECT) *.s *.o

