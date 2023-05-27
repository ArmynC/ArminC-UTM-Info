<?php
$servername = "localhost";
$username = "root";
$password = "";
$dbname = "utm";

$con = new mysqli ($servername, $username, $password, $dbname);

$id = $_POST['id'];
$cv_ro = $_POST['cuv'];

$sql = "UPDATE dictionar SET cuvant_ro='$cv_ro' WHERE id=$id";

if ($con -> query ($sql)) {
    echo "Afisarea!";
} else {
    echo "ERROR: Could not able to execute $sql. " . $con -> error;
}
$sql = "SELECT * FROM dictionar LIMIT 200;";
$res = $con -> query ($sql) or die ($con -> error);;
echo "<table border='1' bgcolor='B0E0E6'>
	  <tr>
	  <td><b>Id</b></td>
	  <td><b>Cuvant_ro</b></td>
	  <td><b>Cuvant_en</b></td>
	  </tr>";
while ($z = $res -> fetch_assoc ()) {
    echo "<tr bgcolor='C0C0C0'>
		  <td>" . $z["id"] . "</td>
		  <td>" . $z["cuvant_ro"] . "</td>
			<td>" . $z["cuvant_en"] . "</td></tr>    ";
}
echo "</table></br /><button onclick=window.location.href='meniu.html'>Revenire</button>";
?>
