section	.text
global	_ft_memcpy

_ft_memcpy:
	enter 0,0

	;rdi	void *dst
	;rsi	void *src
	;rdx	size_t len

	push	rdi

	mov		rcx, rdx
	cld
	rep movsb

	pop		rax; get old rdi pointer
	leave
	ret
