section .data
    hello db "Hello, Holberton",0
    format db "%s\n",0

section .text
    global main
    extern printf
    extern exit

main:
    ; Call printf
    mov rdi, format   ; Format string
    mov rsi, hello    ; String to print
    xor rax, rax      ; Clear RAX (no floating-point arguments)
    call printf

    ; Exit program
    mov rdi, 0        ; Return 0 from main
    call exit

