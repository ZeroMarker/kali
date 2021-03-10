; intel format
; hello.asm

section .data 
    msg db "Hello, Assembly World", 0xA
    len equ $ -msg
section .text
global _start
_start:
    mov edx, len
    mov ecx, msg
    mov edx, 1
    mov eax, 4
    int 0x80
    
    mov ebx, 0
    mov eax, 1
    int 0x80

