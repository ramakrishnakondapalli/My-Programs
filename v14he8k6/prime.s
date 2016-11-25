	.file	"prime.c"
	.section	.rodata
.LC0:
	.string	"Enter a  number :"
.LC1:
	.string	"%d"
	.align 4
.LC2:
	.string	"Given number is not a prime number"
	.align 4
.LC3:
	.string	"Giiven number is NOT A PRIME NUMBER"
	.align 4
.LC4:
	.string	"Given number is a prime number"
	.text
.globl main
	.type	main, @function
main:
	leal	4(%esp), %ecx
	andl	$-16, %esp
	pushl	-4(%ecx)
	pushl	%ebp
	movl	%esp, %ebp
	pushl	%ecx
	subl	$36, %esp
	movl	$.LC0, (%esp)
	call	printf
	leal	-16(%ebp), %eax
	movl	%eax, 4(%esp)
	movl	$.LC1, (%esp)
	call	scanf
	movl	-16(%ebp), %eax
	addl	$1, %eax
	cmpl	$2, %eax
	jbe	.L2
	movl	-16(%ebp), %eax
	addl	$2, %eax
	cmpl	$4, %eax
	ja	.L4
.L2:
	movl	$.LC2, (%esp)
	call	printf
	jmp	.L10
.L4:
	movl	-16(%ebp), %eax
	addl	$4, %eax
	cmpl	$8, %eax
	jbe	.L6
	movl	-16(%ebp), %eax
	addl	$6, %eax
	cmpl	$12, %eax
	ja	.L8
.L6:
	movl	$.LC3, (%esp)
	call	printf
	jmp	.L10
.L8:
	movl	$.LC4, (%esp)
	call	printf
.L10:
	addl	$36, %esp
	popl	%ecx
	popl	%ebp
	leal	-4(%ecx), %esp
	ret
	.size	main, .-main
	.ident	"GCC: (GNU) 4.1.2 20080704 (Red Hat 4.1.2-48)"
	.section	.note.GNU-stack,"",@progbits
