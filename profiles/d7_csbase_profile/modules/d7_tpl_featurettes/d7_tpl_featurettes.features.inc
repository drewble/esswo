<?php
/**
 * @file
 * d7_tpl_featurettes.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function d7_tpl_featurettes_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function d7_tpl_featurettes_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function d7_tpl_featurettes_node_info() {
  $items = array(
    'featurettes' => array(
      'name' => t('Featurettes'),
      'base' => 'node_content',
      'description' => t('Small descriptive blurbs with title, icon and text'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
