section .data
    fmt db "El resultado es: %ld", 10, 0

section .text
    global main
    extern printf

main:
    ; --- 1. PREPARACIÓN DEL CALLER ---
    ; Pasamos 1, 2, 3 en RDI, RSI, RDX
    mov rdi, 1
    mov rsi, 2
    mov rdx, 4
    
    ; Pasamos 4 y 5 a través de la PILA
    ; TODO: Haz push de los valores 5 y 4 (en ese orden para que el 4 quede arriba)
    push 5
    push 4
    ; Llamada
    call mi_subrutina
    ; --- 4. LIMPIEZA DEL CALLER ---
    ; TODO: El RSP ahora está "sucio" porque hicimos pushes. 
    ; Suma al RSP el espacio usado (8 bytes por cada push).
    pop rdx
    pop rsi
    ; Imprimir resultado (RAX ya tiene el valor)
    mov rdi, fmt
    mov rsi, rax
    xor rax, rax
    call printf

    ; Salida limpia
    mov rax, 60
    xor rdi, rdi
    syscall

mi_subrutina:
    ; --- 2. PRÓLOGO (Creación del Frame) ---
    ; TODO: Salva el RBP anterior y actualiza RBP al RSP actual
    push rbp
    mov rbp, rsp
    ; --- 3. CUERPO DE LA FUNCIÓN ---
    ; Sumamos los registros: RDI + RSI + RDX
    mov rax, rdi
    add rax, rdx
    add rax, rsi

    
    ; TODO: Ahora suma los valores que están en la pila.
    ; CUIDADO: En [rbp] está el RBP viejo, en [rbp+8] está la dirección de retorno.
    ; El primer argumento en pila está en [rbp + 16].
    ; add rax, [rbp + 16] 
    ; add rax, [rbp + 24]
    add rax, [rbp+16]
    add rax, [rbp+24]
    ; --- EPÍLOGO ---
    ; TODO: Restaura el RBP y vuelve con 'ret'
    pop rbp
    ret
