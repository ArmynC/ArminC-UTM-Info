<?php
// incarca fisierul exemplu.xml
if (!$xml = simplexml_load_file('exemplu.xml')) {
    trigger_error('Eroare la citirea fisierului', E_USER_ERROR);
}

foreach ($xml->channel->item as $item) {
    $title = $item->title;
    $description = $item->description;
    $link = $item->link;

    echo "Title: $title<br>";
    echo "Description: $description<br>";
    echo "Link: $link<br><br>";
}
?>
