global ft_strdup
extern ft_strlen
extern ft_strcpy
extern malloc
ft_strdup:
	push rdi
	call ft_strlen
	inc rax
	mov rdi, rax
	call malloc wrt ..plt
	cmp rax, 0
	je error_strdup
	pop rsi
	mov rdi, rax
	call ft_strcpy
	ret
error_strdup:
	xor rax, rax
	ret