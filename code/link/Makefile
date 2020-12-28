CFLAGS=-g -Og
CC=gcc

OBJECT = prog

all : $(OBJECT)

prog : main.c sum.c
	$(CC) $(CFLAGS) -o prog main.c sum.c

.c.s :
	$(CC) $(CFLAGS) -S $*.c
.c.o :
	$(CC) $(CFLAGS) -c $*.c

clean :
	rm -rf $(OBJECT) *.s

