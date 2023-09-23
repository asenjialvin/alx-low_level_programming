section .data
    hello db "Hello, Holberton",0
    format db "Hello, Holberton",10,0  ; Include newline character (10)

section .text
    global main
    extern printf
    extern exit

main:
    ; Call printf
    mov rdi, format   ; Format string
    xor rax, rax      ; Clear RAX (no floating-point arguments)
    call printf

    ; Exit program
    mov rdi, 0        ; Return 0 from main
    call exit

