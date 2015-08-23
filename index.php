<!DOCTYPE html>
<html>
<head>
  <title>10mvcmarket1</title>
  <style>
  	#left {
  		width: 75%;
  		position: fixed;
  	}
  	#right {
  		width: 25%;
  		position: absolute;
  		right: 0;
  		background: grey;
  		margin: 20px;
  		paddaing: 4px;
  	}
  </style>
  </head>
<body>

<h3>10mvcmarket1, index</h3>

<div id="right"><?php include("menu.php"); ?></div>

<div id="left">
<h1>10mvcmarket1, practice2</h1>

	<?php
	
	include('Produit.inc');
	include('DBHandle.inc');
	include('VueListe.inc');
	include('ListeProduits.inc');

	$listControler = new ListeProduits();
	$listControler->showModel();

	echo('!index!');
	
	?>
	
</div>

</body>
</html>