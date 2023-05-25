<?php
$obj = simplexml_load_file("XML2.xml");        
$client = $obj->client;   
 // Preia toate elementele cu nume "titlu" (intr-o variabila tip array)
// Parcurge matricea cu $titlu si adauga, cu "addChild()" inca un element stoc cu val 1
for($i=0; $i<count($client); $i++) {
  $client[$i]->addChild('stoc', 1);
}
// Modifica valoarea atributului 'nume' din elementul "autor" al primul element "titlu"
$client[0]->name = 'Nume Modificat';

// Folosind sistemul de lucru cu array, creaza inca un element "autor" )
$client[0]->name[1] = 'Alt autor';
$client[0]->name[1]['atribut'] = 'Atribut_adaugat';
// Adauga datele XML intr-un sir
$xml_doc = $obj->asXML();
echo htmlentities($xml_doc); 
?>
