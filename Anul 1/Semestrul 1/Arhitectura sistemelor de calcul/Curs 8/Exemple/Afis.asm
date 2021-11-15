;+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
;  Afisam un numar: se converteste la un sir de caractere format din cifrele numarului. 
;  Programul formeaza un sir de caractere dintr-un intreg pe 16 biti fara semn. 
;  Intregul CMM pe 16 biti este 65535 format din 5 cifre 
;=======================================================================================

.model small
.STACK 100h
.data
	no dw 31429
	nstr db 6 dup(' ')	    ; sir format din spatii
	idv dw 10			    ; divizorul = 10
.code
.startup
							; ds este initializat
	mov ax, dgroup
	mov ds, ax

							; terminatorul de sir  (indice 5 )
	mov si,5
	mov nstr[si], '$'

							; de la indexul 4 pana la 0 vor fi setate cifrele
	dec si

							; la impartire numarul se gaseste in DX:AX
	mov ax, no
	mov dx,0

loop1:
	div idv

							; in ax = catul impartirii 
							; in dx = restul (0->9) - adica folosim numai val din dl
							; CONVERSIA numarului in codul ASCII corespunzator cifrei:
							; - adunam la codul caracterului "0" valoarea cifrei
	add dl, '0'
	mov nstr[si],dl

	dec si

	mov dx,0

							; daca catul != 0 continua transf. cifrelor
	cmp ax,0
	jne loop1

listn:
	mov ah, 09h
	mov dx, offset nstr
	int 21h	

stopprg:
	mov ah, 4ch
	int 21h
end