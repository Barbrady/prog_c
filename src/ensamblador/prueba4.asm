section .data
    msj db "El resultado es %ld", 10, 0
section .text
    global main
    extern printf
main:
    push rbp
    mov rdi, 10
    push 15
    sub rsp, 8

    call suma
    pop rsi
    add rsp, 8
    mov rdi, msj
    mov rax, 0
    call printf
    mov rax, 0
    pop rbp
    ret

suma:
    push rbp
    mov rbp, rsp
    mov rax, [rbp+24]
    add rax, rdi
    mov [rbp+16], rax
    pop rbp
    ret
