section .data
    hello db "Hello, Holberton,", 0  ; Null-terminated string to be printed

section .text
    global main
    extern printf

main:
    push rbp
    mov rdi, hello       ; Load the address of the string into rdi (first argument)
    xor rax, rax         ; Clear rax to indicate no floating-point arguments
    call printf          ; Call the printf function to print the string
    pop rbp
    ret                  ; Return from the main function

