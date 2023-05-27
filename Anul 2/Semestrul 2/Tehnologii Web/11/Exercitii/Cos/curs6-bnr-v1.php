<?php
$page = "http://www.bnr.ro/Home.aspx";
$bnr_curs = "file_curs.php";

$tag_start = "<span>";
$tag_stop = "</span>";

$parsed_file = implode("",file($page));
$all_in_array = explode($tag_start,$parsed_file);

$currencies = array();

for($i=1;$i<=2;$i++)
{
	$currencies[]=explode($tag_stop,$all_in_array[$i]);
}

$eur = $currencies[0][0];
$usd = $currencies[1][0];

$data = date("d-m-Y H:i:s");
$f_bnr = fopen($bnr_curs,"w");
$text_fis = "Data: $data\n";
$text_fis .= "EUR: $eur\n";
$text_fis .= "USD: $usd\n";

fputs($f_bnr,$text_fis);

echo "SF";
?>