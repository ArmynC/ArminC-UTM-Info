<?php
$filename = "login.txt";
$handle = fopen ($filename, "a");
$id = $_POST ["id"];
$pass = $_POST ["pass"];

$servername = "localhost";
$username = "root";
$password = "";
$dbname = "utm";

$con = new mysqli ($servername, $username, $password, $dbname);

$sql = "SELECT id FROM users WHERE username = '$id' AND password = '$pass'";

if ($res = $con -> query ($sql)) {
	if ($res -> num_rows == 1) {
		$x = $id . "conectare cu succes\n";
		fwrite ($handle, $x);
		include "meniu.html";
	} else {
		$x = $id . "incorect...\n";
		fwrite($handle, $x);
		include "login.html";
	}
} else {
	echo "Eroare la conectare " . $con -> error;
}
?>
