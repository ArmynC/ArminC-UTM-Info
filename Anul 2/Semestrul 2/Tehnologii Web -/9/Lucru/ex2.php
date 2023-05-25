<!DOCTYPE html>
<html>
<head>
	<meta charset="UTF-8">
	<title>My Web Page</title>
	<style>
		body {
			font-family: Arial, sans-serif;
			background-color: #f7f7f7;
		}
		h1 {
			font-size: 32px;
			color: #333;
			margin-bottom: 20px;
		}
		h2 {
			font-size: 24px;
			color: #333;
			margin-bottom: 10px;
		}
		select {
			font-size: 16px;
			padding: 5px 10px;
			border: 1px solid #ccc;
			border-radius: 4px;
			background-color: #fff;
			color: #333;
			margin-right: 10px;
		}
		input[type="submit"] {
			font-size: 16px;
			padding: 5px 10px;
			border: none;
			border-radius: 4px;
			background-color: #007bff;
			color: #fff;
			cursor: pointer;
		}
		input[type="submit"]:hover {
			background-color: #0069d9;
		}
	</style>
</head>
<body>
	<h1>Welcome</h1>
	<?php
		$nume = "Popescu"; //preluam dintr-un input...$_GET; $_POST
		$curs = "Tehnologii Web";
		echo "<p><b><i>Welcome, Mr/Ms </i></b>".$nume."</p>";
		echo "<p>You are attending the course: ".$curs."</p>";
	?>
	<h2>Select a date:</h2>
	<form>
		<label for="day"><b>Day:</b></label>
		<select name="day" id="day">
			<?php
			for($i=1;$i<=31;$i++)
				echo "<option value=".$i.">".$i."</option>";
			?>
		</select>
		<label for="month"><b>Month:</b></label>
		<select name="month" id="month">
			<?php
			for($i=1;$i<=12;$i++)
				echo "<option value=".$i.">".$i."</option>";
			?>
		</select>
		<label for="year"><b>Year:</b></label>
		<select name="year" id="year">
			<?php
				$currentY = date('Y');
				for($i=0;$i<=30;$i++){
					$an = $currentY - $i;
					echo "<option value=".$an.">".$an."</option>";
				}
			?>
		</select>
		<input type="submit" value="Submit">
	</form>
	<?php
		echo "<p>Selection completed.</p>";
	?>
</body>
</html>
