<?php

session_start();
if(isset($_SESSION['curs'])){
    echo "Bine ati venit la cursul de <b>{$_SESSION['curs']}</b>, in data de <b>".date('d-m-Y H:i',$_SESSION['time'])."</b>!</br>";
} else {
    echo "Trebui sa accesezi mai intai formularul de sesiune aici: <a href = 'formular_sesiune.php'>formular_sesiune.php</a>!";
}

?>