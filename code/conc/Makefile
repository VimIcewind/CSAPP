CFLAGS=-g -Og
CC=gcc

OBJECT = echoclient echoserverp select echoservers hello echoservert sharing \
	 badcnt goodcnt echoservert-pre psum-mutex

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

echoservert : echoservert.c ../src/csapp.c ../include/csapp.h
	$(CC) $(CFLAGS) -o echoservert echoservert.c echo.c ../src/csapp.c -I../include/ -lpthread

sharing : sharing.c ../src/csapp.c ../include/csapp.h
	$(CC) $(CFLAGS) -o sharing sharing.c ../src/csapp.c -I../include/ -lpthread

badcnt : badcnt.c ../src/csapp.c ../include/csapp.h
	$(CC) $(CFLAGS) -o badcnt badcnt.c ../src/csapp.c -I../include/ -lpthread

goodcnt : goodcnt.c ../src/csapp.c ../include/csapp.h
	$(CC) $(CFLAGS) -o goodcnt goodcnt.c ../src/csapp.c -I../include/ -lpthread

echoservert-pre : echoservert-pre.c echo-cnt.c sbuf.c sbuf.h ../src/csapp.c ../include/csapp.h
	$(CC) $(CFLAGS) -o echoservert-pre echoservert-pre.c echo-cnt.c sbuf.c sbuf.h ../src/csapp.c \
		-I../include/ -lpthread

psum-mutex : psum-mutex.c ../src/csapp.c ../include/csapp.h
	$(CC) $(CFLAGS) -o psum-mutex psum-mutex.c ../src/csapp.c -I../include/ -lpthread


.c.s :
	$(CC) $(CFLAGS) -S $*.c
.c.o :
	$(CC) $(CFLAGS) -c $*.c

clean :
	rm -rf $(OBJECT) *.s *.o

