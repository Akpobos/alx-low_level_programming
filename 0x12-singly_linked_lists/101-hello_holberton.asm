	.file	"101-hello_holberton.c"
	.intel_syntax noprefix
	.text
	.section	.rodata.str1.1,"aMS",@progbits,1
.LC0:
	.string	"Hello, Holberton"
	.section	.text.startup,"ax",@progbits
	.p2align 4
	.globl	main
	.type	main, @function
main:
.LFB39:
	.cfi_startproc
	endbr64
	push	rax
	.cfi_def_cfa_offset 16
	pop	rax
	.cfi_def_cfa_offset 8
	mov	edi, 1
	lea	rsi, .LC0[rip]
	xor	eax, eax
	sub	rsp, 8
	.cfi_def_cfa_offset 16
	call	__printf_chk@PLT
	xor	edi, edi
	call	exit@PLT
	.cfi_endproc
.LFE39:
	.size	main, .-main
	.ident	"GCC: (Ubuntu 9.4.0-1ubuntu1~20.04.1) 9.4.0"
	.section	.note.GNU-stack,"",@progbits
	.section	.note.gnu.property,"a"
	.align 8
	.long	 1f - 0f
	.long	 4f - 1f
	.long	 5
0:
	.string	 "GNU"
1:
	.align 8
	.long	 0xc0000002
	.long	 3f - 2f
2:
	.long	 0x3
3:
	.align 8
4:
