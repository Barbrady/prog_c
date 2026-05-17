section .data
    msg db "La suma de los números es: %ld", 10, 0
section .text
    global main
    extern printf

main:
    push rbp
    push 7
    push 88
    sub rsp, 8
    call suma
    mov rdi, msg
    pop rsi
    add rsp, 16
    call printf
    pop rbp
    ret

suma:
    push rbp
    mov rbp, rsp
    mov rax, [rbp+24]
    add rax, [rbp+32]
    mov [rbp+16], rax
    pop rbp
    ret


