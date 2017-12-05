section .text
global _ft_strnvcpy
extern _ft_bzero
extern _ft_strlen

_ft_strnvcpy: ; Unprotected fct, exact fit src len
	enter 0,0
	;rdi	void *dst
	;rsi	void *src
	;rdx	size_t len
	push rdi
	mov		rcx, rdx
	cld
	repnz movsb
	pop rax
	leave
	ret

