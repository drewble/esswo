<?php
/**
 * @file
 * ew_base.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function ew_base_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'jquery_migrate';
  $strongarm->value = array(
    'jquery_update_jquery_migrate_enable' => 0,
    'jquery_update_jquery_migrate_cdn' => 'none',
    'jquery_update_jquery_migrate_warnings' => 0,
    'jquery_update_jquery_migrate_trace' => 0,
  );
  $export['jquery_migrate'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'jquery_update_jquery_version';
  $strongarm->value = '1.10';
  $export['jquery_update_jquery_version'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'jquery_update__active_tab';
  $strongarm->value = 'edit-jquery-migrate';
  $export['jquery_update__active_tab'] = $strongarm;

  return $export;
}
