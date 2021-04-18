section .data

		    message db "Hello, Holberton", 10

		section .text

		global main
main:
		    mov rdx, 17
		    mov rsi, message
		    mov rdi, 1
		    mov rax, 1
		    syscall
