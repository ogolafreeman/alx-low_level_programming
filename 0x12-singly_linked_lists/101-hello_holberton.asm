section	.data
	msg db "Hello, Holberton",0
	n1 db 10, 0
section	.text
	global	main
	extern	printf
main:
	push	rbp
	mov	rbp, rsp

	lea	rdi, [msg]
	xor	eax, eax
	call	printf

	lea 	rdi, [n1]
	xor	eax, eax
	call	printf

	mov	rsp, rbp
	pop	rbp
	xor	eax, eax

	ret
