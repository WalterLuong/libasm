global ft_strdup
extern ft_strlen
extern ft_strcpy
extern malloc
extern __errno_location
ft_strdup:
	push rdi
	call ft_strlen
	inc rax
	mov rdi, rax
	call malloc
	cmp rax, 0
	je error_strdup
	pop rsi
	mov rdi, rax
	call ft_strcpy
	ret
error_strdup:
	neg rax
	mov rdi, rax
	call __errno_location
	mov [rax], rdi
	mov rax, -1
	ret