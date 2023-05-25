<?php
$obj = simplexml_load_file("ex1.xml");          
$titlu = $obj->titlu;                    
$text = $obj->titlu[0]->text;            
// preia intr-un array elementele "autor" si "pret" 
for($i=0; $i<count($titlu); $i++) {
  $autor[] = $titlu[$i]->autor;
  $pret[] = $titlu[$i]->pret;
}


echo $autor[0]['nume']. '<br >';           
echo $pret[0]['suma']. '<br> Afisare text.........';
            
for($i=0; $i<count($text); $i++) {
  echo $text[$i]. ' <br /> ';       
}


 


echo '<br><br>';
 $text = $obj->titlu[1]->text;            
// preia intr-un array elementele "autor" si "pret" 
for($i=0; $i<count($titlu); $i++) {
  $autor[] = $titlu[$i]->autor;
  $pret[] = $titlu[$i]->pret;
}

echo $autor[1]['nume']. '<br >';           
echo $pret[1]['suma']. '<br> Afisare text.........';
            
for($i=0; $i<count($text); $i++) {
  echo $text[$i]. ' <br /> ';       
}

echo '<br><br>';



$text = $obj->titlu[2]->text;            
// preia intr-un array elementele "autor" si "pret" 
for($i=0; $i<count($titlu); $i++) {
  $autor[] = $titlu[$i]->autor;
  $pret[] = $titlu[$i]->pret;
}

echo $autor[2]['nume']. '<br >';           
echo $pret[2]['suma']. '<br> Afisare text.........';
            
for($i=0; $i<count($text); $i++) {
  echo $text[$i]. ' <br /> ';       
}


$suma =0.0;
for($i=0; $i<count($titlu); $i++)
 {
  $suma= $suma + $titlu[$i]->pret['suma'];
 }
echo "Suma totala este ". $suma;
?>
