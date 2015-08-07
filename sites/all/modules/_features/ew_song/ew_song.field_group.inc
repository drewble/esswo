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
    'weight' => '7',
    'children' => array(
      0 => 'field_itunes_link',
      1 => 'field_multitracks_link',
      2 => 'field_praisecharts_link',
      3 => 'field_loopcommunity_link',
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
    'weight' => '11',
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
    'label' => 'Song Resources',
    'weight' => '9',
    'children' => array(
      0 => 'field_song_resources',
      1 => 'field_chords_pdf_',
      2 => 'field_lead_sheets',
      3 => 'field_lyric_file',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'label' => 'Song Resources',
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
    'weight' => '2',
    'children' => array(),
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
  $field_group->identifier = 'group_key|node|song|teaser';
  $field_group->group_name = 'group_key';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'song';
  $field_group->mode = 'teaser';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Key',
    'weight' => '1',
    'children' => array(
      0 => 'field_key',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Key',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-key field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_key|node|song|teaser'] = $field_group;

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
    'weight' => '3',
    'children' => array(
      0 => 'field_lyrics_chords',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Left',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-left field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_left|node|song|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_purchase_options|node|song|default';
  $field_group->group_name = 'group_purchase_options';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'song';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_right';
  $field_group->data = array(
    'label' => 'Purchase Options',
    'weight' => '12',
    'children' => array(
      0 => 'field_itunes_link',
      1 => 'field_multitracks_link',
      2 => 'field_praisecharts_link',
      3 => 'field_loopcommunity_link',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Purchase Options',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-purchase-options field-group-div',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h2',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_purchase_options|node|song|default'] = $field_group;

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
    'weight' => '4',
    'children' => array(
      0 => 'songs_entity_view_3',
      1 => 'songs_entity_view_5',
      2 => 'group_purchase_options',
      3 => 'group_song',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Right',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-right field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_right|node|song|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_song_categories|node|song|teaser';
  $field_group->group_name = 'group_song_categories';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'song';
  $field_group->mode = 'teaser';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Song Categories',
    'weight' => '3',
    'children' => array(
      0 => 'field_church',
      1 => 'field_theme',
      2 => 'field_services',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Song Categories',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-song-categories field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_song_categories|node|song|teaser'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_song_info|node|song|teaser';
  $field_group->group_name = 'group_song_info';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'song';
  $field_group->mode = 'teaser';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Song Info',
    'weight' => '0',
    'children' => array(
      0 => 'title_field',
      1 => 'field_subtitle',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Song Info',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-song-info field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_song_info|node|song|teaser'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_song|node|song|default';
  $field_group->group_name = 'group_song';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'song';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_right';
  $field_group->data = array(
    'label' => 'Song',
    'weight' => '9',
    'children' => array(
      0 => 'field_mp3',
      1 => 'field_spotify',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Song',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-song field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_song|node|song|default'] = $field_group;

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
    'weight' => '8',
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
  $field_group->identifier = 'group_tempo|node|song|teaser';
  $field_group->group_name = 'group_tempo';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'song';
  $field_group->mode = 'teaser';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Tempo',
    'weight' => '2',
    'children' => array(
      0 => 'field_tempo',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Tempo',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-tempo field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_tempo|node|song|teaser'] = $field_group;

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
    'weight' => '10',
    'children' => array(
      0 => 'field_videos',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'label' => 'Videos',
      'instance_settings' => array(
        'required_fields' => 0,
        'classes' => 'group-videos field-group-tab',
        'description' => '',
      ),
      'formatter' => 'closed',
    ),
  );
  $export['group_videos|node|song|form'] = $field_group;

  return $export;
}
