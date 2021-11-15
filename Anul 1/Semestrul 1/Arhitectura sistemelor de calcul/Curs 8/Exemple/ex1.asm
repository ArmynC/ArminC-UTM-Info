

; Exercitiu1.ASM - Afiseaza mesajul "Invatam ASSEMBLER !!"

; 


   .MODEL small
   .STACK 100h
   .DATA
		PrimulMesaj DB 'Am inceput sa invatam ASSEMBLER !!',13,10,'$'
		MesajDoi DB 'Greu dar interesant!',13,10,'$'
   .CODE
   .startup
   mov  ax,@data				; cu debug mergeti la adresa data 
								; si cu offset-ul respectiv
								; inspectati sirul 
								; este implicit adus de asamblor!
   mov  ds,ax                  ;set DS to point to the data segment
   mov  ah,9                   ;DOS print string function
   mov  dx,OFFSET MesajDoi     ;point to "Am inceput sa invatam ASSEMBLER !!"
   int  21h                    ;display "Am inceput sa invatam ASSEMBLER !!"
   mov  ah,4ch                 ;DOS terminate program function
   int  21h                    ;terminate the program
   END
