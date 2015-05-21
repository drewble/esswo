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

$bgImg = file_create_url($content['field_background_image'][0]['#item']['uri']);
?>

<!-- node.tpl.php -->
<section class="hero" style="background-image:url(<?php print $bgImg; ?>);">
  <?php print $mothership_poorthemers_helper; ?>
  <div class="hero-inner">
    <a href="" class="hero-logo"><img src="https://raw.githubusercontent.com/thoughtbot/refills/master/source/images/placeholder_logo_1.png
  " alt="Logo Image"></a>
    <div class="hero-copy">
      <h1><?php print $content['field_hero_primary_text'][0]['#markup']; ?></h1>
      <h2><?php print $content['field_hero_secondary_text'][0]['#markup']; ?></h2>
    </div>
    <?php print render($content['field_call_to_action']); ?>
  </div>
</section>
