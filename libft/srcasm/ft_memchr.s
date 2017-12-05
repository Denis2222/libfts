section	.text
global	_ft_memchr

_ft_memchr:
	;rdi	void *dst
	;rsi	int c
	;rcx	size_t len
start:
	enter 0,0
	push	rdi

	mov ax, si
	cld
job:
	repne scasb
		je found
end:
	mov	rax, 0
	leave
	ret


found:
	lea		rdi, [rdi - 1]
	mov		rax, rdi
	leave
	ret
