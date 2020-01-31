CFLAGS=-g -Og
CC=gcc

all : prog main.s mstore.s mstore.asm mstore.o exchange.s exchange.o \
	exchangedemo scale.s scale.o shift_left4_rightn.s arith.s arith2.s \
	store_uprod.s remdiv.s uremdiv.s comp.s comp_int.s comp_short.s \
	comp_unsigned_char.s comp_long.s comp_unsigned_long.s comp_pointer.s \
	test.s

prog : main.c mstore.c
	$(CC) $(CFLAGS) -o prog main.c mstore.c
mstore.asm : mstore.c
	$(CC) $(CFLAGS) -S -masm=intel mstore.c -o mstore.asm

exchangedemo : exchangedemo.c exchange.c
	$(CC) $(CFLAGS) -o exchangedemo exchangedemo.c exchange.c

.c.s :
	$(CC) $(CFLAGS) -S $*.c
.c.o :
	$(CC) $(CFLAGS) -c $*.c

clean :
	rm -rf prog mstore.asm exchangedemo *.S *.s *.o
