<?php
//kpr(get_defined_vars());
//kpr($theme_hook_suggestions);
//template naming
//page--[CONTENT TYPE].tpl.php

// GNAR Background Image for Nodes
if (!empty($bgImg)) {
  $bgImgUrl = file_create_url($bgImg['uri']);
}
?>
<?php if( theme_get_setting('mothership_poorthemers_helper') ){ ?>
<!-- page.tpl.php-->
<?php } ?>

<?php if(!empty($bgImg)): ?>
<style type="text/css">
  .hero {
    background: url(<?php print $bgImgUrl; ?>) no-repeat scroll center center;
    background-size: cover;
  }
</style>
<?php endif; ?>

<?php print $mothership_poorthemers_helper; ?>

<header role="banner">
  <h1><a href="<?php print $front_page; ?>" title="<?php print t('Home'); ?>" rel="home">Essential Worship</a></h1>

  <?php if($page['header']): ?>
    <?php print render($page['header']); ?>
  <?php endif; ?>

</header>

<div class="hero<?php if(!empty($bgImg)): ?> with-img<?php endif; ?>">
  <?php print render($page['hero']); ?>
  <?php print render($title_prefix); ?>
  <?php if ($title): ?>
    <h1><?php print $title; ?></h1>
  <?php endif; ?>
  <?php print render($title_suffix); ?>
</div>

<div class="page outer-container">

  <div role="main" id="main-content<?php if ($page['sidebar']): ?> with-side<?php endif; ?>">

    <?php if ($action_links): ?>
      <ul class="action-links"><?php print render($action_links); ?></ul>
    <?php endif; ?>

    <?php if (isset($tabs['#primary'][0]) || isset($tabs['#secondary'][0])): ?>
      <nav class="tabs"><?php print render($tabs); ?></nav>
    <?php endif; ?>

    <?php if($page['highlighted'] OR $messages){ ?>
      <div class="drupal-messages">
      <?php print render($page['highlighted']); ?>
      <?php print $messages; ?>
      </div>
    <?php } ?>


    <?php print render($page['content_pre']); ?>

    <?php print render($page['content']); ?>

    <?php print render($page['content_post']); ?>

  </div><!-- /main-->

  <?php if ($page['sidebar']): ?>
    <div class="sidebar">
    <?php print render($page['sidebar']); ?>
    </div>
  <?php endif; ?>

</div><!-- /page-->

<footer role="contentinfo">
  <?php print render($page['footer']); ?>
</footer>

