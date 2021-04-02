global	ft_read
extern __errno_location
ft_read:
	mov rax, 0
	syscall
	cmp rax, 0
	je	.exit_error
	ret
.exit_error:
	neg rax
	mov rdi, rax
	call __errno_location
	mov [rax], rdi
	mov rax, -1
	ret