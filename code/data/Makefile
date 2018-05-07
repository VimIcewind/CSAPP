CC=gcc
CFLAGS=-g

all : show-bytes sum.o

show-bytes : show-bytes.c
	gcc -o show-bytes show-bytes.c
sum.o : sum.c
	gcc -c sum.c
clean :
	rm -rf show-bytes *.o
