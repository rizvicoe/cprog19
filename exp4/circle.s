	.file	"circle.c"
	.text
	.def	_printf;	.scl	3;	.type	32;	.endef
_printf:
	pushl	%ebp
	movl	%esp, %ebp
	pushl	%ebx
	subl	$36, %esp
	leal	12(%ebp), %eax
	movl	%eax, -12(%ebp)
	movl	-12(%ebp), %eax
	movl	%eax, 4(%esp)
	movl	8(%ebp), %eax
	movl	%eax, (%esp)
	call	___mingw_vprintf
	movl	%eax, %ebx
	movl	%ebx, %eax
	addl	$36, %esp
	popl	%ebx
	popl	%ebp
	ret
	.def	___main;	.scl	2;	.type	32;	.endef
	.section .rdata,"dr"
	.align 4
LC0:
	.ascii "\11**** Circle Area Calculator ****\12\12\0"
LC1:
	.ascii "Enter radius of circle:\0"
LC2:
	.ascii "%d\0"
	.align 4
LC5:
	.ascii "Perimeter of the Circle = %.2f\12\0"
LC6:
	.ascii "Area of the Circle = %.2f\12\0"
	.text
	.globl	_main
	.def	_main;	.scl	2;	.type	32;	.endef
_main:
	pushl	%ebp
	movl	%esp, %ebp
	andl	$-16, %esp
	subl	$48, %esp
	call	___main
	movl	$LC0, (%esp)
	call	_printf
	movl	$LC1, (%esp)
	call	_printf
	leal	36(%esp), %eax
	movl	%eax, 4(%esp)
	movl	$LC2, (%esp)
	call	_scanf
	movl	36(%esp), %eax
	movl	%eax, 24(%esp)
	fildl	24(%esp)
	fldt	LC3
	fmulp	%st, %st(1)
	fstps	44(%esp)
	movl	36(%esp), %eax
	movl	%eax, 24(%esp)
	fildl	24(%esp)
	fldt	LC4
	fmulp	%st, %st(1)
	movl	36(%esp), %eax
	movl	%eax, 24(%esp)
	fildl	24(%esp)
	fmulp	%st, %st(1)
	fstps	40(%esp)
	flds	44(%esp)
	fstpl	4(%esp)
	movl	$LC5, (%esp)
	call	_printf
	flds	40(%esp)
	fstpl	4(%esp)
	movl	$LC6, (%esp)
	call	_printf
	movl	$0, %eax
	leave
	ret
	.section .rdata,"dr"
	.align 16
LC3:
	.long	1546188227
	.long	-923417969
	.long	16385
	.align 16
LC4:
	.long	1546188227
	.long	-923417969
	.long	16384
	.ident	"GCC: (tdm-1) 5.1.0"
	.def	___mingw_vprintf;	.scl	2;	.type	32;	.endef
	.def	_scanf;	.scl	2;	.type	32;	.endef
