<?php
$obj = simplexml_load_file("XML1.xml");        
$user = $obj->user;   
 // Preia toate elementele cu nume "titlu" (intr-o variabila tip array)
// Parcurge matricea cu $titlu si adauga, cu "addChild()" inca un element stoc cu val 1
for($i=0; $i<count($user); $i++) {
  $user[$i]->addChild('stoc', 1);
}
// Modifica valoarea atributului 'nume' din elementul "autor" al primul element "titlu"
$user[0]->nume='NUME MODIFICAT';

// Folosind sistemul de lucru cu array, creaza inca un element "autor" )
$user[0]->caracteristici[1] = 'Alte caracteristici';
// Adauga datele XML intr-un sir
$xml_doc = $obj->asXML();
echo htmlentities($xml_doc); 
?>
