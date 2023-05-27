<?php
define('DB_SERVER', 'localhost'); // IP host
define('DB_USERNAME', 'root'); // utilizator
define('DB_PASSWORD', ''); // parola
define('DB_DATABASE', 'tehnologii_web'); // nume baza de date setata
$db = mysqli_connect(DB_SERVER,DB_USERNAME,DB_PASSWORD,DB_DATABASE);
?>