<?php	
	session_start();
	unset($_SESSION["cos"]);	
	header("Location: TEST.php");
	echo "gata...";
?>