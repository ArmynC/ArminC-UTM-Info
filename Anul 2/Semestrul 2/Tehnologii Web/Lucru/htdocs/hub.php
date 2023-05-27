<?php
    session_start();
    
    if(!isset($_SESSION["login_user"])){
        header("location: login.php");
        exit();
    }
?>

<!DOCTYPE html>
<html>
    <head>
        <title>Hub Page</title>
        <link rel="stylesheet" type="text/css" href="style/hub.css">
        <meta name="viewport" content="width=device-width, initial-scale=1.0">
    </head>
    <body>
        <div class="container">
            <div class="content">
                <h3>Salutare <span><?php echo $_SESSION["login_user"]; ?></span></h3>
                <h1>Bun venit in <span>Hub</span></h1>
                <p>Selecteaza o pagina din meniu.</p>
                <a href="calculator.php" class="btn">calculator</a>
                <a href="animatie.php" class="btn">animatie</a>
                <a href="functii.php" class="btn">functii</a>
                <a href="chestionar.php" class="btn">chestionar</a>
                <a href="xml.php" class="btn">xml</a>
                <a href="logout.php" class="btn">logout</a>
            </div>
        </div>
    </body>
</html>
