CFLAGS=-g -Og
CC=gcc

OBJECT = prog main.s mstore.s mstore.asm mstore.o exchange.s exchange.o \
	exchangedemo scale.s scale.o shift_left4_rightn.s arith.s arith2.s \
	store_uprod.s remdiv.s uremdiv.s comp.s comp_int.s comp_short.s \
	comp_unsigned_char.s comp_long.s comp_unsigned_long.s comp_pointer.s \
	test_long.s test_short.s test_unsigned_short.s test_unsigned_char.s \
	test.s test_int.s test_unsigned_int.s branch.s branch.o branch \
	absdiff_se.s gotodiff_se.s gotodiff_se_other.s cond.s gotocond.s tests.s\
	absdiff.s cmovdiff.s cread.s arith_div.s test_cmov.s fact_do.s \
	fact_do_goto.s


all : $(OBJECT)

prog : main.c mstore.c
	$(CC) $(CFLAGS) -o prog main.c mstore.c
mstore.asm : mstore.c
	$(CC) $(CFLAGS) -S -masm=intel mstore.c -o mstore.asm

exchangedemo : exchangedemo.c exchange.c
	$(CC) $(CFLAGS) -o exchangedemo exchangedemo.c exchange.c

branch : branch.c
	$(CC) $(CFLAGS) -o branch branch.c

absdiff.s : absdiff.c
	$(CC) -g -O2 -S absdiff.c
cmovdiff.s : cmovdiff.c
	$(CC) -g -O2 -S cmovdiff.c
test_cmov.s : test_cmov.c
	$(CC) -g -O2 -S test_cmov.c

.c.s :
	$(CC) $(CFLAGS) -S $*.c
.c.o :
	$(CC) $(CFLAGS) -c $*.c

clean :
	rm -rf $(OBJECT) *.S *.s *.o
