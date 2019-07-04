	.file	"tempIsBetter.c"
	.section	.rodata
.LC0:
	.string	"%c %c"
	.text
	.globl	main
	.type	main, @function
main:
.LFB0:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$48, %rsp
	movw	$115, -32(%rbp)
	movw	$103, -16(%rbp)
	movzbl	-16(%rbp), %eax
	movsbl	%al, %edx
	movzbl	-32(%rbp), %eax
	movsbl	%al, %eax
	movl	%eax, %esi
	movl	$.LC0, %edi
	movl	$0, %eax
	call	printf
	movzbl	-33(%rbp), %eax
	movb	%al, -32(%rbp)
	movzbl	-16(%rbp), %eax
	movb	%al, -32(%rbp)
	movzbl	-33(%rbp), %eax
	movb	%al, -16(%rbp)
	movzbl	-16(%rbp), %eax
	movsbl	%al, %edx
	movzbl	-32(%rbp), %eax
	movsbl	%al, %eax
	movl	%eax, %esi
	movl	$.LC0, %edi
	movl	$0, %eax
	call	printf
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE0:
	.size	main, .-main
	.ident	"GCC: (Ubuntu 4.8.2-19ubuntu1) 4.8.2"
	.section	.note.GNU-stack,"",@progbits
