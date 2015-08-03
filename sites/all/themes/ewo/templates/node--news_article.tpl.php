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
if (!$page) {
  hide($content['field_header_image']);
  hide($content['field_tags']);
  hide($content['field_news_body']);
}
if ($content['field_header_image']) {
  $newsImgUrl = file_create_url($content['field_header_image'][0]['file']['#item']['uri']);
}
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
    <?php if (!$page) { ?>
      <a class="news-copy" href="<?php print $node_url; ?>" rel="bookmark" <?php if ($content['field_header_image']): ?> style="background: url(<?php print $newsImgUrl; ?>) no-repeat scroll center center; background-size: cover;"<?php endif; ?>>
        <div class="cover"></div>
        <div class="info">
          <span><?php echo trim(format_date($node->created, "custom", "F j, Y")); ?></span><?php print render($content['field_tags']);?>
          <h2<?php print $title_attributes; ?>><?php print $title; ?></h2>
          <span class="author"><?php print t('posted by'); ?> <?php print $node->name; ?></span>
        </div>
      </a>
    <?php } else { ?>
      <?php print render($content);?>
    <?php } ?>
  </div>
</article>
