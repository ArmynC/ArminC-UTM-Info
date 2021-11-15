;  Suma in dubla precizie a variabilelor de tip cuvant dublu a,b,c.
;  Rezultatul este plasat in variabile s.
;----------------------------------------------------------------------------------------------

.model small
.stack 100h
.data
	a dw 12
	b dw 25
	c dw 10
	s dw ?
.code
.startup
	mov ax, dgroup
	mov ds, ax

								; in DX:AX transfera valoarea lui a
	mov ax, a 	    			; in AX transfera cuvantul mai putin semnificativ al lui a

	add ax, b 	     			; aduna la AX cuvantul mai putin semnificativ al lui b

	add ax, c
								; in s transfera rezultatul
	mov s, ax 	
	
	;terminare program
	mov ah,4ch
	int 21h
end