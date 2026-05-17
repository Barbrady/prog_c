section .data
    msg db "El producto es igual a %ld", 10, 0
section .text
    global main
    extern printf
main:
   push rbp
   mov rdi, 10
   mov rdx, 3
   call calcular
   mov rdi, msg 
   mov rsi, rax
   sub rsp, 8
   call printf
   mov rax, 0
   pop rbp

calcular:
    push rbp
    mov rbp, rsp
    mov rax, rdi
    imul rax, rdx
    pop rbp
    ret

