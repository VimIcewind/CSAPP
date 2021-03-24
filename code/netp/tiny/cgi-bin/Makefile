CFLAGS=-g -Og
CC=gcc

OBJECT = adder

all : $(OBJECT)

adder : adder.c ../../../src/csapp.c ../../../include/csapp.h
	$(CC) $(CFLAGS) -o adder adder.c ../../../src/csapp.c -I../../../include/ -lpthread

.c.s :
	$(CC) $(CFLAGS) -S $*.c
.c.o :
	$(CC) $(CFLAGS) -c $*.c

clean :
	rm -rf $(OBJECT) *.s *.o


