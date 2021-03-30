global	ft_write
ft_write:
	mov	rax,  4		; system call number (sys_write)
	syscall
	jc	error_exit
	mov rax, 1
	syscall
	ret
error_exit:
	mov rax, -1
	syscall
	ret