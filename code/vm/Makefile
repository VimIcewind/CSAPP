CFLAGS=-g -Og
CC=gcc

OBJECT = mmapcopy hardcode dyncode

all : $(OBJECT)

mmapcopy : mmapcopy.c ../src/csapp.c ../include/csapp.h
	$(CC) $(CFLAGS) -o mmapcopy mmapcopy.c ../src/csapp.c -I../include/ -lpthread

hardcode : hardcode.c ../src/csapp.c ../include/csapp.h
	$(CC) $(CFLAGS) -o hardcode hardcode.c ../src/csapp.c -I../include/ -lpthread

dyncode : dyncode.c ../src/csapp.c ../include/csapp.h
	$(CC) $(CFLAGS) -o dyncode dyncode.c ../src/csapp.c -I../include/ -lpthread

.c.s :
	$(CC) $(CFLAGS) -S $*.c
.c.o :
	$(CC) $(CFLAGS) -c $*.c

clean :
	rm -rf $(OBJECT) *.s *.o

