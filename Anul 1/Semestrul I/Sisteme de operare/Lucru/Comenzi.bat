:: @Simple

@echo off
:: Elimina mesajele tip informatie

title "Armin Chanchian"
:: Schimba titlul

color 02
:: Schimba culoarea

echo Test...
pause
:: Afiseaza un mesaj

hostname
pause
:: Afiseaza numele dispozitivului

ver
pause
:: Afiseaza versiunea sistemului de operare

:: @Internet

getmac
pause
:: Afiseaza adresa mac

ipconfig /all
pause
:: Afiseaza adresele IP - detaliat

systeminfo
pause
:: Afiseaza proprietatile si configuratiile computerului

:: @Fisiere

attrib
pause
:: Afiseaza atributele fisierelor

compact
pause
:: Afiseaza nivelul de compresie al fisierelor

ping www.google.com -n 3
pause
:: Trimite in bucla X pachete 

netsh wlan show drivers
pause
:: Afiseaza toate caracteristicile si driverele wireless


:: @Media

driverquery
pause
:: Afiseaza deviceurile instalate

vol D:
pause
:: Afiseaza numele partitiei si seria hard-diskului