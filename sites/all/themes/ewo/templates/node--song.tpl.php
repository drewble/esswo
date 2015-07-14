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
hide($content['field_spotify']);
hide($content['field_mp3']);
?>

<!-- node.tpl.php -->
<article <?php print $id_node . $classes .  $attributes; ?> role="article">
  <?php print $mothership_poorthemers_helper; ?>

  <?php if ($display_submitted): ?>
  <footer>
    <?php print $user_picture; ?>
    <span class="author"><?php print t('Written by'); ?> <?php print $name; ?></span>
    <span class="date"><?php print t('On the'); ?> <time><?php print $date; ?></time></span>

    <?php if(module_exists('comment')): ?>
      <span class="comments"><?php print $comment_count; ?> Comments</span>
    <?php endif; ?>
  </footer>
  <?php endif; ?>

  <div class="content">
    <?php if (!$page): ?>
      <div class="audio-btn">
        <a href="#">X</a>
        <a href="#" id="remove">X</a>
      </div>
    <?php endif; ?>
    <?php print render($content);?>
    <?php if (!$page): ?>
      <div class="play-audio">
        <?php print render($content['field_spotify']); ?>
        <?php if (!isset($content['field_spotify'][0])): ?>
          <?php print render($content['field_mp3']); ?>
        <?php endif; ?>
      </div>
    <?php endif; ?>
  </div>

  <?php print render($content['comments']); ?>
</article>
