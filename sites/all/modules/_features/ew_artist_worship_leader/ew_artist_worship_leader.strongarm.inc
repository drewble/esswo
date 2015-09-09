<?php
/**
 * @file
 * ew_artist_worship_leader.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function ew_artist_worship_leader_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'additional_settings__active_tab_artist_worship_leader';
  $strongarm->value = 'edit-scheduler';
  $export['additional_settings__active_tab_artist_worship_leader'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'auto_entitylabel_node_artist_worship_leader';
  $strongarm->value = '1';
  $export['auto_entitylabel_node_artist_worship_leader'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'auto_entitylabel_pattern_node_artist_worship_leader';
  $strongarm->value = '[node:field_first_name] [node:field_last_name]';
  $export['auto_entitylabel_pattern_node_artist_worship_leader'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'auto_entitylabel_php_node_artist_worship_leader';
  $strongarm->value = 0;
  $export['auto_entitylabel_php_node_artist_worship_leader'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'diff_enable_revisions_page_node_artist_worship_leader';
  $strongarm->value = 0;
  $export['diff_enable_revisions_page_node_artist_worship_leader'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'diff_show_preview_changes_node_artist_worship_leader';
  $strongarm->value = 0;
  $export['diff_show_preview_changes_node_artist_worship_leader'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'diff_view_mode_preview_node_artist_worship_leader';
  $strongarm->value = 'full';
  $export['diff_view_mode_preview_node_artist_worship_leader'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__artist_worship_leader';
  $strongarm->value = array(
    'view_modes' => array(
      'teaser' => array(
        'custom_settings' => TRUE,
      ),
      'full' => array(
        'custom_settings' => FALSE,
      ),
      'rss' => array(
        'custom_settings' => FALSE,
      ),
      'diff_standard' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(
        'metatags' => array(
          'weight' => '8',
        ),
        'title' => array(
          'weight' => '0',
        ),
        'path' => array(
          'weight' => '7',
        ),
        'flag' => array(
          'weight' => '9',
        ),
      ),
      'display' => array(
        'songs_entity_view_4' => array(
          'default' => array(
            'weight' => '2',
            'visible' => TRUE,
          ),
          'teaser' => array(
            'weight' => '1',
            'visible' => FALSE,
          ),
        ),
      ),
    ),
  );
  $export['field_bundle_settings_node__artist_worship_leader'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_artist_worship_leader';
  $strongarm->value = array(
    0 => 'main-menu',
  );
  $export['menu_options_artist_worship_leader'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_artist_worship_leader';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_artist_worship_leader'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'metatag_enable_node__artist_worship_leader';
  $strongarm->value = TRUE;
  $export['metatag_enable_node__artist_worship_leader'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_artist_worship_leader';
  $strongarm->value = array(
    0 => 'status',
  );
  $export['node_options_artist_worship_leader'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_artist_worship_leader';
  $strongarm->value = '1';
  $export['node_preview_artist_worship_leader'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_artist_worship_leader';
  $strongarm->value = 0;
  $export['node_submitted_artist_worship_leader'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_artist_worship_leader_pattern';
  $strongarm->value = 'worship-leaders/[node:title]';
  $export['pathauto_node_artist_worship_leader_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'save_continue_artist_worship_leader';
  $strongarm->value = 'Save and add fields';
  $export['save_continue_artist_worship_leader'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'scheduler_expand_fieldset_artist_worship_leader';
  $strongarm->value = '0';
  $export['scheduler_expand_fieldset_artist_worship_leader'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'scheduler_publish_enable_artist_worship_leader';
  $strongarm->value = 1;
  $export['scheduler_publish_enable_artist_worship_leader'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'scheduler_publish_past_date_artist_worship_leader';
  $strongarm->value = 'error';
  $export['scheduler_publish_past_date_artist_worship_leader'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'scheduler_publish_required_artist_worship_leader';
  $strongarm->value = 0;
  $export['scheduler_publish_required_artist_worship_leader'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'scheduler_publish_revision_artist_worship_leader';
  $strongarm->value = 0;
  $export['scheduler_publish_revision_artist_worship_leader'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'scheduler_publish_touch_artist_worship_leader';
  $strongarm->value = 1;
  $export['scheduler_publish_touch_artist_worship_leader'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'scheduler_unpublish_enable_artist_worship_leader';
  $strongarm->value = 1;
  $export['scheduler_unpublish_enable_artist_worship_leader'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'scheduler_unpublish_required_artist_worship_leader';
  $strongarm->value = 0;
  $export['scheduler_unpublish_required_artist_worship_leader'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'scheduler_unpublish_revision_artist_worship_leader';
  $strongarm->value = 0;
  $export['scheduler_unpublish_revision_artist_worship_leader'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'scheduler_use_vertical_tabs_artist_worship_leader';
  $strongarm->value = '1';
  $export['scheduler_use_vertical_tabs_artist_worship_leader'] = $strongarm;

  return $export;
}
