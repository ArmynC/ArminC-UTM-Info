<?php
$obj = simplexml_load_file("ex1.xml");        
$titlu = $obj->titlu;   
 // Preia toate elementele cu nume "titlu" (intr-o variabila tip array)
// Parcurge matricea cu $titlu si adauga, cu "addChild()" inca un element stoc cu val 1
for($i=0; $i<count($titlu); $i++) {
  $titlu[$i]->addChild('stoc', 1);
}
// Modifica valoarea atributului 'nume' din elementul "autor" al primul element "titlu"
$titlu[0]->autor['nume'] = 'Nume Modificat';

// Folosind sistemul de lucru cu array, creaza inca un element "autor" )
$titlu[0]->autor[1] = 'Alt autor';
$titlu[0]->autor[1]['atribut'] = 'Atribut_adaugat';
// Adauga datele XML intr-un sir
$xml_doc = $obj->asXML();
echo htmlentities($xml_doc); 
?>
