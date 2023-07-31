section .data
    format db `Hello, Holberton\n`, 0  ; Null-terminated format string to be printed

section .text
    global main
    extern printf

main:
    mov edi, format     ; Load the address of the format string into edi (first argument)
    xor eax, eax        ; Clear eax to indicate no floating-point arguments
    call printf         ; Call the printf function to print the formatted string
    mov eax, 0          ; Set the return value to 0 (success)
    ret                 ; Return from the main function



