segment	.text
	global	_ft_strlen

_ft_strlen:	

	mov rax, 0
	jmp	bcl_while

bcl_while:
	cmp BYTE[rdi + rax], 0
	jz	end
	inc	rax
	jmp	bcl_while

end:
	ret