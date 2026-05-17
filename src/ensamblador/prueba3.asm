section .data
    msj db "El resultado es: %ld", 10, 0

section .text
    global main
    extern printf

main:
    push rbp
    mov rbp, rsp
    push 10
    push 20
    call suma

    add rsp, 16
    mov rdi, msj
    mov rsi, rax
    call printf
    mov rax, 0
    pop rbp
    ret

suma:
    push rbp
    mov rbp, rsp
    mov rsi, [rbp+16]
    mov rdi, [rbp+24]
    mov rax, 0
    add rax, rsi
    add rax, rdi
    pop rbp
    ret

