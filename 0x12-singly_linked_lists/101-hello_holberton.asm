section .data
	hello_msg db "Hello, Holberton", 0
	format db "%s", 0
	newline db 10, 0 ; newline character

section .text
	extern printf

global main
main:
	; Set up the stack for printf
	push rbp
	mov rdi, format       ; First argument: pointer to format string
	mov rsi, hello_msg    ; Second argument: pointer to hello_msg
	xor rax, rax          ; Clear RAX register for printf to indicate no XMM registers are used for passing
	call printf           ; Call printf to print "Hello, Holberton"
	; Print newline character
	mov rdi, format       ; First argument: pointer to format string
	mov rsi, newline      ; Second argument: pointer to newline character
	xor rax, rax          ; Clear RAX register for printf
	call printf           ; Call printf to print newline
	; Clean up the stack
	pop rbp
	; Exit the program
	xor eax, eax          ; Return 0 (exit status) in EAX register
	ret
