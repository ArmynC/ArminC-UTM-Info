<?php
session_start();//functia trebuie apelata in primele linii din fisier pentru a nu se  trimite nici macar un caracter la browser.  

$_SESSION['curs'] = 'Tehnologii Web'; 
$_SESSION['orar'] = '12-14'; 
$_SESSION['laborator'] = '14-16'; 

echo '<b>'.print_r($_SESSION,true).'</b>'; 
?> 