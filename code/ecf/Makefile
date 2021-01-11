CFLAGS=-g -Og
CC=gcc

OBJECT = write

all : $(OBJECT)

write : write.c
	gcc -o write write.c

.c.s :
	$(CC) $(CFLAGS) -S $*.c
.c.o :
	$(CC) $(CFLAGS) -c $*.c

clean :
	rm -rf $(OBJECT) *.s *.o

