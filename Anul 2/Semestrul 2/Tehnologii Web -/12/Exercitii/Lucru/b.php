<?php  
$file = 'exemplu_d.xml'; 
// Calea si numele fisierului .xml
$doc = new DOMDocument();                 
// Creaza un nou obiect in memorie
$doc->load($file);                        
// Incarca datele din $file in obiectul nou creat
$get_elms = $doc->getElementsByTagName("*");     
// Preia toate elementele ("*") stocate in obiect
$nr_elms = $get_elms->length;              
// Obtine numarul de elemente (Nodes) preluate

// Parcurge variabila cu obiectul ce stocheaza elementele (Nod-urile)
for($i = 0; $i<$nr_elms; $i++) {
  $node = $get_elms->item($i);              
  // Preia fiecare Nod din parcurgere
  $element = $node->nodeName;               
  // Obtine numele elementului

  // Daca elementul este 'p', modifica continutul
  if($element=='p') {
    $node->nodeValue = 'MODIFICARE CONTINUT';
// Creaza noul element dupa 'p' (in elementul Parinte unde se afla si 'p'),
// cu nume si continut text
$element_nou = $doc->createElement('div', 'NOUL ELEMENT ADAUGAT');
$node->parentNode->appendChild($element_nou);  
 // Adauga in elementul parinte noul element creat
  }
}

// Daca poate salva noul continut XML (din obiectul $doc) intr-un fisier .xml
// Preia continutul si intr-un sir (cu "saveXML()") pt. a afisa rezultatul obtinut
if($doc->save('exemplu2_dom.xml')) {
  echo htmlentities($doc->saveXML());
}



?>
