<?php
/**
 * @file
 * d7_tpl_hero.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function d7_tpl_hero_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function d7_tpl_hero_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function d7_tpl_hero_node_info() {
  $items = array(
    'hero' => array(
      'name' => t('Hero'),
      'base' => 'node_content',
      'description' => t('Hero content containing image, text and call to action'),
      'has_title' => '1',
      'title_label' => t('Hero Title (Administrative Only)'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
