CFLAGS=-g -Og -pg
CC=gcc

OBJECT = combine

all : $(OBJECT)

combine : combine.c vec.c vec.h
	$(CC) $(CFLAGS) -o combine combine.c vec.c vec.h

.c.s :
	$(CC) $(CFLAGS) -S $*.c
.c.o :
	$(CC) $(CFLAGS) -c $*.c

clean :
	rm -rf $(OBJECT) gmon.out *.s

