<?php
/**
 * @file
 * d7_advertisement_banners.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function d7_advertisement_banners_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
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
function d7_advertisement_banners_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function d7_advertisement_banners_node_info() {
  $items = array(
    'banner' => array(
      'name' => t('Advertisement Banner'),
      'base' => 'node_content',
      'description' => t('Add ad banners to your site.'),
      'has_title' => '1',
      'title_label' => t('Banner Title (Administrative Only)'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
