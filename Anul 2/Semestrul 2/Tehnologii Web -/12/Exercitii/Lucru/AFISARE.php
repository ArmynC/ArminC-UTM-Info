<?php
$obj = simplexml_load_file("XML1.xml");          
$user=$obj->user;
$text = $obj->user[0]->caracteristici; 
for($i=0; $i<count($user); $i++) {
    $id[] = $user[$i]->id;
    $os[] = $user[$i]->os;
    $ram[] = $user[$i]->ram;
  }
  
 for($i=0; $i<count($user);$i++)
 {
    echo 'USERUL '.  $user[$i]->name.  '<br> ID-UL' .$id[$i] .'<br> OS' . $os[$i] . '<br> RAM' . $ram[$i] ;

    echo '<br><br>';
 }
     
  
?>
