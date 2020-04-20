0x200:	a06f                 |		pushq %rsi
0x202:	800c02000000000000   |		call proc
0x20b:	00                   |		halt
0x20c:	                     |	proc:
0x20c:	30f30a00000000000000 |		irmovq $10, %rbx
0x216:	90                   |		ret
