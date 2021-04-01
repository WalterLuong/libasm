global ft_strdup

extern ft_strlen

extern ft_strcpy

extern malloc

ft_strdup:
	call ft_strlen
	inc rax
	push rdi
	call malloc
	pop rsi
	mov rdi, rax
	call ft_strcpy
	ret
	