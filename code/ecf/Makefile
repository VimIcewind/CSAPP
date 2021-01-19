CFLAGS=-g -Og
CC=gcc

OBJECT = write getpid fork forkfork forkprob0 waitpid1 waitpid2

all : $(OBJECT)

write : write.c
	$(CC) $(CFLAGS) -o write write.c

waitpid1 : waitpid1.c ../src/csapp.c ../include/csapp.h
	$(CC) $(CFLAGS) -o waitpid1 waitpid1.c ../src/csapp.c -I../include/ -lpthread

waitpid2 : waitpid2.c ../src/csapp.c ../include/csapp.h
	$(CC) $(CFLAGS) -o waitpid2 waitpid2.c ../src/csapp.c -I../include/ -lpthread

.c.s :
	$(CC) $(CFLAGS) -S $*.c
.c.o :
	$(CC) $(CFLAGS) -c $*.c

clean :
	rm -rf $(OBJECT) *.s *.o

