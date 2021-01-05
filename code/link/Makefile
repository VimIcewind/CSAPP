CFLAGS=-g -Og
CC=gcc

OBJECT = prog m

all : $(OBJECT)

prog : main.c sum.c
	$(CC) $(CFLAGS) -o prog main.c sum.c

m : m.c swap.c
	$(CC) $(CFLAGS) -o m m.c swap.c

.c.s :
	$(CC) $(CFLAGS) -S $*.c
.c.o :
	$(CC) $(CFLAGS) -c $*.c

clean :
	rm -rf $(OBJECT) *.s *.o

