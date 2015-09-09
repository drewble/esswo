<?php
//kpr(get_defined_vars());
//http://drupalcontrib.org/api/drupal/drupal--modules--node--node.tpl.php
//node--[CONTENT TYPE].tpl.php

//$content['field_name']['#theme'] = "nomarkup";
//hide($content['field_name']);
if ($classes) {
  $classes = ' class="'. $classes . ' "';
}

if ($id_node) {
  $id_node = ' id="'. $id_node . '"';
}

hide($content['comments']);
hide($content['links']);
hide($content['field_background_image']);

$featureImgUrl = file_create_url($content['field_background_image'][0]['file']['#item']['uri']);
?>

<!-- node.tpl.php -->
<div class="content" style="background-image:url(<?php print $featureImgUrl; ?>);">
  <?php print render($content);?>
</div>
