global	ft_write
ft_write:
	mov	rax, 1		; system call number (sys_write)
	syscall
	cmp rax, 60
	je	exit_error
	ret
exit_error:
	mov rax, -1
	ret