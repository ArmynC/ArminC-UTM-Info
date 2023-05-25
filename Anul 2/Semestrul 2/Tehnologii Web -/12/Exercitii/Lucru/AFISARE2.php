<?php
$obj = simplexml_load_file("XML2.xml");          
$client=$obj->client;
$text = $obj->client[0]->name; 
for($i=0; $i<count($client); $i++) {
    $telefon[] = $client[$i]->numar_telefon;
    $email[] = $client[$i]->email;
    $nr_comenzi[] = $client[$i]->numar_comenzi;

  }
  
 for($i=0; $i<count($client);$i++)
 {
    echo 'CLIENTUL '.  $client[$i]->name.  '<br> NUMAR TELEFON : ' .$telefon[$i] .'<br> ADRESA DE E-MAIL : ' . $email[$i] . '<br> NUMAR COMENZI : ' . $nr_comenzi[$i]  ;

    echo '<br><br>';
 }
 $suma =0.0;
 for($i=0; $i<count($client); $i++)
  {
   $suma= $suma + $client[$i]->numar_comenzi;
  }
 echo "NUMARUL DE COMENZI TOTALE ESTE DE : ". $suma;
  
?>
