CFLAGS=-g -Og
CC=gcc

OBJECT = openclose cpstdin cpfile statcheck

all : $(OBJECT)

openclose : openclose.c ../src/csapp.c ../include/csapp.h
	$(CC) $(CFLAGS) -o openclose openclose.c ../src/csapp.c -I../include/ -lpthread

cpstdin : cpstdin.c ../src/csapp.c ../include/csapp.h
	$(CC) $(CFLAGS) -o cpstdin cpstdin.c ../src/csapp.c -I../include/ -lpthread

cpfile : cpfile.c ../src/csapp.c ../include/csapp.h
	$(CC) $(CFLAGS) -o cpfile cpfile.c ../src/csapp.c -I../include/ -lpthread

statcheck : statcheck.c ../src/csapp.c ../include/csapp.h
	$(CC) $(CFLAGS) -o statcheck statcheck.c ../src/csapp.c -I../include/ -lpthread

.c.s :
	$(CC) $(CFLAGS) -S $*.c
.c.o :
	$(CC) $(CFLAGS) -c $*.c

clean :
	rm -rf $(OBJECT) *.s *.o

