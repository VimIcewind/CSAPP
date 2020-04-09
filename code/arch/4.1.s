.pos 0x100 # Start code at address 0x100
	irmovq $15,%rbx
	rrmovq %rbx,%rcx
loop:
	rmmovq %rcx,-3(%rbx)
	addq %rbx,%rcx
	jmp loop
