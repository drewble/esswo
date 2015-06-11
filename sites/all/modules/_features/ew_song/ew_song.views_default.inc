<?php
/**
 * @file
 * ew_song.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function ew_song_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'songs';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Songs';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Songs';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Clear all';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '25';
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['row_plugin'] = 'node';
  $handler->display->display_options['row_options']['links'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'song' => 'song',
  );
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['operator'] = 'contains';
  $handler->display->display_options['filters']['title']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['label'] = 'Title';
  $handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['identifier'] = 'title';
  $handler->display->display_options['filters']['title']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
  );
  /* Filter criterion: Content: BPM (field_bpm) */
  $handler->display->display_options['filters']['field_bpm_tid']['id'] = 'field_bpm_tid';
  $handler->display->display_options['filters']['field_bpm_tid']['table'] = 'field_data_field_bpm';
  $handler->display->display_options['filters']['field_bpm_tid']['field'] = 'field_bpm_tid';
  $handler->display->display_options['filters']['field_bpm_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_bpm_tid']['expose']['operator_id'] = 'field_bpm_tid_op';
  $handler->display->display_options['filters']['field_bpm_tid']['expose']['label'] = 'BPM';
  $handler->display->display_options['filters']['field_bpm_tid']['expose']['operator'] = 'field_bpm_tid_op';
  $handler->display->display_options['filters']['field_bpm_tid']['expose']['identifier'] = 'field_bpm_tid';
  $handler->display->display_options['filters']['field_bpm_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
  );
  $handler->display->display_options['filters']['field_bpm_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_bpm_tid']['vocabulary'] = 'bpm';
  $handler->display->display_options['filters']['field_bpm_tid']['hierarchy'] = 1;
  /* Filter criterion: Content: Recommended Key (field_key) */
  $handler->display->display_options['filters']['field_key_tid']['id'] = 'field_key_tid';
  $handler->display->display_options['filters']['field_key_tid']['table'] = 'field_data_field_key';
  $handler->display->display_options['filters']['field_key_tid']['field'] = 'field_key_tid';
  $handler->display->display_options['filters']['field_key_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_key_tid']['expose']['operator_id'] = 'field_key_tid_op';
  $handler->display->display_options['filters']['field_key_tid']['expose']['label'] = 'Key';
  $handler->display->display_options['filters']['field_key_tid']['expose']['operator'] = 'field_key_tid_op';
  $handler->display->display_options['filters']['field_key_tid']['expose']['identifier'] = 'field_key_tid';
  $handler->display->display_options['filters']['field_key_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
  );
  $handler->display->display_options['filters']['field_key_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_key_tid']['vocabulary'] = 'key';
  $handler->display->display_options['filters']['field_key_tid']['hierarchy'] = 1;
  /* Filter criterion: Content: Tempo (field_tempo) */
  $handler->display->display_options['filters']['field_tempo_tid']['id'] = 'field_tempo_tid';
  $handler->display->display_options['filters']['field_tempo_tid']['table'] = 'field_data_field_tempo';
  $handler->display->display_options['filters']['field_tempo_tid']['field'] = 'field_tempo_tid';
  $handler->display->display_options['filters']['field_tempo_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_tempo_tid']['expose']['operator_id'] = 'field_tempo_tid_op';
  $handler->display->display_options['filters']['field_tempo_tid']['expose']['label'] = 'Tempo';
  $handler->display->display_options['filters']['field_tempo_tid']['expose']['operator'] = 'field_tempo_tid_op';
  $handler->display->display_options['filters']['field_tempo_tid']['expose']['identifier'] = 'field_tempo_tid';
  $handler->display->display_options['filters']['field_tempo_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
  );
  $handler->display->display_options['filters']['field_tempo_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_tempo_tid']['vocabulary'] = 'tempo';
  $handler->display->display_options['filters']['field_tempo_tid']['hierarchy'] = 1;
  /* Filter criterion: Content: Theme (field_theme) */
  $handler->display->display_options['filters']['field_theme_tid']['id'] = 'field_theme_tid';
  $handler->display->display_options['filters']['field_theme_tid']['table'] = 'field_data_field_theme';
  $handler->display->display_options['filters']['field_theme_tid']['field'] = 'field_theme_tid';
  $handler->display->display_options['filters']['field_theme_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_theme_tid']['expose']['operator_id'] = 'field_theme_tid_op';
  $handler->display->display_options['filters']['field_theme_tid']['expose']['label'] = 'Theme';
  $handler->display->display_options['filters']['field_theme_tid']['expose']['operator'] = 'field_theme_tid_op';
  $handler->display->display_options['filters']['field_theme_tid']['expose']['identifier'] = 'field_theme_tid';
  $handler->display->display_options['filters']['field_theme_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
  );
  $handler->display->display_options['filters']['field_theme_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_theme_tid']['vocabulary'] = 'theme';
  $handler->display->display_options['filters']['field_theme_tid']['hierarchy'] = 1;

  /* Display: Main Song Page */
  $handler = $view->new_display('page', 'Main Song Page', 'page');
  $handler->display->display_options['exposed_block'] = TRUE;
  $handler->display->display_options['path'] = 'songs';
  $export['songs'] = $view;

  return $export;
}
