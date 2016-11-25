	.file	"prog2.c"
	.section	.rodata
.LC0:
	.string	"%d\n"
	.text
.globl ramkishan
	.type	ramkishan, @function
ramkishan:
	pushl	%ebp
	movl	%esp, %ebp
	subl	$24, %esp
	movl	$10, -12(%ebp)
	movl	$12, -8(%ebp)
	movl	-8(%ebp), %eax
	addl	-12(%ebp), %eax
	movl	%eax, -4(%ebp)
	movl	-4(%ebp), %eax
	movl	%eax, 4(%esp)
	movl	$.LC0, (%esp)
	call	printf
	movl	$0, (%esp)
	call	exit
	.size	ramkishan, .-ramkishan
	.ident	"GCC: (GNU) 4.1.2 20080704 (Red Hat 4.1.2-48)"
	.section	.note.GNU-stack,"",@progbits
