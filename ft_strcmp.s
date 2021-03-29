global	ft_strcmp

ft_strcmp:
	mov		rax, 0
	jmp		str_cmp

str_cmp:
	movzx rax, BYTE[rdi]
	movzx rbx, BYTE[rsi]
	cmp rax, 0
	jz end_strcmp
	cmp rbx, 0
	jz end_strcmp
	cmp rax, rbx
	jne	end_strcmp
	inc rdi
	inc rsi
	jmp str_cmp

end_strcmp:
	sub rax, rbx
	ret