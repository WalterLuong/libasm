global	ft_read
ft_read:
	mov rax, 0
	syscall
	cmp rax, 60
	je	exit_error
	ret
exit_error:
	mov rax, -1
	ret