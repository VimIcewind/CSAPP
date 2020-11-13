0x000: 30f20900000000000000 |     irmovq $9, %rdx
0x00a: 30f31500000000000000 |     irmovq $21, %rbx
0x014: 6123                 |     subq %rdx, %rbx		# substract
0x016: 30f48000000000000000 |     irmovq $128, %rsp		# Problem 4.13
0x020: 40436400000000000000 |     rmmovq %rsp, 100(%rbx)	# store
0x02a: a02f                 |     pushq %rdx			# push
0x02c: b00f                 |     popq %rax			# Problem 4.14
0x02e: 73400000000000000000 |     je done			# Not taken
0x037: 80410000000000000000 |     call proc			# Problem 4.18
0x040:                      | done:
0x040: 00                   |     halt
0x041:                      | proc:
0x041: 90                   |     ret				#Return
                            |
