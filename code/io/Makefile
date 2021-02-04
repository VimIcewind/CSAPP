CFLAGS=-g -Og
CC=gcc

OBJECT = cpstdin

all : $(OBJECT)

cpstdin : cpstdin.c ../src/csapp.c ../include/csapp.h
	$(CC) $(CFLAGS) -o cpstdin cpstdin.c ../src/csapp.c -I../include/ -lpthread

.c.s :
	$(CC) $(CFLAGS) -S $*.c
.c.o :
	$(CC) $(CFLAGS) -c $*.c

clean :
	rm -rf $(OBJECT) *.s *.o

