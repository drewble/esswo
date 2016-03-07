<?php
/**
 * @file eva-display-entity-view.tpl.php
 * Entity content view template
 *
 * Variables available:
 * - $classes_array: An array of classes determined in
 *   template_preprocess_views_view(). Default classes are:
 *     .view
 *     .view-[css_name]
 *     .view-id-[view_name]
 *     .view-display-id-[display_name]
 *     .view-dom-id-[dom_id]
 * - $classes: A string version of $classes_array for use in the class attribute
 * - $css_name: A css-safe version of the view name.
 * - $css_class: The user-specified classes names, if any
 * - $header: The view header
 * - $footer: The view footer
 * - $rows: The results of the view query, if any
 * - $empty: The empty text to display if the view is empty
 * - $pager: The pager next/prev links to display, if any
 * - $exposed: Exposed widget form/info to display
 * - $feed_icon: Feed icon to display, if any
 * - $more: A link to view more, if any
 *
 * @ingroup views_templates
 */
$videos = count($view->result);
?>
<div class="<?php print $classes; ?>">
  <?php print render($title_prefix); ?>
  <?php if ($title): ?>
    <h2 class="title"><?php print $title; ?></h2>
  <?php endif; ?>
  <?php print render($title_suffix); ?>

  <?php if (!empty($rows)): ?>
    <?php if ($videos < 3): ?>
    <div class="view-header<?php if ($videos == 2): ?> total-3<?php endif; ?>">
      <?php print $header; ?>
    </div>
    <?php endif; ?>
  <?php endif; ?>

  <?php if ($exposed && !$exposed_form_as_field): ?>
    <div class="view-filters">
      <?php print $exposed; ?>
    </div>
  <?php endif; ?>

  <?php if ($attachment_before): ?>
    <div class="attachment attachment-before">
      <?php print $attachment_before; ?>
    </div>
  <?php endif; ?>

  <?php if ($rows): ?>
    <!-- if there are 4 videos total -->
    <?php if($videos == 3): ?>
      <?php print views_embed_view('songs','entity_view_7', $view->args[0]); ?>
    <!-- if there are 3 videos total -->
    <?php elseif ($videos > 1 && $videos < 3): ?>
      <div class="view-content">
        <?php print $rows; ?>
      </div>
      <!-- otherwise print the view that shows 2 large -->
    <?php elseif($videos == 1): ?>
      <?php print views_embed_view('songs','entity_view_6', $view->args[0]); ?>
    <?php endif; ?>
  <?php elseif ($empty): ?>
    <div class="view-empty">
      <?php print $empty; ?>
    </div>
  <?php endif; ?>

  <?php if ($pager): ?>
    <?php print $pager; ?>
  <?php endif; ?>

  <?php if ($attachment_after): ?>
    <div class="attachment attachment-after">
      <?php print $attachment_after; ?>
    </div>
  <?php endif; ?>

  <?php if ($more): ?>
    <?php print $more; ?>
  <?php endif; ?>

  <?php if ($footer): ?>
    
  <?php endif; ?>

  <?php if ($feed_icon): ?>
    <div class="feed-icon">
      <?php print $feed_icon; ?>
    </div>
  <?php endif; ?>

</div> <?php /* class view */ ?>