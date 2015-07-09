<?php
/**
 * @file
 * ew_base.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function ew_base_ctools_plugin_api($module = NULL, $api = NULL) {
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
function ew_base_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_flag_default_flags().
 */
function ew_base_flag_default_flags() {
  $flags = array();
  // Exported flag: "Homepage Feature".
  $flags['homepage_feature'] = array(
    'entity_type' => 'node',
    'title' => 'Homepage Feature',
    'global' => 1,
    'types' => array(
      0 => 'artist_worship_leader',
      1 => 'song',
    ),
    'flag_short' => 'Feature on Homepage',
    'flag_long' => 'This will make the item show up in the featured "hero" area on the homepage.',
    'flag_message' => '',
    'unflag_short' => 'Un-Feature on Homepage',
    'unflag_long' => 'This will remove the item from the featured "hero" area on the homepage.',
    'unflag_message' => '',
    'unflag_denied_text' => '',
    'link_type' => 'toggle',
    'weight' => 0,
    'show_in_links' => array(
      'full' => 0,
      'teaser' => 0,
      'rss' => 0,
      'diff_standard' => 0,
      'token' => 0,
    ),
    'show_as_field' => 0,
    'show_on_form' => 1,
    'access_author' => '',
    'show_contextual_link' => 0,
    'i18n' => 0,
    'module' => 'ew_base',
    'locked' => array(
      0 => 'name',
    ),
    'api_version' => 3,
  );
  return $flags;

}
