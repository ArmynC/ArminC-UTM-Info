<?php   
// incarca fisierul exemplu.xml

if(!$xml = simplexml_load_file('exemplu.xml')){
    trigger_error('Eroare ',E_USER_ERROR);
}
 
// afiseaza titlul primului element

echo '<div style=color:red>Elementele sunt :<br />';
for($i=0;$i<3;$i++)
{

echo $xml->channel->item[$i]->title.';';
 } echo '</div>';
?>