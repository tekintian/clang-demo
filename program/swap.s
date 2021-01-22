	.section	__TEXT,__text,regular,pure_instructions
	.build_version macos, 10, 15	sdk_version 11, 0
	.globl	_main                   ## -- Begin function main
	.p2align	4, 0x90
_main:                                  ## @main
	.cfi_startproc
## %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$32, %rsp
	movl	$0, -4(%rbp)
	movl	%edi, -8(%rbp)
	movq	%rsi, -16(%rbp)
	movl	$10, -20(%rbp)
	movl	$20, -24(%rbp)
	movl	-20(%rbp), %esi
	movl	-24(%rbp), %edx
	leaq	L_.str(%rip), %rdi
	movb	$0, %al
	callq	_printf
	movl	-20(%rbp), %ecx
	addl	-24(%rbp), %ecx
	movl	%ecx, -20(%rbp)
	movl	-20(%rbp), %ecx
	subl	-24(%rbp), %ecx
	movl	%ecx, -24(%rbp)
	movl	-20(%rbp), %ecx
	subl	-24(%rbp), %ecx
	movl	%ecx, -20(%rbp)
	movl	-20(%rbp), %esi
	movl	-24(%rbp), %edx
	leaq	L_.str.1(%rip), %rdi
	movl	%eax, -28(%rbp)         ## 4-byte Spill
	movb	$0, %al
	callq	_printf
	xorl	%ecx, %ecx
	movl	%eax, -32(%rbp)         ## 4-byte Spill
	movl	%ecx, %eax
	addq	$32, %rsp
	popq	%rbp
	retq
	.cfi_endproc
                                        ## -- End function
	.section	__TEXT,__cstring,cstring_literals
L_.str:                                 ## @.str
	.asciz	"Before swap a=%d, b=%d"

L_.str.1:                               ## @.str.1
	.asciz	"\n After swap a=%d, b=%d "

.subsections_via_symbols
