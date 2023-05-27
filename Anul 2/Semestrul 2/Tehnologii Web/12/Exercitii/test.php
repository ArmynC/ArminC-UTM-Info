<?php
// incarca fisierul exemplu.xml
if(!$xml = simplexml_load_file('exemplu.xml')){
    trigger_error('Eroare la citirea fisierului',E_USER_ERROR);
}
 
foreach($xml as $channel){
    echo $channel->title."<br>";
    echo $channel->link;
}  
?>