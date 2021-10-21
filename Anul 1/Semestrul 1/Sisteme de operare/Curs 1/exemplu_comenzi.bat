cd c:/
pause
::deschide discul c:/

md test
pause
::creaza un folder cu numele test

cd test
pause
::intra in folderul creat "test" 

md 1
pause
::creaza folder 1/in directorul creat anterior "test"

md 2
pause
::creaza folder 2/in directorul creat anterior "test"

dir
pause
:: afiseaza folderul

move /y 2 c:/test/1
pause
::muta folderul 2/in folderul 1

attrib 1/2 +h
pause
::ascunde folderul 2-hidden

cd 1/2
pause
::intra in directorul 2

echo fisier de tip txt pentru test>document_test_tip_txt.txt
pause
::creaza un fisier txt, cu numele document_text_tip_txt, care contine un text:"fisier de tip text pentru test"

move /-y document_test_tip_txt.txt c:/test/1
pause
::muta fisierul document_test_tip_txt.txt in folderul 1

cd..
pause
::se intoarce la folderul cel anterior adica 1

attrib 2 -h
pause
::reapare folderul ascuns anterior, folder 2, cel pe care l-am ascuns

move 2 c:\test
pause
::muta folderul 2 in folderul "test" care va contine acum folderul 1 si 2

copy document_test_tip_txt.txt c:\test\2
pause
:: s-a copiat fisierul document_test_tip_txt.txt din folderul 1 si in folderul 2

cd..
pause
::revine la folderul anterior "test"

cd..
pause
::revine la sistem c:\

rmdir /s /q test
pause
::sterge folderul/ test + tot ce contine folderul/subfoldere/fisiere
:: comanda /s sterge toate directoare si fisiere din directorul specificat
:: comanda /q fara confimare, daca vrei cu confirmare tastati fara /q