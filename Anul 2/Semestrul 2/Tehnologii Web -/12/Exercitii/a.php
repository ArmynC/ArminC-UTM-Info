<?php
//creare document XML
$document = new DomDocument('1.0', 'utf-8');  
$r = $document->createElement('html'); 
$r = $document->appendChild($r);  
$body = $document->createElement('body');  
$body = $r->appendChild($body);               
$body->setAttribute('bgcolor', '#ffff00'); 
$paragraff = $document->createElement('p');  
$paragraff = $body->appendChild($paragraff); 
$text = $document->createTextNode('Facultatea de informatica');       
$text = $paragraff->appendChild($text);                            
//salveaza fisier si testeaza salvarea pe server
if($document->save("exemplu_d.xml")) 
echo 'Documentul exemplu_d.xml a fost creat';
else  echo 'Eroare: nu a putut fi creat documentul exemplu_d.xml ';
?>
