<?php
$servername = "localhost";
$username = "root";
$password = "";
$dbname = "utm";

$cv_ro = $_POST ['cuv'];

$con = new mysqli ($servername, $username, $password, $dbname);
$sql = "SELECT * FROM dictionar WHERE cuvant_ro = '$cv_ro' LIMIT 200";
$res = $con -> query ($sql) or die ($con -> error);

echo "<table border='1' width=40% allign='center' bgcolor='B0E0E6'>
	  <tr>
	  <td><b>Id</b></td>
	  <td><b>Cuvant_en</b></td>
	  <td><b>Cuvant_ro</b></td>
	  <td><b>Cuvant_it</b></td>

	  </tr>";
while ($z = $res -> fetch_assoc ()) {
    echo "<tr bgcolor='C0C0C0'>
		  <td>" . $z["id"] . "</td>
		  <td>" . $z["cuvant_en"] . "</td>
		  <td>" . $z["cuvant_ro"] . "</td>
		  <td>" . $z["cuvant_it"] . "</td></tr>    ";
}
echo "</table></br /><button onclick=window.location.href='meniu.html'>Revenire</button>";
?>
