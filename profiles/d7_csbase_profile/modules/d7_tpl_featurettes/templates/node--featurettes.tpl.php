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

$icon = file_create_url($content['field_icon_image'][0]['#item']['uri']);
?>

<!-- node.tpl.php -->
<?php print $mothership_poorthemers_helper; ?>
<div class="bullet-icon bullet-icon-1">
  <img src="<?php print $icon ?>" alt="">
</div>
<div class="bullet-content">
  <h2><?php print $node->title; ?></h2>
  <p><?php print $content['field_small_blurb'][0]['#markup']; ?></p>
</div>
