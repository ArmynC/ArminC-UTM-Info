.model small                          ; Model memorie small - un segment de date si un segment de cod
.stack 100h                           ; Rezerva 256 octeti (bytes) spatiu de stiva
.data                                 ; Definire si initializare date
	
    ; CHANCHIAN - ASCII --> C = 6(7) | H = 7(2) | A = 6(5)
	
	; v2[3] = a1          = 7
	; v2[4] = v2[3] + a2  = 7 + 2 = 9
	; v2[5] = v2[4] + a3  = 9 + 5 = 14

	; Sir : 7914

	a1 db 7			                  ; a1 = 7
	a2 db 2			                  ; a2 = 2
	a3 db 5			                  ; a3 = 5
	
	v2 db 6 dup(?)			          ; vector cu 6 elemente neinitializate
	sir db 6 dup(' ')	              ; sir format din 6 spatii
	
	divizor db 10                     ; divizor = 10

	afisare db "Sirul este:", "$"     ; Afiseaza rezultatul cu intrerupere de sir
	
.code                                 ; Rulare cod post-definire
.startup                              ; Partea de inceput a codului
	mov ax, dgroup                    ; Registrul ax preia segmentul dgroup (partea de date initiala)
	mov ds, ax                        ; Registrul ds este initializat cu continutul registrului ax

	mov al, a1                        ; Registrul al [ax -> al (low) | ah (high)] este initializat cu variabila a1
	mov v2[3], al                     ; Vectorul v2[3] = al

    add al, a2                        ; Registrului al i se aduna registrul a2
	mov v2[4], al                     ; Vectorul v2[4] = al

	mov al, v2[4]                     ; Registrului al i se copiaza vectorul v2[4]
	add al, a3                        ; Registrului al i se aduna registrul a2
	mov v2[5], al                     ; Vectorul v2[5] = al

	mov di,5                          ; di = 5 (final sir)
	mov sir[di], '$'                  ; Seteaza caracterul $ ca finalizator 
	
	mov si, 5				          ; si = 5

vector:                               ; Subprogram
	mov al, v2[si]			          ; Registrului al i se copiaza vectorul v2[si]

conversie:                            ; Subprogram
	mov ah, 0				          ; ah (high) = 0

	dec di					          ; Registrul di (sir) este micsorat cu 1

	div divizor				          ; Numarul curent din registrul ax este impartit la divizor (10)
	
	add ah, '0'                       ; Registrului ah i se aduna valoarea 0
	mov sir[di], ah                   ; Sirului i se copiaza registrul ah

	cmp al, 0				          ; Compara registrul al (catul) cu valoarea 0
	jne conversie                     ; Daca registrul ah nu este 0, reia operatia

	dec si                            ; Registrul si (vector) este micsorat cu 1

	cmp si, 2                         ; Compara registrul si (sirul) cu valoarea 2
	jne vector                        ; Daca indicele vectorului (si) nu este mai mic decat 3, reia operatia 

listn:                                ; Subprogram
	mov ah, 09h                       ; Operatie de scriere a sirului curent in output
	mov dx, offset afisare            ; Linkeaza locatia mesajului
	int 21h                           ; Se afiseaza caracterul din input
	mov dx, offset sir                ; Linkeaza locatia a variabilei sir | ds:0010
	int 21h                           ; Se afiseaza caracterul din input

stopprg:                              ; Subprogram
	mov ah, 4ch                       ; Returneaza controlul cate sistemul de operare  
	int 21h                           ; Finalizeaza operatiunea data | AX - > 4x24H
	
end                                   ; Partea de sfarsit a codului