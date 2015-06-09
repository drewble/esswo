<?php
/**
 * @file
 * ew_song.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function ew_song_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function ew_song_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function ew_song_node_info() {
  $items = array(
    'song' => array(
      'name' => t('Song'),
      'base' => 'node_content',
      'description' => t('Add a <em>Song</em> to the website.'),
      'has_title' => '1',
      'title_label' => t('Song Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
