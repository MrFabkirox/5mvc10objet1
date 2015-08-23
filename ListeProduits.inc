<?php
//ListeProduits

	class ListeProduits {
		private $db;
		private $model;
		
		public function __construct() {
		
			$this->db = new DBHandle();
			$this->model = $this->db->getData();
		
		}
		
		function showModel() {
			displayModel($this->model);
		}
		
	}


?>