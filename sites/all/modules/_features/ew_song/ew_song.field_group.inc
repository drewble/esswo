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
    'weight' => '9',
    'children' => array(
      0 => 'field_itunes_link',
      1 => 'field_multitracks_link',
      2 => 'field_praisecharts_link',
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
  $field_group->identifier = 'group_categories|node|song|form';
  $field_group->group_name = 'group_categories';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'song';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Categories',
    'weight' => '14',
    'children' => array(
      0 => 'field_key',
      1 => 'field_tempo',
      2 => 'field_bpm',
      3 => 'field_theme',
      4 => 'field_church',
      5 => 'field_services',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-categories field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_categories|node|song|form'] = $field_group;

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
    'label' => 'Chords/Sheets',
    'weight' => '11',
    'children' => array(
      0 => 'field_song_resources',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'label' => 'Chords/Sheets',
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
  $field_group->identifier = 'group_header|node|song|default';
  $field_group->group_name = 'group_header';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'song';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Header',
    'weight' => '0',
    'children' => array(
      0 => 'field_header_image',
      1 => 'field_subtitle',
      2 => 'title_field',
    ),
    'format_type' => 'html5',
    'format_settings' => array(
      'label' => 'Header',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-header',
        'wrapper' => 'section',
      ),
    ),
  );
  $export['group_header|node|song|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_left|node|song|default';
  $field_group->group_name = 'group_left';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'song';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Left',
    'weight' => '2',
    'children' => array(
      0 => 'field_chord_charts',
      1 => 'field_lead_sheets',
      2 => 'field_lyrics_chords',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'show_label' => 1,
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
        'classes' => 'group-left field-group-div',
        'id' => '',
      ),
    ),
  );
  $export['group_left|node|song|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_right|node|song|default';
  $field_group->group_name = 'group_right';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'song';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Right',
    'weight' => '3',
    'children' => array(
      0 => 'field_spotify',
      1 => 'field_mp3',
      2 => 'field_itunes_link',
      3 => 'field_multitracks_link',
      4 => 'field_praisecharts_link',
      5 => 'field_key',
      6 => 'field_tempo',
      7 => 'field_bpm',
      8 => 'field_theme',
      9 => 'field_church',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'show_label' => 1,
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
        'classes' => 'group-right field-group-div',
        'id' => '',
      ),
    ),
  );
  $export['group_right|node|song|default'] = $field_group;

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
    'label' => 'Track',
    'weight' => '10',
    'children' => array(
      0 => 'field_spotify',
      1 => 'field_mp3',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'label' => 'Track',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-song field-group-tab',
        'description' => '',
      ),
      'formatter' => 'closed',
    ),
  );
  $export['group_song|node|song|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_videos|node|song|form';
  $field_group->group_name = 'group_videos';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'song';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Videos',
    'weight' => '12',
    'children' => array(
      0 => 'field_videos',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-videos field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_videos|node|song|form'] = $field_group;

  return $export;
}
