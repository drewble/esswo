<?php
/**
 * @file
 * ew_artist_worship_leader.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function ew_artist_worship_leader_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "multifield" && $api == "") {
    return array("version" => "");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function ew_artist_worship_leader_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function ew_artist_worship_leader_image_default_styles() {
  $styles = array();

  // Exported image style: 259x259.
  $styles['259x259'] = array(
    'label' => '259x259',
    'effects' => array(
      1 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 259,
          'height' => 259,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}

/**
 * Implements hook_node_info().
 */
function ew_artist_worship_leader_node_info() {
  $items = array(
    'artist_worship_leader' => array(
      'name' => t('Artist/Worship Leader'),
      'base' => 'node_content',
      'description' => t('Add an <em>Artist or Worship Leader</em> to the site.'),
      'has_title' => '1',
      'title_label' => t('Name'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
