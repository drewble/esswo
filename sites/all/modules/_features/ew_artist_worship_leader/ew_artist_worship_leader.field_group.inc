<?php
/**
 * @file
 * ew_artist_worship_leader.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function ew_artist_worship_leader_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_links|node|artist_worship_leader|default';
  $field_group->group_name = 'group_links';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'artist_worship_leader';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Links',
    'weight' => '1',
    'children' => array(
      0 => 'field_facebook',
      1 => 'field_twitter',
      2 => 'field_website',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Links',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-links field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_links|node|artist_worship_leader|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_links|node|artist_worship_leader|form';
  $field_group->group_name = 'group_links';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'artist_worship_leader';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Links',
    'weight' => '5',
    'children' => array(
      0 => 'field_facebook',
      1 => 'field_twitter',
      2 => 'field_website',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-links field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_links|node|artist_worship_leader|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_media|node|artist_worship_leader|form';
  $field_group->group_name = 'group_media';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'artist_worship_leader';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Media',
    'weight' => '4',
    'children' => array(
      0 => 'field_header_image',
      1 => 'field_listing_image',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-media field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_media|node|artist_worship_leader|form'] = $field_group;

  return $export;
}
