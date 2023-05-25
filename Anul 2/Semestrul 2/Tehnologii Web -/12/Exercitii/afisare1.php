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
echo $pret[0]['suma']. '<br> Afisare text...<br />';
            
for($i=0; $i<count($text); $i++) {
  echo $text[$i]. ' <br /> ';       
}
?>
