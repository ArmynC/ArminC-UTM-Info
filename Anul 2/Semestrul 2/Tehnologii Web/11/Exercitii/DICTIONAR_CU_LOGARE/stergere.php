<?php
$servername = "localhost";
$username = "root";
$password = "";
$dbname = "utm";

$con = new mysqli ($servername, $username, $password, $dbname);

$cuvant_ro = $_POST['cuv'];

$sql = "DELETE FROM dictionar WHERE cuvant_ro='$cuvant_ro';";
if ($con -> query ($sql)) {
    echo "Stergerea s-a realizat cu succes.";
} else {
    echo "Stergereaza nu s-a putut realiza " . $con -> error;
}
echo "</br /><button onclick=window.location.href='meniu.html'>Revenire</button>";
?>
