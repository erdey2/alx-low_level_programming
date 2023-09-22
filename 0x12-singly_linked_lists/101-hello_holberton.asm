extern	printf		; the function to be called

	        section .data		; this is Data section, it can have also initialized variables
msg:		db "Hello, Holberton", 0 ; The string to be printed
fmt:	    	db "%s", 10, 0          ; The format, "\n",'0'

	        section .text		; this is the Code part.

	        global main		; execution starts here
main:					; the label for the entry point
	        push    rbp		; stack frame set

		mov	rdi,fmt         ; move from the register
		mov	rsi,msg
		mov	xor,0		; or can be rax,rax
	        call    printf		; Call the printf function

		pop	rbp		; restore stack

		mov	rax,0		; normal, no error, return value
		ret			; return
