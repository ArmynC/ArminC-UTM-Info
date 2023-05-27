<?php   
session_start(); 

if (isset($_SESSION['curs']) ){ 
    // folosim $_SESSION[index] pentru a afla valoarea unei variabile din sesiune 
    echo "Cursul <b>{$_SESSION['curs']}</b> este de la ora <b>{$_SESSION['orar']}</b> si laboratorul este la ora <b>{$_SESSION['laborator']}! "; 
} else {
    echo 'Trebuie sa accesezi mai intai ex_sesiune.php!'; 
} 
?> 