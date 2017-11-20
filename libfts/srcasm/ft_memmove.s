section	.text
global	_ft_memmove

_ft_memmove:
	;rdi	void *dst
	;rsi	void *src
	;rcx	size_t len
start:
	enter 0,0
	push rdi;
	cld
	mov		rcx, rdx
	cmp	rsi, rdi; Overlap or not ?
		je	end
	cmp	rsi, rdi; Overlap or not ?
		jg	job

overlap:
	lea		rsi, [rsi + rcx - 1]
	lea		rdi, [rdi + rcx - 1]
	std; Inverse rep movsb

job:
	rep movsb

end:
	pop		rax; get old rdi pointer
	leave
	ret
