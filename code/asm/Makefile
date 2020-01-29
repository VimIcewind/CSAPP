CFLAGS=-g -Og
CC=gcc

all : prog prog.S main.s mstore.s mstore.asm mstore.o \
	exchange.s exchange.o exchangedemo scale.s scale.o \
	shift_left4_rightn.s arith.s arith2.s store_uprod.s \
	remdiv.s

prog : main.c mstore.c
	$(CC) $(CFLAGS) -o prog main.c mstore.c
prog.S : prog
	objdump -d prog > prog.S
main.s : main.c
	$(CC) $(CFLAGS) -S main.c
mstore.s : mstore.c
	$(CC) $(CFLAGS) -S mstore.c
mstore.asm : mstore.c
	$(CC) $(CFLAGS) -S -masm=intel mstore.c -o mstore.asm
mstore.o : mstore.c
	$(CC) $(CFLAGS) -c mstore.c
exchange.s : exchange.c
	$(CC) $(CFLAGS) -S exchange.c
exchange.o : exchange.c
	$(CC) $(CFLAGS) -c exchange.c
exchangedemo : exchangedemo.c exchange.c
	$(CC) $(CFLAGS) -o exchangedemo exchangedemo.c exchange.c
scale.s : scale.c
	$(CC) $(CFLAGS) -S scale.c
scale.o : scale.c
	$(CC) $(CFLAGS) -c scale.c
shift_left4_rightn.s : shift_left4_rightn.c
	$(CC) $(CFLAGS) -S shift_left4_rightn.c
arith.s : arith.c
	$(CC) $(CFLAGS) -S arith.c
arith2.s : arith2.c
	$(CC) $(CFLAGS) -S arith2.c
store_uprod.s : store_uprod.c
	$(CC) $(CFLAGS) -S store_uprod.c
remdiv.s : remdiv.c
	$(CC) $(CFLAGS) -S remdiv.c

clean :
	rm -rf prog mstore.asm exchangedemo *.S *.s *.o
