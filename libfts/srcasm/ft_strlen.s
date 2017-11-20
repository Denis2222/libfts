section	.text
global	_ft_strlen

_ft_strlen:
	push	rbp
;	push	rcx
	;rdi  char *str

;	mov		rax, 0
;	cmp		rdi, 0
;		je	end
	mov		rcx, 0xffffffff
	mov		rbx, rdi
	mov		al, 0
;//	cld
	repne scasb
	;Pour chaque char de rdi, compare avec eax et decremente le compteur rcx
	;Si un char == eax(0) la suite
	sub		rdi, rbx
	mov		rax, rdi
	dec		rax
end:
;	pop		rcx
	pop		rbp
	ret

;StrLen classique
;	mov		r9, 0

;	boucle:
;	cmp		byte [rdi + r9], 0
;		je	end
;	inc		r9
;	jmp 	boucle

;	end:
;	mov		rax, r9
;	pop		rbp
;	ret
