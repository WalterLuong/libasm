global ft_strcpy

ft_strcpy:
	mov rax, 0
	jmp fill

fill:
	cmp	BYTE[rsi + rax], 0
	jz	end_strcpy
	mov rbx, [rsi + rax]
	mov [rdi + rax], rbx
	inc rax
	jmp fill

end_strcpy:
	mov rbx, 0
	mov [rdi + rax], rbx	
	mov rax, rdi
	ret