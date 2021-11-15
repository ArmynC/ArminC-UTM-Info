;  Suma in dubla precizie a variabilelor de tip cuvant dublu a,b,c.
;  Rezultatul este plasat in variabila s.
;  Se va afisa rezultatul din s.

.model small                 ; marimea maxima data
.STACK 100h                  ; program executabi cu mai multe segmente/ rezerva 100h pentru stack
.data                        ; directive pentru procesor - prepara asamblorul pentru cod
	
  
	a dw 12                  ; variabila a este 12
	b dw 25                  ; variabila b este 25
	c dw 10                  ; variabila c este 10
	s dw ?                   ; variabila s este a+b+c
                             ; variabila s contine toate variabilele a,b,c
							 
	
	nstr db 3 dup(' ')	    ; sir format din spatii, spatiul rezervat in memorie este de 2x
	idv dw 10			    ; divizorul = 10 pt adunare in ascii
						 
							 
.code                       ; directive pentru procesor - pregateste asamblorul pentru cod
.startup                    ; directive pentru procesor - pregateste asamblorul pentru cod
							
	                 
							
	mov ax, dgroup          ; ds - initializare registru data storage/dgroup - nume segment
	mov ds, ax              ; ax registru care preia valorile
	
	
	mov ax,a                ; in ax se transfera valoarea lui a
	add ax,b                ; aduna la ax cuvantul mai putin semnificativ al lui b
	add ax,c                ; aduna la ax cuvantul mai putin semnificativ al lui c
	mov s,ax                ; in s se transfera rezultatul a+b+c
	
								
	mov si,3                ; terminatorul de sir  (indice 3)
	mov s[si], '$'          ; marcheaza finalizarea sirului

							    ; de l indexul 2 pana la 0 vor fi setate cifrele
	mov si,2                    ; terminatorul de sir, indice 2
	mov nstr[si], '$'           ; marcheaza finalizarea sirului

						
	dec si                     ; decrementarea si
	                           ; la impartire numarul se gaseste in dx:ax
	mov ax, s                  ; muta valoarea lui s in ax
	mov dx,0                   ; dx primeste valoarea 0


loop1:                      ; eticheta
	div idv                 ; impartire fara semn
							; in ax = catul impartirii 
							; in dx = restul (0->9) - adica folosim numai val din dl
							; CONVERSIA numarului in codul ASCII corespunzator cifrei:
							; adunam la codul caracterului "0" valoarea cifrei
	add dl, '0'             ; initializam registru dl la valoarea 0
	mov nstr[si],dl         ; incarca in si pe dl

	dec si                  ; decrementarea si
	mov dx,0                ; initializam registru dx la valoarea 0
							; daca catul != 0 continua transf. cifrelor
	cmp ax,0                ; compara registrul ax cu 0
	jne loop1               ; jump not equal - executa bucla pana la valoarea 0

listn:                      ; eticheta
	mov ah, 09h             ; sirul de caractere se afiseaza pe ecran
	mov dx, offset s        ; afisare in promoter, adresa relativa a locatiei de unde incepe stocarea sa in memorie (dx incarca valoare de offset a lui s)
	int 21h	                ; executie instr print

stopprg:                    ; eticheta
	mov ah, 4ch             ; ajuta la terminarea programului
	int 21h                 ; executa instr de mai sus - inchidere

end                         ; sfarsit fisier sursa