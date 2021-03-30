global ft_strdup
extern ft_strlen

ft_strdup:
	mov rax, 0
	call ft_strlen
	inc rax
	