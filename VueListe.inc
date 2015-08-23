<?php
//VueListe

	class VueListe {
	
		public function displayModel($list) {
			
			echo('<ul>');
			
			foreach($list as $line) {
				echo('<li>'.$line->getDesignation().'</li>');
			}
			
			echo('</ul>');
		}
	
	
	}


?>