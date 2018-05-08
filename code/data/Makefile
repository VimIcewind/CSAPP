CC=gcc
CFLAGS=-g

all : show-bytes sum.o conversions conversions_printf

show-bytes : show-bytes.c
	gcc -o show-bytes show-bytes.c
sum.o : sum.c
	gcc -c sum.c
conversions : conversions.c
	gcc -o conversions conversions.c
conversions_printf : conversions_printf.c
	gcc -o conversions_printf conversions_printf.c
clean :
	rm -rf show-bytes *.o conversions conversions_printf
