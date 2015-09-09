<?php
/**
 * @file
 * d7_news.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function d7_news_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function d7_news_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function d7_news_node_info() {
  $items = array(
    'news_article' => array(
      'name' => t('Insight Article'),
      'base' => 'node_content',
      'description' => t('Add a new <em>Insight Article</em> to website.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
