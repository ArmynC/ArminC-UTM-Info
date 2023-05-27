<?php
$doc = new DOMDocument(); 
$doc->load('http://www.bnro.ro/nbrfxrates.xml');   
$cubes = $doc->getElementsByTagName('Cube'); 
foreach($cubes as $cube){ 
        $date = $cube->getAttribute('date'); 
        $rates = $cube->getElementsByTagName('Rate'); 
        foreach($rates as $rate){ 
        $valuta = $rate->getAttribute('currency');            
		switch ($valuta){ 
        case 'EUR': $euro = $rate->nodeValue; break; 
        case 'USD': $dolar = $rate->nodeValue; break; 
        case 'XAU': $aur = $rate->nodeValue; break; 
        }
        }
}

echo '<br />Cursul BNR din data de: '.$date.'<br>';
echo ' <b>1 EURO: </b>'.$euro.'lei;  <b>1 DOLAR:</b> '.$dolar.'lei; <b> 1 gr AUR: </b>'.$aur."lei"; // afisarea valorilor

$val=145678;
echo "<br />poti cumpara de :".$val." lei, urmatoarele valute: <br />";
printf("%.4f",$val/$euro); echo " EURO; <br />";
printf("%.4f",$val/$dolar); echo " Dolari; <br />";
printf("%.4f",$val/$aur); echo " gr. Aur <br />"; 
//exemplu cu array
$Valuta = array(
 1 => "EUR",
 2 => "USD",
 3 => "XAU",
 );
for ($i = 1; $i <= count($Valuta); $i++)
 echo $Valuta[$i]." ";

?>