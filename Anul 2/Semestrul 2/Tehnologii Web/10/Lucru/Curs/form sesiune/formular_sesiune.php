<?php
session_start();
if(isset($_GET['curs'])){
    // $_GET['curs'] = $_GET['curs'];
    $_SESSION['curs'] = $_GET['curs'];
    $_SESSION['time'] = time();

    echo "Disciplina: {$_GET['curs']} a fost salvata cu succes in sesiune cu index-ul <b>curs</b>!</br>";
    echo 'Trecem la o noua pagina <a href = "next_sesiune_1.php">next_sesiune_1.php</a>!';

} else {
    echo '<form>';
    echo '<input type = "text" name = "curs" placeholder = "Alegeti cursul"/>';
    echo '<input type = "submit" value = "Salveaza in sesiune"/>';
    echo '</form>';
}

?>