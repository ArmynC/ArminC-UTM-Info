<?php
/*
//preluare BNR

	*/
	
	$euro=4.998;
	echo ' <b>1 EURO: </b>'.$euro."lei"; 
	session_start();
	$i=0;
	$produse[$i]["denumire"] = "produs 1";	$produse[$i++]["pret"] = "5";
	$produse[$i]["denumire"] = "produs 2";	$produse[$i++]["pret"] = "10";
	$produse[$i]["denumire"] = "produs 3";	$produse[$i++]["pret"] = "15";
	$produse[$i]["denumire"] = "produs 4";	$produse[$i++]["pret"] = "20";
	$produse[$i]["denumire"] = "produs 5";	$produse[$i++]["pret"] = "25";
	$produse[$i]["denumire"] = "produs 6";	$produse[$i++]["pret"] = "30";
	$produse[$i]["denumire"] = "produs 7";	$produse[$i++]["pret"] = "35";
	$produse[$i]["denumire"] = "produs 8";	$produse[$i++]["pret"] = "40";
	$produse[$i]["denumire"] = "produs 9";	$produse[$i++]["pret"] = "45";
	$produse[$i]["denumire"] = "produs 10";	$produse[$i++]["pret"] = "50";
		if(isset($_POST["adauga"])) {
		$cant = $_POST["cant"];
		if(is_numeric($cant)) {
			$pr["id"] = $_POST["prod"];
			$pr["cant"] = $cant;
			$gasit = false;
			if(isset($_SESSION["cos"]) && is_array($_SESSION["cos"]))
			foreach($_SESSION["cos"] as $i=>$p) {
				if($p["id"]==$pr["id"]) {
					$_SESSION["cos"][$i]["cant"] = $pr["cant"];
					if($_SESSION["cos"][$i]["cant"]<=0)
						unset($_SESSION["cos"][$i]);
					$gasit = true;
				}
			}
			if(!$gasit)
				$_SESSION["cos"][] = $pr;
		}
	}	
?>
<html>
	<head><title>Exemplu Cos</title>
	<script>
	function sterge(x)
	{
		x.value="";
	}
	</script>
	</head>
	<body>
		<form action="TEST.php" method="post">
			<label for="prod">
			Lista Produse:
			</label>							
			<select id="prod" name="prod">
				<?php
					foreach($produse as $k=>$p):
				?>
				<option value="<?php echo $k; ?>"><?php echo $p["denumire"]." - ".$p["pret"]." Euro"?></option>
				<?php endforeach; ?>
			</select>			
			<label for="cant">
			Cantitate:
			</label>
			<input type="text" name="cant" id="cant" onclick="sterge(cant)" />			
			<input type="submit" value="Afisare in pagina" name="adauga" />
			<input type="reset" value="anuleaza" />
		</form>
		<br />
		<?php 	if(isset($_SESSION["cos"]) && is_array($_SESSION["cos"]) && count($_SESSION["cos"])):		?>
		<table border="1" align="center">
			<thead>
				<tr>
					<th>Denumire Produs</th>
					<th>Pret unitar</th>
					<th>Cantitate</th>
					<th>Valoare [in lei]</th>					
					</tr>
			</thead>
			<tbody>
				<?php
					foreach($_SESSION["cos"] as $p):
				?>
				<tr><td><?php echo $produse[$p["id"]]["denumire"]; ?></td>
				<td align="center"><?php echo sprintf("%01.2f",$produse[$p["id"]]["pret"]); ?></td>
				<td align="center"><?php echo $p["cant"]; ?></td>
				<td align="center"><?php echo sprintf("%01.2f",($produse[$p["id"]]["pret"]*$p["cant"]*$euro)); ?> </td></tr>
				<?php 	endforeach; ?>
			</tbody>
			</table>
		<a href="descarca_cos.php"><i>Goleste cosul</i></a>
				<?php			endif;		?>
				
	</body>
</html>
