<?php
$filename="afisare.txt";
$handle=fopen($filename, "a"); //preluare 
$a=$_POST["t1"];
$nota = 0;

// Preluam raspunsul de la prima intrebare
if(isset($_POST["c1"]))
    $a1=$_POST["c1"];
else
    $a1=0;
if(isset($_POST["c2"]))
    $a2=$_POST["c2"];
else
    $a2=0;
if(isset($_POST["c3"]))
    $a3=$_POST["c3"];
else
    $a3=0;
if(isset($_POST["c4"]))
    $a4=$_POST["c4"];
else
    $a4=0;
$p1 = $a1 + $a2 + $a3 + $a4;
if($p1 == 2){
    $nota += $p1;
}

// Preluam raspunsul de la a doua intrebare
// radio
if(isset($_POST["r"]))
    $nota += $_POST["r"];

// Preluam raspunsul de la a treia intrebare
// radio
if(isset($_POST["r2"]))
    $nota += $_POST["r2"];

// Preluam raspunsul de la a patra intrebare
// checkbox
if(isset($_POST["a1"]))
    $nota += 2;
if(isset($_POST["a2"]))
    $nota += 0;
if(isset($_POST["a3"]))
    $nota += 0;
if(isset($_POST["a4"]))
    $nota += 2;

// Preluam raspunsul de la a cincea intrebare
// radio
if(isset($_POST["r3"]))
    $nota += $_POST["r3"];

$x = "Domnul Student ".$a. " ati obtinut nota ".$nota." la testul de verificare a cunostintelor.";
echo "<br />".$x;
fwrite($handle, $x);
echo "
<form name='a' method='post' action ='raspuns_ex_laborator_9.php'>
continuati:<input type='text' name='ras' size='1' value='y' /><b>y/n</b>
<input type='submit' value='trimite' />
</form>
";
?>