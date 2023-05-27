<html>
  <body>
    <form name="f" action="chestionar.php" method="post">
      Nume Student = <input type="text" name="t1" /><br />
	  
      Fisierele care se incarca intr-un browser pot avea extensia:
      <br />
      <input type="checkbox" name="c1" value="1" /> .html <br />
      <input type="checkbox" name="c2" value="1" /> .pdf <br />
      <input type="checkbox" name="c3" value="0" /> .pptxp <br />
      <input type="checkbox" name="c4" value="0" /> .jsps <br />
	  
      Un browser reprezinta: 
	  <br />
      <input type="radio" name="r" value="0" />Un program care cauta date in
      internet <br />
      <input type="radio" name="r" value="2" />O aplicatie dedicata care
      interpreteaza fisiere cu extensia .html, .php ... <br />
	  
      PHP este: 
	  <br />
      <input type="radio" name="r2" value="2" />Un limbaj de programare ce permite modificarea paginilor web <br />
      <input type="radio" name="r2" value="0" />O aplicatie pentru navigare web <br />
      <input type="radio" name="r2" value="0" />Un IDE <br />
      <input type="radio" name="r2" value="0" />O extensie C++ <br />
	  
	  XAMPP consta in:
      <br />
      <input type="checkbox" name="a1" value="apache">Apache HTTP Server <br>
	  <input type="checkbox" name="a2" value="game">Game Engine<br>
	  <input type="checkbox" name="a3" value="video">Video Editing<br>
	  <input type="checkbox" name="a4" value="mysql">MySQL database<br>
	  
	  NodeJS este:
      <br />
      <input type="radio" name="r3" value="0" />O aplicatie de integrare protectie web<br />
      <input type="radio" name="r3" value="0" />Un program ce optimizeaza fisierele PHP<br />
      <input type="radio" name="r3" value="2" />Un mediu de executie JavaScript <br />
      <input type="radio" name="r3" value="0" />Un viewer HTML<br />
	 
      <br /> 
      <input type="reset" value="sterge" />
      <input type="submit" />
    </form>
  </body>
</html>

<?php
if(isset($_POST["t1"])){
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
    echo "
    <form name='a' method='post' action ='chestionar.php'>
    continuati:<input type='text' name='ras' size='1' value='y' /><b>y/n</b>
    <input type='submit' value='trimite' />
    </form>
    ";
}
if(isset($_POST['ras'])){
    $rasp=$_POST['ras'];
    if((strtolower($rasp))=='y'){
        header("Location: chestionar.php");
        exit();
    } else if ((strtolower($rasp))=='n') {
        header("Location: hub.php");
        exit();
    } else {
        echo "Raspuns invalid. Va rugam sa introduceti 'y' sau 'n'.";
    }
}
?>