CFLAGS=-g -Og
CC=gcc

OBJECT = echoclient echoserverp select echoservers hello

all : $(OBJECT)

echoclient : echoclient.c ../src/csapp.c ../include/csapp.h
	$(CC) $(CFLAGS) -o echoclient echoclient.c ../src/csapp.c -I../include/ -lpthread

echoserverp : echoserverp.c ../src/csapp.c ../include/csapp.h
	$(CC) $(CFLAGS) -o echoserverp echoserverp.c echo.c ../src/csapp.c -I../include/ -lpthread

select : select.c ../src/csapp.c ../include/csapp.h
	$(CC) $(CFLAGS) -o select select.c echo.c ../src/csapp.c -I../include/ -lpthread

echoservers : echoservers.c ../src/csapp.c ../include/csapp.h
	$(CC) $(CFLAGS) -o echoservers echoservers.c ../src/csapp.c -I../include/ -lpthread

hello : hello.c ../src/csapp.c ../include/csapp.h
	$(CC) $(CFLAGS) -o hello hello.c ../src/csapp.c -I../include/ -lpthread

.c.s :
	$(CC) $(CFLAGS) -S $*.c
.c.o :
	$(CC) $(CFLAGS) -c $*.c

clean :
	rm -rf $(OBJECT) *.s *.o

