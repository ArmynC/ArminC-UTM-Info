<?php
// Load the XML file
if (!$xml = simplexml_load_file('exemplu.xml')) {
    trigger_error('Eroare la citirea fisierului', E_USER_ERROR);
}
?>

<!DOCTYPE html>
<html>
<head>
    <title>XML to HTML</title>
    <style>
        h1{text-align:center;}
        body{background-color:coral;}
        p{font-size: 20px;}
    </style>
</head>
<body>
    <h1><?php echo $xml->channel->title; ?></h1>
    <p><?php echo $xml->channel->description; ?></p>

    
        <?php foreach ($xml->channel->item as $item) { ?>
            
                <h2><?php echo $item->title; ?></h2>
                <p><?php echo $item->description; ?></p>
                <a href="<?php echo $item->link; ?>"> mai multe informatii</a>
            
        <?php } ?>

</body>
</html>
