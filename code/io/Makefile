CFLAGS=-g -Og
CC=gcc

OBJECT = openclose cpstdin cpfile statcheck readdir sharefile forkfile dup2

all : $(OBJECT)

openclose : openclose.c ../src/csapp.c ../include/csapp.h
	$(CC) $(CFLAGS) -o openclose openclose.c ../src/csapp.c -I../include/ -lpthread

cpstdin : cpstdin.c ../src/csapp.c ../include/csapp.h
	$(CC) $(CFLAGS) -o cpstdin cpstdin.c ../src/csapp.c -I../include/ -lpthread

cpfile : cpfile.c ../src/csapp.c ../include/csapp.h
	$(CC) $(CFLAGS) -o cpfile cpfile.c ../src/csapp.c -I../include/ -lpthread

statcheck : statcheck.c ../src/csapp.c ../include/csapp.h
	$(CC) $(CFLAGS) -o statcheck statcheck.c ../src/csapp.c -I../include/ -lpthread

readdir : readdir.c ../src/csapp.c ../include/csapp.h
	$(CC) $(CFLAGS) -o readdir readdir.c ../src/csapp.c -I../include/ -lpthread

sharefile : sharefile.c ../src/csapp.c ../include/csapp.h
	$(CC) $(CFLAGS) -o sharefile sharefile.c ../src/csapp.c -I../include/ -lpthread

forkfile : forkfile.c ../src/csapp.c ../include/csapp.h
	$(CC) $(CFLAGS) -o forkfile forkfile.c ../src/csapp.c -I../include/ -lpthread

dup2 : dup2.c ../src/csapp.c ../include/csapp.h
	$(CC) $(CFLAGS) -o dup2 dup2.c ../src/csapp.c -I../include/ -lpthread

.c.s :
	$(CC) $(CFLAGS) -S $*.c
.c.o :
	$(CC) $(CFLAGS) -c $*.c

clean :
	rm -rf $(OBJECT) *.s *.o

