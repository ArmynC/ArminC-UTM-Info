<?php
$servername = "localhost";
$username = "root";
$password = "";
$dbname = "utm";

$con = new mysqli ($servername, $username, $password, $dbname);

$c_ro = $_POST['c_ro'];
$c_en = $_POST['c_en'];
$c_it = $_POST['c_it'];

$sql = "INSERT INTO dictionar (cuvant_ro, cuvant_en, cuvant_it) VALUES ('$c_ro','$c_en','$c_it');";
if ($con -> query ($sql)) {
    echo "datele au fost introduse";
} else {
    echo "Failed to con to MySQL: " . $con -> error;
}
echo "
        <form name='a' method='post' action ='raspuns.php'>
            continuati:<input type='text' name='r' size='1' value='d' /><b>da/nu</b>
            <input type='submit' value='trimite' />
        </form>
    ";
?>
