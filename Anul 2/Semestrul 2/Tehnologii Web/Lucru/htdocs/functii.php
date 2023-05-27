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
        <title>Functii</title>
        <meta name="viewport" content="width=device-width, initial-scale=1.0">
    </head>
    <body>
        <div id="container">
            <div>
               [<b onmouseover="document.fgColor='green'">Green</b>]<br /><br /><br />
               [<b onmouseover="document.bgColor='blue'">Blue</b>]<br /><br /><br />
               [<b onmouseover="document.bgColor='yellow'">Yellow</b>]<br /><br /><br />
               [<b onmouseover="document.bgColor='red'">Red</b>]<br /><br /><br />
            </div>
            <div>
                <script type="text/javascript">
                            function data(){
                    var azi= new Date();
                    var ziua = azi.getDate();
                    if(ziua<10) ziua="0"+ziua;//08
                    var luna = azi.getMonth()+1;
                    if(luna<10) luna="0"+luna;
                    var anul = azi.getFullYear();
                    var ora = azi.getHours();
                    var minutul = azi.getMinutes();
                    var secunda = azi.getSeconds();
                    document.write("Astazi suntem in " + ziua +"/"+ luna+"/"+ anul+", ");
                    document.write("ora este " + ora +":"+ minutul+":"+ secunda);
                    document.write('<style type="text/css"');
                    }

                    data();
                </script>
            </div>
        </div>
    </body>
</html>