global ft_strcpy:

ft_strcpy:
    mov rax, 0
fill:
    cmp BYTE[rsi + rax], 0
    jz  end_cpy
    mov r8, [rsi + rax]
    push r8
    pop r9
    mov [rdi + rax], r9
    inc rax
    jmp fill

end_cpy:
    mov rbx, 0
    mov [rdi + rax], rbx
    mov rax, rdi
    ret