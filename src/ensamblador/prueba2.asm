section .text
    global main
    extern printf

main
   mov rdi, 10
   mov rdx, 3
   call calcular


