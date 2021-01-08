CFLAGS=-g -Og
CC=gcc

OBJECT = prog m libvector.a prog2c libvector.so prog2l prog2r

all : $(OBJECT)

prog : main.c sum.c
	$(CC) $(CFLAGS) -o prog main.c sum.c

m : m.c swap.c
	$(CC) $(CFLAGS) -o m m.c swap.c

libvector.a : addvec.o multvec.o
	ar rcs libvector.a addvec.o multvec.o

prog2c : main2.o libvector.a
	#$(CC) $(CFLAGS) -static -o prog2c main2.o ./libvector.a
	$(CC) $(CFLAGS) -static -o prog2c main2.o -L. -lvector

libvector.so : addvec.c multvec.c
	$(CC) $(CFLAGS) -shared -fpic -o libvector.so addvec.c multvec.c

prog2l : main2.c libvector.so
	$(CC) $(CFLAGS) -o prog2l main2.c libvector.so

prog2r : dll.c
	$(CC) $(CFLAGS) -rdynamic -o prog2r dll.c -ldl

.c.s :
	$(CC) $(CFLAGS) -S $*.c
.c.o :
	$(CC) $(CFLAGS) -c $*.c

clean :
	rm -rf $(OBJECT) *.s *.o

