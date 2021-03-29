global	ft_strlen

ft_strlen:	
	mov rax, 0
	jmp	bcl_while

bcl_while:
	cmp BYTE[rdi], 0
	jz	end
	inc rdi
	inc	rax
	jmp	bcl_while

end:
	ret