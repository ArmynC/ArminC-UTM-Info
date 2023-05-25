<?php

$fp = file("http://www.bnr.ro/nbrfxrates.xml");

foreach($fp as $linie)
{
if(preg_match('<Rate currency="EUR">',$linie))
	$eur = str_replace('<Rate currency="EUR">','',$linie);
else if(preg_match('<Rate currency="USD">',$linie))
	$usd = str_replace('<Rate currency="USD">','',$linie);
}
$eur = str_replace('</Rate>','',$eur);
$usd = str_replace('</Rate>','',$usd);

$data = date("d-m-Y H:i:s");
$cache = "curs.php";
$continut = "<?php\n";
$continut .= "\$eur_2 = $eur ;";
$continut .= "\$usd_2 = $usd ;";
$continut .= "?>\n";

$f_bnr = fopen($cache,"w");
fputs($f_bnr,$continut);

include("curs.php");
echo "EUR: ".$eur_2."<br>";
echo "USD: ".$usd_2."<br>";

$Pret_EUR = 5000;
echo "Pretul masinii la cursul BNR este: ". $Pret_EUR*$eur_2;
// number_format() pune separator de mii
?>