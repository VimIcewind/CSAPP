CFLAGS=-g -Og
CC=gcc

OBJECT = sum.s rsum.s

all : $(OBJECT)

sum.s : sum.c
	$(CC) -g -O2 -S sum.c

rsum.s : rsum.c
	$(CC) -g -O1 -S rsum.c

.c.s :
	$(CC) $(CFLAGS) -S $*.c
.c.o :
	$(CC) $(CFLAGS) -c $*.c

clean :
	rm -rf $(OBJECT)

