<?php

echo "EXERCITIU 1:</br>";
session_start ();
$_SESSION ['curs'] = "Tehnologii Web";
$_SESSION ['orar'] = "12 - 14";
$_SESSION ['laborator'] = "14 - 16";
echo "<b>".print_r($_SESSION, true)."</b>";
echo "</br></br>EXERCITIU 2:</br>";
if (isset ($_SESSION['curs']))
{
    echo "Cursul <b>{$_SESSION['curs']}</b>
    <b>este de la ora <b> {$_SESSION['orar']}</b> si laboratorul este la ora
    <b> {$_SESSION['laborator']}</b>!";
}

echo "</br></br><a href = 'form sesiune/formular_sesiune.php'>Pentru
exercitiul cu sesiunea, apasa aici!</a> </br>";

?>