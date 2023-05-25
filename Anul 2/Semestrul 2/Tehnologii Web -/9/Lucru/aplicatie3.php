<html>
<head><title>explode, implode , print_r</title> </head>

<body>
<h1> Exemplificare utilizare implode, explode, print_r </h1>
<p> Cerinta : Realizati un script php care utilizeaza functiile print_r, explode si implode </p>
<?php
    $array_var=array();
    $string_var="";
    for($i=1;$i<5;$i++)
    {
        $array_var []="Element_$i";
    }
?>

<h3> Scrie print_r($array_var) </h3>
<p> <?php print_r($array_var); ?> </p>

<hr>Implode array ->string cu sperator ':', printr_r($string_var); ?> </p>
<hr />
<h3> Explode string into array, print_r($array_var2)</h3>
<pre> <?php $array_var2=explode(":",$string_var); print_r($array_var2); ?></pre>



</body>


</html>