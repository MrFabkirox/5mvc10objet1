<?php
//DBHandle

	class DBHandle {
		private $db;
		private $req;
		
		public function __construct($Serveur="localhost", $db='MVCMarket', $usr='root', $pwd='root') {
		
			$this->db = new PDO("mysql:host=$Serveur; $db=MVCMarket", $usr, $pwd);	
			$this->req = $this->db->prepare("select * from produits");
		
		}
		
		function getData() {
			$res = array();
			
			$res = $this->req->execute();
			while($prod = $this->req->fetchObject("Produit")) {
				$res[] = $prod;
			}
			return $res;
			
		}
	
	}

?>