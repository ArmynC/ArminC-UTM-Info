<!DOCTYPE html>
<html>
<head>
	<meta charset="UTF-8">
	<title>Explode, Implode, print_r</title>
</head>
<body>
	<h1>Exemplificare utilizare implode, explode, print_r</h1>
    <p>Cerinta: Realizati un script php care utilizeaza functiile printr_r, explode, implode.</p>
	<?php
		$array_var=array();
        $string_var="";
        for($i=1;$i<=5;$i++){
            $array_var[$i]=$i;
        }
	?>
	<h3>Scrie print_r($array_var)</h3>
    <p><?php print_r($array_var); ?> </p>

    <h3>Implode array -> string, cu separator ':', print_r($string_var)</h3>
    <p>$string_var = <?php echo $string_var = implode(":", $array_var); print_r($string_var); ?></p>

    
    <h3>Explode string -> array, cu separator ':', print_r($array_var2)</h3>
    <pre>$array_var2 = <?php $array_var2 = explode(":", $string_var); print_r($array_var2); ?></pre>
    <?php
		echo "<p>Selection completed.</p>";
	?>
</body>
</html>
