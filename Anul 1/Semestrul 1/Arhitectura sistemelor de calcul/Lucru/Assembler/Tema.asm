.model small
.STACK 100h
.data

	a dw 12                 ; a = 12
	b dw 25                 ; b = 25
	c dw 10                 ; c = 10
	s dw ?                  ; s = a+b+c
	
	nstr db 6 dup(' ')	    ; sir format din spatii
	idv dw 10			    ; divizorul = 10
	
.code
.startup
							; ds este initializat
	mov ax, dgroup
	mov ds, ax

	mov ax, a 	    		; in AX transfera cuvantul mai putin semnificativ al lui a

	add ax, b 	     		; aduna la AX cuvantul mai putin semnificativ al lui b

	add ax, c
							; in s transfera rezultatul
	mov s, ax 	
							; terminatorul de sir  (indice 5 )
	mov si,5
	mov nstr[si], '$'

							; de la indexul 4 pana la 0 vor fi setate cifrele
	dec si

							; la impartire numarul se gaseste in DX:AX
	mov ax, s
	mov dx,0                ; dx = 0

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
	mov ah, 09h               ; afisare pe ecran
	mov dx, offset nstr
	int 21h	

stopprg:
	mov ah, 4ch               ; finalizeaza programul
	int 21h
end