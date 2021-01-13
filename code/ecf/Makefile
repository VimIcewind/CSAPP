CFLAGS=-g -Og
CC=gcc

OBJECT = write fork forkfork forkprob0

all : $(OBJECT)

write : write.c
	$(CC) $(CFLAGS) -o write write.c

.c.s :
	$(CC) $(CFLAGS) -S $*.c
.c.o :
	$(CC) $(CFLAGS) -c $*.c

clean :
	rm -rf $(OBJECT) *.s *.o

