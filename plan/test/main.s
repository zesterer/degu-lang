	.file	"main.c"
	.text
	.globl	do_print
	.type	do_print, @function
do_print:
.LFB0:
	//.cfi_startproc
	pushq	%rbp
	//.cfi_def_cfa_offset 16
	//.cfi_offset 6, -16
	movq	%rsp, %rbp
	//.cfi_def_cfa_register 6
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rax
	movq	%rax, %rdi
	call	puts
	nop
	leave
	//.cfi_def_cfa 7, 8
	ret
	//.cfi_endproc
.LFE0:
	.size	do_print, .-do_print
	.section	.rodata
.LC0:
	.string	"No args!"
	.text
	.globl	main
	.type	main, @function
main:
.LFB1:
	//.cfi_startproc
	pushq	%rbp
	//.cfi_def_cfa_offset 16
	//.cfi_offset 6, -16
	movq	%rsp, %rbp
	//.cfi_def_cfa_register 6
	subq	$16, %rsp
	movl	%edi, -4(%rbp)
	movq	%rsi, -16(%rbp)
	cmpl	$1, -4(%rbp)
	jg	.L3
	movl	$.LC0, %edi
	call	do_print
	jmp	.L4
.L3:
	movq	-16(%rbp), %rax
	addq	$8, %rax
	movq	(%rax), %rax
	movq	%rax, %rdi
	call	do_print
.L4:
	movl	$0, %eax
	leave
	//.cfi_def_cfa 7, 8
	ret
	//.cfi_endproc
.LFE1:
	.size	main, .-main
	.ident	"GCC: (GNU) 5.3.0"
	.section	.note.GNU-stack,"",@progbits
