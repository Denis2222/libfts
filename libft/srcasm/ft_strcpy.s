section .text
	global _ft_strcpy
	extern _ft_strlen

_ft_strcpy:
	enter 0,0
	;rdi	void *dst
	;rsi	void *src

	push	rdi
	push	rsi
	mov		rdi, rsi
	call	_ft_strlen

	;rdx = dst
	;rdi = src
	;rax = length(src)

	mov		ecx, eax ; compteur = length(src)
	pop		rsi
	pop		rdi
	push	rdi
	rep		movsb ; put rsi in rdi ( src on len)
	mov		byte[rdi], 0 ;last char \0
	pop		rdi
	leave
	ret
