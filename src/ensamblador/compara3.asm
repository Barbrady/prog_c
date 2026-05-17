section .data
    msj db "El número mayor es: %ld", 10,0

section .text
    global main
    extern printf

main:
    push rbp
    mov rdi, 22
    mov rsi, 48
    mov rax, 6
    call compara
    mov rdi, msj
    mov rsi, rax
    call printf
    pop rbp
    ret

compara:
    push rbp
    mov rbp, rsp
    cmp rax, rsi
    jge compara_tercer
    mov rax, rsi
compara_tercer:
    cmp rax, rdi
    jge final
    mov rax, rdi
final:
    pop rbp
    ret
   
