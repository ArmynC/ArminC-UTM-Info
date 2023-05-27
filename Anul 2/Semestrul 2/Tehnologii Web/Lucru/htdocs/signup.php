<?php
include("config.php");

if($_SERVER["REQUEST_METHOD"] == "POST") {
	$username = mysqli_real_escape_string($db, $_POST['username']);
	$password = mysqli_real_escape_string($db, $_POST['password']);
	$confirm_password = mysqli_real_escape_string($db, $_POST['confirm_password']);
	$real_name = mysqli_real_escape_string($db, $_POST['real_name']);
	$email = mysqli_real_escape_string($db, $_POST['email']);

	if(strlen($username) < 6) {
		$error = "Numele de utilizator trebuie sa aiba cel putin 6 caractere.";
	} elseif(strlen($password) < 8) {
		$error = "Parola trebuie sa fie formata din cel putin 8 caractere.";
	} elseif(!preg_match('/[\'^£$%&*()}{@#~!?><>,|=_+¬-]/', $password)) {
		$error = "Parola trebuie sa contina cel putin un simbol.";
	} elseif($password != $confirm_password) {
		$error = "Parolele introduse nu coincid.";
	} elseif(strlen($real_name) < 6) {
		$error = "Numele real trebuie sa aiba cel putin 6 caractere.";
	} else {
		$sql = "INSERT INTO users (nickname, password, real_name, email) VALUES ('$username', '$password', '$real_name', '$email')";
		$result = mysqli_query($db, $sql);

		if($result) {
			header("location: login.php");
		} else {
			$error = "Error: " . mysqli_error($db);
		}
	}
}
?>

<!DOCTYPE html>
<html>
<head>
	<title>Inregistrare</title>
	<link rel="stylesheet" type="text/css" href="style/signup.css">
	<meta name="viewport" content="width=device-width, initial-scale=1.0">
</head>
<body>
<div class="container">
	<div class="signup-box">
		<h1>Inregistrare</h1>
		<form action="signup.php" method="post">
			<label for="username">Numele de utilizator:</label>
			<input type="text" name="username" placeholder="Introdu numele de utilizator" required>
			<label for="password">Parola:</label>
			<input type="password" name="password" placeholder="Introdu parola" required>
			<label for="confirm_password">Confirmare parola:</label>
			<input type="password" name="confirm_password" placeholder="Confirma parola" required>
			<label for="real_name">Numele real:</label>
			<input type="text" name="real_name" placeholder="Introdu numele real" required>
			<label for="email">E-Mail:</label>
			<input type="email" name="email" placeholder="Introdu email-ul" required>
			<input type="submit" name="signup" value="Inregistreaza-te">
		</form>
		<?php if(isset($error)) { echo "<p class='error'>" . $error . "</p>"; } ?>
		<p>Ai deja un cont? <a href="login.php">Autentifica-te</a></p>
	</div>
</div>
</body>
</html>