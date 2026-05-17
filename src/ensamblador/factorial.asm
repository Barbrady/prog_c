section .data
    msj db "El resultado es: %ld", 10, 0

section .text
    global main
    extern printf

main:
    push rbp
    mov rbp, rsp
    push 8
    sub rsp, 8
    call factorial
    mov rdi, msj
    pop rsi
    sub rsp, 8
    call printf
    add rsp, 16
    pop rbp
    ret



factorial:
    push rbp
    mov rbp, rsp
    mov rcx, [rbp+24]
    mov rax, 1
bucle:
    imul rax, rcx
    dec rcx
    cmp rcx, 1
    ja bucle

    mov [rbp+16], rax
    pop rbp

    ret


