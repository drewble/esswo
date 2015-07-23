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
  <h1><a href="<?php print $front_page; ?>" title="<?php print t('Home'); ?>" rel="home" class="icon icon-icons_logo">Essential Worship</a></h1>

  <button class="icon icon-icons_menu" data-grunticon-embed></button>
  <?php if($page['header']): ?>
    <?php print render($page['header']); ?>
  <?php endif; ?>

</header>

<div class="hero<?php if(!empty($bgImg)): ?> with-img<?php endif; ?>">
  <?php if(isset($node)): ?>
    <?php if($node->type == 'song'): ?>
    <a class="bread icon icon-icons_find_song" href="/songs">Find Another Song</a>
    <?php endif; ?>
  <?php endif; ?>
  <?php print render($page['hero']); ?>
  <?php print render($title_prefix); ?>
  <?php if ($title): ?>
    <h1><?php print $title; ?></h1>
  <?php endif; ?>
  <?php print render($title_suffix); ?>

  <?php if(!empty($subtitle)): ?>
    <h2><?php print $subtitle; ?></h2>
  <?php endif; ?>
  <?php if(!empty($resources)): ?>
    <div class="btns">
      <a class="icon-btn icon-icons_add" id="planning">Add to Planning Center</a>
      <a class="icon-btn icon-embed" href="<?php print $resources; ?>"><span class="icon-icons_download_opt" data-grunticon-embed></span>Download Song Resources</a>
    </div>
  <?php endif; ?>
</div>

<div class="page outer-container">

  <div role="main" id="main-content<?php if ($page['sidebar']): ?> with-side<?php endif; ?>">

    <?php if(isset($node)): ?>
      <?php if($node->type == 'artist_worship_leader'): ?>
      <a class="bread icon icon-icons_find_song" href="/worship-leaders">All Worship Leaders</a>
      <?php endif; ?>
    <?php endif; ?>

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

<?php if ($page['pre_footer'] || isset($links) || $is_front): ?>
  <div class="pre-footer">
    <?php print render($page['pre_footer']); ?>
    <?php if (isset($links)): ?>
      <div class="share-link">
      <span class="icon icon-icons_share"></span>
      <?php print $links['addtoany']['title']; ?>
      </div>
    <?php endif; ?>
    <?php if ($is_front): ?>
      <a href="/insights" class="icon-btn icon-icons_insights">View All Insights</a>
    <?php endif; ?>
  </div>
<?php endif; ?>

<footer role="contentinfo">
  <div class="outer-container">
    <?php print render($page['footer']); ?>
    <div class="footer-btm">
      <span>&copy; <?php print date('Y'); ?> ESSENTIAL WORSHIP</span>
      <span><a href="/">Terms of Use</a><a href="/">Privacy Policy</a></span>
    </div>
  </div>
</footer>

<?php if(isset($node)): ?>
    <?php if($node->type == 'song'): ?>
      <div id="songModal" class="modal fade" tabindex="-1" role="dialog" aria-labelledby="myModalLabel" aria-hidden="true">
          <div class="modal-dialog">
              <div class="modal-content">
                  <div class="modal-header">
                      <button type="button" class="close" data-dismiss="modal" aria-hidden="true">×</button>
                  </div>
                  <div class="modal-body">
                      <iframe width="600" height="395" frameborder="0" allowfullscreen=""></iframe>
                  </div>
              </div>
          </div>
      </div>
  <?php endif; ?>
<?php endif; ?>

<?php if($page['modal']): ?>
  <div id="myModal" class="non-video modal fade" tabindex="-1" role="dialog" aria-labelledby="myModalLabel" aria-hidden="true">
      <div class="modal-dialog">
          <div class="modal-content">
              <div class="modal-header">
                  <button type="button" class="close" data-dismiss="modal" aria-hidden="true">×</button>
              </div>
              <div class="modal-body">
                  <?php print render($page['modal']); ?>
              </div>
          </div>
      </div>
  </div>
<?php endif; ?>

<?php if($page['outside_content']): ?>
  <?php print render($page['outside_content']); ?>
<?php endif; ?>

