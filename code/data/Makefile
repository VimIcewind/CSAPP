CC=gcc
CFLAGS=-g

all : show-bytes sum.o conversions conversions_printf sum_elements strlonger tsub_ok

show-bytes : show-bytes.c
	gcc -o show-bytes show-bytes.c
sum.o : sum.c
	gcc -c sum.c
conversions : conversions.c
	gcc -o conversions conversions.c
conversions_printf : conversions_printf.c
	gcc -o conversions_printf conversions_printf.c
sum_elements : sum_elements
	gcc -o sum_elements sum_elements.c
strlonger : strlonger.c
	gcc -o strlonger strlonger.c
tsub_ok : tsub_ok.c
	gcc -o tsub_ok tsub_ok.c
clean :
	rm -rf show-bytes *.o conversions conversions_printf sum_elements strlonger tsub_ok
