<?php
    session_start(); // porneste sesiunea
    include "config.php"; // include fisierul de configurare a bazei de date
    
    if ($_SERVER["REQUEST_METHOD"] == "POST") { // verifica daca metoda de request este POST
        $username = mysqli_real_escape_string($db, $_POST["username"]); // preia numele de utilizator si il protejeaza impotriva SQL injection
        $password = mysqli_real_escape_string($db, $_POST["password"]); // preia parola si o protejeaza impotriva SQL injection
    
        $sql = "SELECT id FROM users WHERE nickname = '$username' and password = '$password'"; // construieste interogarea SQL pentru a verifica daca exista un utilizator cu numele si parola specificate
        $result = mysqli_query($db, $sql); // executa interogarea SQL
        $row = mysqli_fetch_array($result, MYSQLI_ASSOC); // preia rezultatul interogarii
        $count = mysqli_num_rows($result); // numara numarul de randuri din rezultat
    
        if ($count == 1) { // daca exista un singur rand in rezultat, atunci autentificarea este reusita
            $_SESSION["login_user"] = $username; // seteaza variabila de sesiune "login_user" cu numele de utilizator
            header("location: hub.php"); // redirectioneaza utilizatorul catre pagina hub.php
        } else { // daca nu exista un singur rand in rezultat, atunci autentificarea a esuat
            $error = "Numele de utilizator sau parola este invalida!"; // seteaza mesajul de eroare
        }
    }
?>

<!DOCTYPE html>
<html>
    <head>
        <title>Autentificare</title>
        <link rel="stylesheet" type="text/css" href="style/login.css">
        <meta name="viewport" content="width=device-width, initial-scale=1.0">
    </head>
    <body>
        <div class="container">
            <div class="login-box">
                <h1>Autentificare</h1>
                <form action="login.php" method="post">
                    <label for="username">Nume utilizator:</label>
                    <input type="text" name="username" placeholder="Introdu numele de utilizator" required>
                    <label for="password">Parola:</label>
                    <input type="password" name="password" placeholder="Introdu parola" required>
                    <input type="submit" name="login" value="Autentifica-te">
                </form>
                <?php if(isset($error)) { echo "<p class='error'>" . $error . "</p>"; } ?>
                <p>Nu ai creat un cont? <a href="signup.php">Inregistreaza-te</a></p>
            </div>
        </div>
    </body>
</html>
