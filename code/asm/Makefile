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
	fact_do_goto.s dw_loop.s fact_while.s fact_while_jm_goto.s loop_while.s \
	fact_while_O1.s fact_while_gd_goto.s loop_while2.s fun_a.s fact_for.s \
	fact_for_while.s fact_for_jm_goto.s fun_b.s switch_eg.s switch_eg_impl.s \
	switch2.s switcher.s fun.s

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

fact_while_O1.s : fact_while.c
	$(CC) -g -O1 -S fact_while.c -o fact_while_O1.s
loop_while2.s : loop_while2.c
	$(CC) -g -O1 -S loop_while2.c
fun_b.s : fun_b.c
	$(CC) -g -O1 -S fun_b.c

.c.s :
	$(CC) $(CFLAGS) -S $*.c
.c.o :
	$(CC) $(CFLAGS) -c $*.c

clean :
	rm -rf $(OBJECT) *.S *.s *.o
