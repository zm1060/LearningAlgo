	.global _h
	.global _getbp,_mysum,_g
_getbp:
	mov  eax,bp
	ret
_mysum:
	push ebp
	mov ebp,esp
	mov eax,4[ebp]
	add eax,6[ebp]
	add eax,h
	mov esp,ebp
	pop ebp
	ret
_g:	.word 1234
