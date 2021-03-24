CFLAGS=-g -Og
CC=gcc

OBJECT = hex2dd dd2hex hostinfo hostinfo-ntop echoclient echoserveri

all : $(OBJECT)

hex2dd : hex2dd.c ../src/csapp.c ../include/csapp.h
	$(CC) $(CFLAGS) -o hex2dd hex2dd.c ../src/csapp.c -I../include/ -lpthread

dd2hex : dd2hex.c ../src/csapp.c ../include/csapp.h
	$(CC) $(CFLAGS) -o dd2hex dd2hex.c ../src/csapp.c -I../include/ -lpthread

hostinfo : hostinfo.c ../src/csapp.c ../include/csapp.h
	$(CC) $(CFLAGS) -o hostinfo hostinfo.c ../src/csapp.c -I../include/ -lpthread

hostinfo-ntop : hostinfo-ntop.c ../src/csapp.c ../include/csapp.h
	$(CC) $(CFLAGS) -o hostinfo-ntop hostinfo-ntop.c ../src/csapp.c -I../include/ -lpthread

echoclient : echoclient.c ../src/csapp.c ../include/csapp.h
	$(CC) $(CFLAGS) -o echoclient echoclient.c ../src/csapp.c -I../include/ -lpthread

echoserveri : echoserveri.c ../src/csapp.c ../include/csapp.h
	$(CC) $(CFLAGS) -o echoserveri echoserveri.c echo.c ../src/csapp.c -I../include/ -lpthread

.c.s :
	$(CC) $(CFLAGS) -S $*.c
.c.o :
	$(CC) $(CFLAGS) -c $*.c

clean :
	rm -rf $(OBJECT) *.s *.o

