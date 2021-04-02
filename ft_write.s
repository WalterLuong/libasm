global	ft_write
extern __errno_location
ft_write:
	mov	rax, 1
	syscall
	cmp rax, 0
	je	.exit_error
	ret

.exit_error:
	neg rax
	mov rdi, rax
	call __errno_location wrt ..plt
	mov [rax], rdi
	mov rax, -1
	ret