CFLAGS=-g -Og
CC=gcc

OBJECT = sum.s

all : $(OBJECT)

sum.s : sum.c
	$(CC) -g -S sum.c

.c.s :
	$(CC) $(CFLAGS) -S $*.c
.c.o :
	$(CC) $(CFLAGS) -c $*.c

clean :
	rm -rf $(OBJECT)

