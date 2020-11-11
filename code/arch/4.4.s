rsum:
	xorq	%rax, %rax	# Set return value to 0
	andq	%rsi, %rsi	# Set condition codes
	jle	return		# If count <= 0, return 0
	pushq	%rbx		# Save callee-saved register
	mrmovq	(%rdi), %rbx	# Get *start
	irmovq	$1, %r10
	subq	$r10, %rsi	# count--
	irmovq	$8, %r10
	addq	%r10, %rdi	# start++
	call	rsum
	addq	%rbx, %rax	# Add *start to sum
	popq	%rbx
return:
	rep ret
