<?php
/**
 * @file
 * ew_song.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function ew_song_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_buy_from|node|song|form';
  $field_group->group_name = 'group_buy_from';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'song';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Buy From',
    'weight' => '8',
    'children' => array(
      0 => 'field_itunes_link',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Buy From',
      'instance_settings' => array(
        'required_fields' => 0,
        'classes' => 'group-buy-from field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsible',
    ),
  );
  $export['group_buy_from|node|song|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_files|node|song|form';
  $field_group->group_name = 'group_files';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'song';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Files',
    'weight' => '7',
    'children' => array(
      0 => 'field_chord_charts',
      1 => 'field_lead_sheets',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'label' => 'Files',
      'instance_settings' => array(
        'required_fields' => 0,
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'closed',
    ),
  );
  $export['group_files|node|song|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_song|node|song|form';
  $field_group->group_name = 'group_song';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'song';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Song',
    'weight' => '6',
    'children' => array(
      0 => 'field_spotify',
      1 => 'field_mp3',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-song field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_song|node|song|form'] = $field_group;

  return $export;
}
