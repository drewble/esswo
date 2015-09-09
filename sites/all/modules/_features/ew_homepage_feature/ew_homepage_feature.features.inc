<?php
/**
 * @file
 * ew_homepage_feature.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function ew_homepage_feature_ctools_plugin_api($module = NULL, $api = NULL) {
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
function ew_homepage_feature_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function ew_homepage_feature_node_info() {
  $items = array(
    'homepage_feature' => array(
      'name' => t('Homepage Feature'),
      'base' => 'node_content',
      'description' => t('<em>Add to the homepage featured area. Currently requires 2 at any given time. The latest two will be shown.</em>'),
      'has_title' => '1',
      'title_label' => t('Headline 1 (ex: Featured Song)'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
