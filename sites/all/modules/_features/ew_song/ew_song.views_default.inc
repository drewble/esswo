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
  $view->name = 'new_content';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'New Content';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'New Content';
  $handler->display->display_options['css_class'] = 'new-content';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['style_options']['wrapper_class'] = '';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Flags: new */
  $handler->display->display_options['relationships']['flag_content_rel']['id'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['flag_content_rel']['field'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel']['flag'] = 'new';
  $handler->display->display_options['relationships']['flag_content_rel']['user_scope'] = 'any';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'h2';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  /* Field: Content: Subtitle (Artist/Worship Leaders) */
  $handler->display->display_options['fields']['field_subtitle']['id'] = 'field_subtitle';
  $handler->display->display_options['fields']['field_subtitle']['table'] = 'field_data_field_subtitle';
  $handler->display->display_options['fields']['field_subtitle']['field'] = 'field_subtitle';
  $handler->display->display_options['fields']['field_subtitle']['label'] = '';
  $handler->display->display_options['fields']['field_subtitle']['element_type'] = 'h3';
  $handler->display->display_options['fields']['field_subtitle']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_subtitle']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_subtitle']['element_default_classes'] = FALSE;
  /* Sort criterion: Flags: Flagged time */
  $handler->display->display_options['sorts']['timestamp']['id'] = 'timestamp';
  $handler->display->display_options['sorts']['timestamp']['table'] = 'flagging';
  $handler->display->display_options['sorts']['timestamp']['field'] = 'timestamp';
  $handler->display->display_options['sorts']['timestamp']['relationship'] = 'flag_content_rel';
  $handler->display->display_options['sorts']['timestamp']['order'] = 'DESC';
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

  /* Display: Home 5 */
  $handler = $view->new_display('block', 'Home 5', 'block');
  $export['new_content'] = $view;

  $view = new view();
  $view->name = 'popular_content';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Popular Content';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['css_class'] = 'popular-content';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['style_options']['wrapper_class'] = '';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<h2 class="title"><span class="icon icon-icons_popular"></span>Most Popular</h2>';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'h2';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  /* Field: Content: Subtitle (Artist/Worship Leaders) */
  $handler->display->display_options['fields']['field_subtitle']['id'] = 'field_subtitle';
  $handler->display->display_options['fields']['field_subtitle']['table'] = 'field_data_field_subtitle';
  $handler->display->display_options['fields']['field_subtitle']['field'] = 'field_subtitle';
  $handler->display->display_options['fields']['field_subtitle']['label'] = '';
  $handler->display->display_options['fields']['field_subtitle']['element_type'] = 'h3';
  $handler->display->display_options['fields']['field_subtitle']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_subtitle']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_subtitle']['element_default_classes'] = FALSE;
  /* Sort criterion: Content: Sticky */
  $handler->display->display_options['sorts']['sticky']['id'] = 'sticky';
  $handler->display->display_options['sorts']['sticky']['table'] = 'node';
  $handler->display->display_options['sorts']['sticky']['field'] = 'sticky';
  $handler->display->display_options['sorts']['sticky']['order'] = 'DESC';
  /* Sort criterion: Google Analytics Counter: Pageview Total */
  $handler->display->display_options['sorts']['pageview_total']['id'] = 'pageview_total';
  $handler->display->display_options['sorts']['pageview_total']['table'] = 'google_analytics_counter_storage';
  $handler->display->display_options['sorts']['pageview_total']['field'] = 'pageview_total';
  $handler->display->display_options['sorts']['pageview_total']['order'] = 'DESC';
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

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $export['popular_content'] = $view;

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
  $handler->display->display_options['title'] = 'Find a Song';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Clear all';
  $handler->display->display_options['exposed_form']['options']['expose_sort_order'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['pager']['options']['tags']['first'] = '';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '<';
  $handler->display->display_options['pager']['options']['tags']['next'] = '>';
  $handler->display->display_options['pager']['options']['tags']['last'] = '';
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['style_options']['wrapper_class'] = '';
  $handler->display->display_options['row_plugin'] = 'node';
  $handler->display->display_options['row_options']['links'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
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
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['operator'] = 'contains';
  $handler->display->display_options['filters']['title']['group'] = 1;
  $handler->display->display_options['filters']['title']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['label'] = 'Find a Song...';
  $handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['identifier'] = 'title';
  $handler->display->display_options['filters']['title']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
  );
  /* Filter criterion: Content: Key (field_key) */
  $handler->display->display_options['filters']['field_key_tid']['id'] = 'field_key_tid';
  $handler->display->display_options['filters']['field_key_tid']['table'] = 'field_data_field_key';
  $handler->display->display_options['filters']['field_key_tid']['field'] = 'field_key_tid';
  $handler->display->display_options['filters']['field_key_tid']['group'] = 1;
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
  $handler->display->display_options['filters']['field_tempo_tid']['group'] = 1;
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
  $handler->display->display_options['filters']['field_theme_tid']['group'] = 1;
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
  /* Filter criterion: Content: Service (field_services) */
  $handler->display->display_options['filters']['field_services_tid']['id'] = 'field_services_tid';
  $handler->display->display_options['filters']['field_services_tid']['table'] = 'field_data_field_services';
  $handler->display->display_options['filters']['field_services_tid']['field'] = 'field_services_tid';
  $handler->display->display_options['filters']['field_services_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_services_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_services_tid']['expose']['operator_id'] = 'field_services_tid_op';
  $handler->display->display_options['filters']['field_services_tid']['expose']['label'] = 'Services';
  $handler->display->display_options['filters']['field_services_tid']['expose']['operator'] = 'field_services_tid_op';
  $handler->display->display_options['filters']['field_services_tid']['expose']['identifier'] = 'field_services_tid';
  $handler->display->display_options['filters']['field_services_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
  );
  $handler->display->display_options['filters']['field_services_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_services_tid']['vocabulary'] = 'services';
  $handler->display->display_options['filters']['field_services_tid']['hierarchy'] = 1;
  /* Filter criterion: Content: Ministry (field_church) */
  $handler->display->display_options['filters']['field_church_tid']['id'] = 'field_church_tid';
  $handler->display->display_options['filters']['field_church_tid']['table'] = 'field_data_field_church';
  $handler->display->display_options['filters']['field_church_tid']['field'] = 'field_church_tid';
  $handler->display->display_options['filters']['field_church_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_church_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_church_tid']['expose']['operator_id'] = 'field_church_tid_op';
  $handler->display->display_options['filters']['field_church_tid']['expose']['label'] = 'Ministry';
  $handler->display->display_options['filters']['field_church_tid']['expose']['operator'] = 'field_church_tid_op';
  $handler->display->display_options['filters']['field_church_tid']['expose']['identifier'] = 'field_church_tid';
  $handler->display->display_options['filters']['field_church_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
  );
  $handler->display->display_options['filters']['field_church_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_church_tid']['vocabulary'] = 'church';
  $handler->display->display_options['filters']['field_church_tid']['hierarchy'] = 1;

  /* Display: Main Song Page */
  $handler = $view->new_display('page', 'Main Song Page', 'page');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'song-listing';
  $handler->display->display_options['exposed_block'] = TRUE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Result summary */
  $handler->display->display_options['header']['result']['id'] = 'result';
  $handler->display->display_options['header']['result']['table'] = 'views';
  $handler->display->display_options['header']['result']['field'] = 'result';
  $handler->display->display_options['header']['result']['empty'] = TRUE;
  $handler->display->display_options['header']['result']['content'] = '<div class="result-summary">
<p>Showing @start-@end of @total</p>
<a href="#" id="view-new">View New</a>
<a href="#" id="view-all">View All</a>
</div>';
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Global: Result summary */
  $handler->display->display_options['empty']['result']['id'] = 'result';
  $handler->display->display_options['empty']['result']['table'] = 'views';
  $handler->display->display_options['empty']['result']['field'] = 'result';
  $handler->display->display_options['empty']['result']['empty'] = TRUE;
  $handler->display->display_options['empty']['result']['content'] = '<div class="result-summary">
<p>Showing @start-@end of @total</p>
<a href="#" id="view-new">View New</a>
<a href="#" id="view-all">View All</a>
</div>';
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = '<em>No songs match that search criteria.</em>';
  $handler->display->display_options['empty']['area']['format'] = 'full_html';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Flags: new */
  $handler->display->display_options['relationships']['flag_content_rel']['id'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['flag_content_rel']['field'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel']['required'] = 0;
  $handler->display->display_options['relationships']['flag_content_rel']['flag'] = 'new';
  $handler->display->display_options['relationships']['flag_content_rel']['user_scope'] = 'any';
  $handler->display->display_options['path'] = 'songs';

  /* Display: Node Videos Large */
  $handler = $view->new_display('entity_view', 'Node Videos Large', 'entity_view_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: URL */
  $handler->display->display_options['fields']['field_videos_2']['id'] = 'field_videos_2';
  $handler->display->display_options['fields']['field_videos_2']['table'] = 'field_data_field_videos';
  $handler->display->display_options['fields']['field_videos_2']['field'] = 'field_videos';
  $handler->display->display_options['fields']['field_videos_2']['ui_name'] = 'URL';
  $handler->display->display_options['fields']['field_videos_2']['label'] = '';
  $handler->display->display_options['fields']['field_videos_2']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_videos_2']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_videos_2']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_videos_2']['type'] = 'file_url_plain';
  $handler->display->display_options['fields']['field_videos_2']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_videos_2']['delta_offset'] = '0';
  /* Field: Video description */
  $handler->display->display_options['fields']['field_videos_1']['id'] = 'field_videos_1';
  $handler->display->display_options['fields']['field_videos_1']['table'] = 'field_data_field_videos';
  $handler->display->display_options['fields']['field_videos_1']['field'] = 'field_videos';
  $handler->display->display_options['fields']['field_videos_1']['ui_name'] = 'Video description';
  $handler->display->display_options['fields']['field_videos_1']['label'] = '';
  $handler->display->display_options['fields']['field_videos_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_videos_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_videos_1']['alter']['text'] = '[field_videos_1-description]';
  $handler->display->display_options['fields']['field_videos_1']['element_type'] = '0';
  $handler->display->display_options['fields']['field_videos_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_videos_1']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_videos_1']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_videos_1']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_videos_1']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_videos_1']['delta_offset'] = '0';
  /* Field: Final 2 Videos */
  $handler->display->display_options['fields']['field_videos']['id'] = 'field_videos';
  $handler->display->display_options['fields']['field_videos']['table'] = 'field_data_field_videos';
  $handler->display->display_options['fields']['field_videos']['field'] = 'field_videos';
  $handler->display->display_options['fields']['field_videos']['ui_name'] = 'Final 2 Videos';
  $handler->display->display_options['fields']['field_videos']['label'] = '';
  $handler->display->display_options['fields']['field_videos']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_videos']['alter']['text'] = '[field_videos]
<a href="[field_videos_2]">Play Video</a>
<span class="vid-description">[field_videos_1]</span>';
  $handler->display->display_options['fields']['field_videos']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_videos']['element_class'] = 'video';
  $handler->display->display_options['fields']['field_videos']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_videos']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_videos']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_videos']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_videos']['type'] = 'file_rendered';
  $handler->display->display_options['fields']['field_videos']['settings'] = array(
    'file_view_mode' => 'teaser',
  );
  $handler->display->display_options['fields']['field_videos']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_videos']['delta_limit'] = '2';
  $handler->display->display_options['fields']['field_videos']['delta_offset'] = '1';
  $handler->display->display_options['fields']['field_videos']['field_api_classes'] = TRUE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
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
  $handler->display->display_options['filters']['type']['group'] = 1;
  $handler->display->display_options['entity_type'] = 'node';
  $handler->display->display_options['bundles'] = array(
    0 => 'song',
  );

  /* Display: Node Videos Small */
  $handler = $view->new_display('entity_view', 'Node Videos Small', 'entity_view_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '2';
  $handler->display->display_options['pager']['options']['offset'] = '1';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: View area */
  $handler->display->display_options['header']['view']['id'] = 'view';
  $handler->display->display_options['header']['view']['table'] = 'views';
  $handler->display->display_options['header']['view']['field'] = 'view';
  $handler->display->display_options['header']['view']['view_to_insert'] = 'songs:entity_view_2';
  $handler->display->display_options['header']['view']['inherit_arguments'] = TRUE;
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Global: View area */
  $handler->display->display_options['empty']['view']['id'] = 'view';
  $handler->display->display_options['empty']['view']['table'] = 'views';
  $handler->display->display_options['empty']['view']['field'] = 'view';
  $handler->display->display_options['empty']['view']['empty'] = TRUE;
  $handler->display->display_options['empty']['view']['view_to_insert'] = 'songs:entity_view_2';
  $handler->display->display_options['empty']['view']['inherit_arguments'] = TRUE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: URL */
  $handler->display->display_options['fields']['field_videos_2']['id'] = 'field_videos_2';
  $handler->display->display_options['fields']['field_videos_2']['table'] = 'field_data_field_videos';
  $handler->display->display_options['fields']['field_videos_2']['field'] = 'field_videos';
  $handler->display->display_options['fields']['field_videos_2']['ui_name'] = 'URL';
  $handler->display->display_options['fields']['field_videos_2']['label'] = '';
  $handler->display->display_options['fields']['field_videos_2']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_videos_2']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_videos_2']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_videos_2']['type'] = 'file_url_plain';
  $handler->display->display_options['fields']['field_videos_2']['group_column'] = 'entity_id';
  $handler->display->display_options['fields']['field_videos_2']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_videos_2']['delta_offset'] = '0';
  /* Field: Video description */
  $handler->display->display_options['fields']['field_videos_1']['id'] = 'field_videos_1';
  $handler->display->display_options['fields']['field_videos_1']['table'] = 'field_data_field_videos';
  $handler->display->display_options['fields']['field_videos_1']['field'] = 'field_videos';
  $handler->display->display_options['fields']['field_videos_1']['ui_name'] = 'Video description';
  $handler->display->display_options['fields']['field_videos_1']['label'] = '';
  $handler->display->display_options['fields']['field_videos_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_videos_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_videos_1']['alter']['text'] = '[field_videos_1-description]';
  $handler->display->display_options['fields']['field_videos_1']['element_type'] = '0';
  $handler->display->display_options['fields']['field_videos_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_videos_1']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_videos_1']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_videos_1']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_videos_1']['group_column'] = 'entity_id';
  $handler->display->display_options['fields']['field_videos_1']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_videos_1']['delta_offset'] = '0';
  /* Field: Final 2 Videos */
  $handler->display->display_options['fields']['field_videos']['id'] = 'field_videos';
  $handler->display->display_options['fields']['field_videos']['table'] = 'field_data_field_videos';
  $handler->display->display_options['fields']['field_videos']['field'] = 'field_videos';
  $handler->display->display_options['fields']['field_videos']['ui_name'] = 'Final 2 Videos';
  $handler->display->display_options['fields']['field_videos']['label'] = '';
  $handler->display->display_options['fields']['field_videos']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_videos']['alter']['text'] = '[field_videos]
<a href="[field_videos_2]">Play Video</a>
<span class="vid-description">[field_videos_1]</span>';
  $handler->display->display_options['fields']['field_videos']['alter']['absolute'] = TRUE;
  $handler->display->display_options['fields']['field_videos']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_videos']['element_class'] = 'video';
  $handler->display->display_options['fields']['field_videos']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_videos']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_videos']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_videos']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_videos']['type'] = 'file_rendered';
  $handler->display->display_options['fields']['field_videos']['settings'] = array(
    'file_view_mode' => 'rss',
  );
  $handler->display->display_options['fields']['field_videos']['group_column'] = 'entity_id';
  $handler->display->display_options['fields']['field_videos']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_videos']['delta_limit'] = '2';
  $handler->display->display_options['fields']['field_videos']['delta_offset'] = '1';
  $handler->display->display_options['fields']['field_videos']['field_api_classes'] = TRUE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
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
  $handler->display->display_options['filters']['type']['group'] = 1;
  $handler->display->display_options['entity_type'] = 'node';
  $handler->display->display_options['bundles'] = array(
    0 => 'song',
  );

  /* Display: Node Categories */
  $handler = $view->new_display('entity_view', 'Node Categories', 'entity_view_3');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Key */
  $handler->display->display_options['fields']['field_key']['id'] = 'field_key';
  $handler->display->display_options['fields']['field_key']['table'] = 'field_data_field_key';
  $handler->display->display_options['fields']['field_key']['field'] = 'field_key';
  $handler->display->display_options['fields']['field_key']['label'] = '';
  $handler->display->display_options['fields']['field_key']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_key']['element_type'] = '0';
  $handler->display->display_options['fields']['field_key']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_key']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_key']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_key']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Tempo */
  $handler->display->display_options['fields']['field_tempo']['id'] = 'field_tempo';
  $handler->display->display_options['fields']['field_tempo']['table'] = 'field_data_field_tempo';
  $handler->display->display_options['fields']['field_tempo']['field'] = 'field_tempo';
  $handler->display->display_options['fields']['field_tempo']['label'] = '';
  $handler->display->display_options['fields']['field_tempo']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_tempo']['element_type'] = '0';
  $handler->display->display_options['fields']['field_tempo']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_tempo']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_tempo']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_tempo']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: BPM */
  $handler->display->display_options['fields']['field_bpm']['id'] = 'field_bpm';
  $handler->display->display_options['fields']['field_bpm']['table'] = 'field_data_field_bpm';
  $handler->display->display_options['fields']['field_bpm']['field'] = 'field_bpm';
  $handler->display->display_options['fields']['field_bpm']['label'] = '';
  $handler->display->display_options['fields']['field_bpm']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_bpm']['element_type'] = '0';
  $handler->display->display_options['fields']['field_bpm']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_bpm']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_bpm']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_bpm']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Theme */
  $handler->display->display_options['fields']['field_theme']['id'] = 'field_theme';
  $handler->display->display_options['fields']['field_theme']['table'] = 'field_data_field_theme';
  $handler->display->display_options['fields']['field_theme']['field'] = 'field_theme';
  $handler->display->display_options['fields']['field_theme']['label'] = '';
  $handler->display->display_options['fields']['field_theme']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_theme']['element_type'] = '0';
  $handler->display->display_options['fields']['field_theme']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_theme']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_theme']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_theme']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Service */
  $handler->display->display_options['fields']['field_services']['id'] = 'field_services';
  $handler->display->display_options['fields']['field_services']['table'] = 'field_data_field_services';
  $handler->display->display_options['fields']['field_services']['field'] = 'field_services';
  $handler->display->display_options['fields']['field_services']['label'] = '';
  $handler->display->display_options['fields']['field_services']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_services']['element_type'] = '0';
  $handler->display->display_options['fields']['field_services']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_services']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_services']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_services']['empty'] = 'N/A';
  $handler->display->display_options['fields']['field_services']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_services']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_services']['separator'] = ' / ';
  /* Field: Content: Scripture */
  $handler->display->display_options['fields']['field_scripture']['id'] = 'field_scripture';
  $handler->display->display_options['fields']['field_scripture']['table'] = 'field_data_field_scripture';
  $handler->display->display_options['fields']['field_scripture']['field'] = 'field_scripture';
  $handler->display->display_options['fields']['field_scripture']['label'] = '';
  $handler->display->display_options['fields']['field_scripture']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_scripture']['element_type'] = '0';
  $handler->display->display_options['fields']['field_scripture']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_scripture']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_scripture']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_scripture']['type'] = 'text_plain';
  /* Field: Content: Songwriters */
  $handler->display->display_options['fields']['field_songwriters']['id'] = 'field_songwriters';
  $handler->display->display_options['fields']['field_songwriters']['table'] = 'field_data_field_songwriters';
  $handler->display->display_options['fields']['field_songwriters']['field'] = 'field_songwriters';
  $handler->display->display_options['fields']['field_songwriters']['label'] = '';
  $handler->display->display_options['fields']['field_songwriters']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_songwriters']['element_type'] = '0';
  $handler->display->display_options['fields']['field_songwriters']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_songwriters']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_songwriters']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_songwriters']['type'] = 'text_plain';
  /* Field: Content: Ministry */
  $handler->display->display_options['fields']['field_church']['id'] = 'field_church';
  $handler->display->display_options['fields']['field_church']['table'] = 'field_data_field_church';
  $handler->display->display_options['fields']['field_church']['field'] = 'field_church';
  $handler->display->display_options['fields']['field_church']['label'] = '';
  $handler->display->display_options['fields']['field_church']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_church']['element_type'] = '0';
  $handler->display->display_options['fields']['field_church']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_church']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_church']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_church']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_church']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_church']['separator'] = ' / ';
  /* Field: Content: CCLI License */
  $handler->display->display_options['fields']['field_ccli_license']['id'] = 'field_ccli_license';
  $handler->display->display_options['fields']['field_ccli_license']['table'] = 'field_data_field_ccli_license';
  $handler->display->display_options['fields']['field_ccli_license']['field'] = 'field_ccli_license';
  $handler->display->display_options['fields']['field_ccli_license']['label'] = '';
  $handler->display->display_options['fields']['field_ccli_license']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_ccli_license']['element_type'] = '0';
  $handler->display->display_options['fields']['field_ccli_license']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ccli_license']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_ccli_license']['element_default_classes'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="key-tempo">
<span><h4>Recommended Key</h4>[field_key]</span>
<span><h4>Tempo/BPM</h4>[field_tempo]/[field_bpm]</span>
</div>
<div class="theme">
<div><span>Theme:</span>[field_theme]<br></div>
<div><span>Service:</span>[field_services]<br></div>
<div><span>Scripture:</span>[field_scripture]<br></div>
</div>
<div class="song-info">
<div><span>Songwriters:</span>[field_songwriters]<br></div>
<div><span>Ministry:</span>[field_church]<br></div>
<div><span>CCLI#:</span>[field_ccli_license]<br></div>
</div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
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
  $handler->display->display_options['filters']['type']['group'] = 1;
  $handler->display->display_options['entity_type'] = 'node';
  $handler->display->display_options['bundles'] = array(
    0 => 'song',
  );

  /* Display: Worship Leaders Songs */
  $handler = $view->new_display('entity_view', 'Worship Leaders Songs', 'entity_view_4');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'song-listing';
  $handler->display->display_options['defaults']['exposed_form'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Clear all';
  $handler->display->display_options['exposed_form']['options']['expose_sort_order'] = FALSE;
  $handler->display->display_options['exposed_form']['options']['autosubmit'] = TRUE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Result summary */
  $handler->display->display_options['header']['result']['id'] = 'result';
  $handler->display->display_options['header']['result']['table'] = 'views';
  $handler->display->display_options['header']['result']['field'] = 'result';
  $handler->display->display_options['header']['result']['content'] = '<div class="result-summary">
<p>Showing @start-@end of @total</p>
<a href="#" id="view-new">View New</a>
<a href="#" id="view-all">View All</a>
</div>';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_artist_worship_leader_target_id']['id'] = 'field_artist_worship_leader_target_id';
  $handler->display->display_options['relationships']['field_artist_worship_leader_target_id']['table'] = 'field_data_field_artist_worship_leader';
  $handler->display->display_options['relationships']['field_artist_worship_leader_target_id']['field'] = 'field_artist_worship_leader_target_id';
  $handler->display->display_options['relationships']['field_artist_worship_leader_target_id']['required'] = TRUE;
  /* Relationship: Flags: new */
  $handler->display->display_options['relationships']['flag_content_rel']['id'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['flag_content_rel']['field'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel']['required'] = 0;
  $handler->display->display_options['relationships']['flag_content_rel']['flag'] = 'new';
  $handler->display->display_options['relationships']['flag_content_rel']['user_scope'] = 'any';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['relationship'] = 'field_artist_worship_leader_target_id';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
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
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Flags: Flagged */
  $handler->display->display_options['filters']['flagged']['id'] = 'flagged';
  $handler->display->display_options['filters']['flagged']['table'] = 'flagging';
  $handler->display->display_options['filters']['flagged']['field'] = 'flagged';
  $handler->display->display_options['filters']['flagged']['relationship'] = 'flag_content_rel';
  $handler->display->display_options['filters']['flagged']['value'] = 'All';
  $handler->display->display_options['filters']['flagged']['exposed'] = TRUE;
  $handler->display->display_options['filters']['flagged']['expose']['operator_id'] = '';
  $handler->display->display_options['filters']['flagged']['expose']['label'] = 'Flagged';
  $handler->display->display_options['filters']['flagged']['expose']['operator'] = 'flagged_op';
  $handler->display->display_options['filters']['flagged']['expose']['identifier'] = 'flagged';
  $handler->display->display_options['filters']['flagged']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
  );
  $handler->display->display_options['entity_type'] = 'node';
  $handler->display->display_options['bundles'] = array(
    0 => 'artist_worship_leader',
  );

  /* Display: Related Songs EVA */
  $handler = $view->new_display('entity_view', 'Related Songs EVA', 'entity_view_5');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = '(none) - see header';
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'smart-filter';
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['group_by'] = TRUE;
  $handler->display->display_options['defaults']['query'] = FALSE;
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['style_options']['uses_fields'] = TRUE;
  $handler->display->display_options['style_options']['wrapper_class'] = '';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'node';
  $handler->display->display_options['row_options']['view_mode'] = 'rss';
  $handler->display->display_options['row_options']['links'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<h2>Related Songs</h2>';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Tempo Terms on Node */
  $handler->display->display_options['relationships']['term_node_tid_1']['id'] = 'term_node_tid_1';
  $handler->display->display_options['relationships']['term_node_tid_1']['table'] = 'node';
  $handler->display->display_options['relationships']['term_node_tid_1']['field'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid_1']['ui_name'] = 'Tempo Terms on Node';
  $handler->display->display_options['relationships']['term_node_tid_1']['label'] = 'tempo terms on node';
  $handler->display->display_options['relationships']['term_node_tid_1']['required'] = TRUE;
  $handler->display->display_options['relationships']['term_node_tid_1']['vocabularies'] = array(
    'tempo' => 'tempo',
    'bpm' => 0,
    'church' => 0,
    'key' => 0,
    'news_tags' => 0,
    'services' => 0,
    'theme' => 0,
  );
  /* Relationship: Content with Tempo */
  $handler->display->display_options['relationships']['nid_1']['id'] = 'nid_1';
  $handler->display->display_options['relationships']['nid_1']['table'] = 'taxonomy_index';
  $handler->display->display_options['relationships']['nid_1']['field'] = 'nid';
  $handler->display->display_options['relationships']['nid_1']['relationship'] = 'term_node_tid_1';
  $handler->display->display_options['relationships']['nid_1']['ui_name'] = 'Content with Tempo';
  $handler->display->display_options['relationships']['nid_1']['label'] = 'content with tempo';
  $handler->display->display_options['relationships']['nid_1']['required'] = TRUE;
  /* Relationship: Key Terms on Node */
  $handler->display->display_options['relationships']['term_node_tid']['id'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['table'] = 'node';
  $handler->display->display_options['relationships']['term_node_tid']['field'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['ui_name'] = 'Key Terms on Node';
  $handler->display->display_options['relationships']['term_node_tid']['label'] = 'key';
  $handler->display->display_options['relationships']['term_node_tid']['required'] = TRUE;
  $handler->display->display_options['relationships']['term_node_tid']['vocabularies'] = array(
    'key' => 'key',
    'bpm' => 0,
    'church' => 0,
    'news_tags' => 0,
    'services' => 0,
    'tempo' => 0,
    'theme' => 0,
  );
  /* Relationship: Taxonomy term: Content with term */
  $handler->display->display_options['relationships']['nid']['id'] = 'nid';
  $handler->display->display_options['relationships']['nid']['table'] = 'taxonomy_index';
  $handler->display->display_options['relationships']['nid']['field'] = 'nid';
  $handler->display->display_options['relationships']['nid']['relationship'] = 'term_node_tid';
  $handler->display->display_options['relationships']['nid']['label'] = 'content with key';
  /* Relationship: Theme Terms on Node */
  $handler->display->display_options['relationships']['term_node_tid_2']['id'] = 'term_node_tid_2';
  $handler->display->display_options['relationships']['term_node_tid_2']['table'] = 'node';
  $handler->display->display_options['relationships']['term_node_tid_2']['field'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid_2']['ui_name'] = 'Theme Terms on Node';
  $handler->display->display_options['relationships']['term_node_tid_2']['label'] = 'theme';
  $handler->display->display_options['relationships']['term_node_tid_2']['required'] = TRUE;
  $handler->display->display_options['relationships']['term_node_tid_2']['vocabularies'] = array(
    'theme' => 'theme',
    'bpm' => 0,
    'church' => 0,
    'key' => 0,
    'news_tags' => 0,
    'services' => 0,
    'tempo' => 0,
  );
  /* Relationship: Taxonomy term: Content with term */
  $handler->display->display_options['relationships']['nid_2']['id'] = 'nid_2';
  $handler->display->display_options['relationships']['nid_2']['table'] = 'taxonomy_index';
  $handler->display->display_options['relationships']['nid_2']['field'] = 'nid';
  $handler->display->display_options['relationships']['nid_2']['relationship'] = 'term_node_tid_2';
  $handler->display->display_options['relationships']['nid_2']['label'] = 'content with tempo';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['group_type'] = 'count_distinct';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Content: Song Title */
  $handler->display->display_options['fields']['title_field']['id'] = 'title_field';
  $handler->display->display_options['fields']['title_field']['table'] = 'field_data_title_field';
  $handler->display->display_options['fields']['title_field']['field'] = 'title_field';
  $handler->display->display_options['fields']['title_field']['label'] = '';
  $handler->display->display_options['fields']['title_field']['element_type'] = '0';
  $handler->display->display_options['fields']['title_field']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title_field']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['title_field']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['title_field']['group_column'] = 'entity_id';
  $handler->display->display_options['fields']['title_field']['field_api_classes'] = TRUE;
  $handler->display->display_options['fields']['title_field']['link_to_entity'] = 0;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Google Analytics Counter: Pageview Total */
  $handler->display->display_options['sorts']['pageview_total']['id'] = 'pageview_total';
  $handler->display->display_options['sorts']['pageview_total']['table'] = 'google_analytics_counter_storage';
  $handler->display->display_options['sorts']['pageview_total']['field'] = 'pageview_total';
  $handler->display->display_options['sorts']['pageview_total']['order'] = 'DESC';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: NID */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['relationship'] = 'nid';
  $handler->display->display_options['arguments']['nid']['ui_name'] = 'NID';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['nid']['validate']['type'] = 'taxonomy_term';
  $handler->display->display_options['arguments']['nid']['validate_options']['vocabularies'] = array(
    'key' => 'key',
    'theme' => 'theme',
  );
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid_2']['id'] = 'nid_2';
  $handler->display->display_options['arguments']['nid_2']['table'] = 'node';
  $handler->display->display_options['arguments']['nid_2']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid_2']['relationship'] = 'nid_2';
  $handler->display->display_options['arguments']['nid_2']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid_2']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid_2']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid_2']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid_2']['summary_options']['items_per_page'] = '25';
  /* Contextual filter: NID - exclude current */
  $handler->display->display_options['arguments']['nid_1']['id'] = 'nid_1';
  $handler->display->display_options['arguments']['nid_1']['table'] = 'node';
  $handler->display->display_options['arguments']['nid_1']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid_1']['ui_name'] = 'NID - exclude current';
  $handler->display->display_options['arguments']['nid_1']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid_1']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid_1']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid_1']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid_1']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['nid_1']['not'] = TRUE;
  /* Contextual filter: Taxonomy term: Term ID */
  $handler->display->display_options['arguments']['tid']['id'] = 'tid';
  $handler->display->display_options['arguments']['tid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['arguments']['tid']['field'] = 'tid';
  $handler->display->display_options['arguments']['tid']['relationship'] = 'term_node_tid_1';
  $handler->display->display_options['arguments']['tid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['tid']['default_argument_type'] = 'taxonomy_tid';
  $handler->display->display_options['arguments']['tid']['default_argument_options']['term_page'] = FALSE;
  $handler->display->display_options['arguments']['tid']['default_argument_options']['node'] = TRUE;
  $handler->display->display_options['arguments']['tid']['default_argument_options']['anyall'] = '+';
  $handler->display->display_options['arguments']['tid']['default_argument_options']['limit'] = TRUE;
  $handler->display->display_options['arguments']['tid']['default_argument_options']['vocabularies'] = array(
    'tempo' => 'tempo',
  );
  $handler->display->display_options['arguments']['tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['tid']['not'] = TRUE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
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
  $handler->display->display_options['filters']['type']['group'] = 1;
  $handler->display->display_options['entity_type'] = 'node';
  $handler->display->display_options['bundles'] = array(
    0 => 'song',
  );
  $handler->display->display_options['show_title'] = 0;

  /* Display: Songs Admin */
  $handler = $view->new_display('page', 'Songs Admin', 'page_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Song Admin';
  $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'edit any song content';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '50';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['pager']['options']['tags']['first'] = '';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '<';
  $handler->display->display_options['pager']['options']['tags']['next'] = '>';
  $handler->display->display_options['pager']['options']['tags']['last'] = '';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'views_bulk_operations' => 'views_bulk_operations',
    'title' => 'title',
    'field_subtitle' => 'title',
    'field_bpm' => 'field_bpm',
    'field_ccli_license' => 'field_ccli_license',
    'field_key' => 'field_bpm',
    'field_church' => 'field_church',
    'field_scripture' => 'field_scripture',
    'field_services' => 'field_services',
    'field_tempo' => 'field_tempo',
    'field_theme' => 'field_theme',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'views_bulk_operations' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_subtitle' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_bpm' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_ccli_license' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_key' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_church' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_scripture' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_services' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_tempo' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_theme' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Bulk operations: Content */
  $handler->display->display_options['fields']['views_bulk_operations']['id'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['table'] = 'node';
  $handler->display->display_options['fields']['views_bulk_operations']['field'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['label'] = '';
  $handler->display->display_options['fields']['views_bulk_operations']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['display_type'] = '0';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['enable_select_all_pages'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['row_clickable'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['force_single'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['entity_load_capacity'] = '10';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_operations'] = array(
    'action::views_bulk_operations_modify_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
      'settings' => array(
        'show_all_tokens' => 1,
        'display_values' => array(
          'song::field_church' => 'song::field_church',
          'song::field_theme' => 'song::field_theme',
          'song::field_services' => 'song::field_services',
        ),
      ),
    ),
    'action::node_save_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'h3';
  /* Field: Content: Subtitle (Artist/Worship Leaders) */
  $handler->display->display_options['fields']['field_subtitle']['id'] = 'field_subtitle';
  $handler->display->display_options['fields']['field_subtitle']['table'] = 'field_data_field_subtitle';
  $handler->display->display_options['fields']['field_subtitle']['field'] = 'field_subtitle';
  $handler->display->display_options['fields']['field_subtitle']['label'] = '';
  $handler->display->display_options['fields']['field_subtitle']['element_type'] = '0';
  $handler->display->display_options['fields']['field_subtitle']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_subtitle']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_subtitle']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_subtitle']['field_api_classes'] = TRUE;
  /* Field: Content: BPM */
  $handler->display->display_options['fields']['field_bpm']['id'] = 'field_bpm';
  $handler->display->display_options['fields']['field_bpm']['table'] = 'field_data_field_bpm';
  $handler->display->display_options['fields']['field_bpm']['field'] = 'field_bpm';
  $handler->display->display_options['fields']['field_bpm']['label'] = 'BPM/Key';
  $handler->display->display_options['fields']['field_bpm']['element_type'] = '0';
  $handler->display->display_options['fields']['field_bpm']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_bpm']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_bpm']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_bpm']['field_api_classes'] = TRUE;
  /* Field: Content: CCLI License */
  $handler->display->display_options['fields']['field_ccli_license']['id'] = 'field_ccli_license';
  $handler->display->display_options['fields']['field_ccli_license']['table'] = 'field_data_field_ccli_license';
  $handler->display->display_options['fields']['field_ccli_license']['field'] = 'field_ccli_license';
  $handler->display->display_options['fields']['field_ccli_license']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_ccli_license']['element_type'] = '0';
  $handler->display->display_options['fields']['field_ccli_license']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_ccli_license']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_ccli_license']['field_api_classes'] = TRUE;
  /* Field: Content: Key */
  $handler->display->display_options['fields']['field_key']['id'] = 'field_key';
  $handler->display->display_options['fields']['field_key']['table'] = 'field_data_field_key';
  $handler->display->display_options['fields']['field_key']['field'] = 'field_key';
  $handler->display->display_options['fields']['field_key']['element_type'] = '0';
  $handler->display->display_options['fields']['field_key']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_key']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_key']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_key']['field_api_classes'] = TRUE;
  /* Field: Content: Ministry */
  $handler->display->display_options['fields']['field_church']['id'] = 'field_church';
  $handler->display->display_options['fields']['field_church']['table'] = 'field_data_field_church';
  $handler->display->display_options['fields']['field_church']['field'] = 'field_church';
  $handler->display->display_options['fields']['field_church']['element_type'] = '0';
  $handler->display->display_options['fields']['field_church']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_church']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_church']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_church']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_church']['field_api_classes'] = TRUE;
  /* Field: Content: Scripture */
  $handler->display->display_options['fields']['field_scripture']['id'] = 'field_scripture';
  $handler->display->display_options['fields']['field_scripture']['table'] = 'field_data_field_scripture';
  $handler->display->display_options['fields']['field_scripture']['field'] = 'field_scripture';
  $handler->display->display_options['fields']['field_scripture']['element_type'] = '0';
  $handler->display->display_options['fields']['field_scripture']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_scripture']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_scripture']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_scripture']['field_api_classes'] = TRUE;
  /* Field: Content: Service */
  $handler->display->display_options['fields']['field_services']['id'] = 'field_services';
  $handler->display->display_options['fields']['field_services']['table'] = 'field_data_field_services';
  $handler->display->display_options['fields']['field_services']['field'] = 'field_services';
  $handler->display->display_options['fields']['field_services']['element_type'] = '0';
  $handler->display->display_options['fields']['field_services']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_services']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_services']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_services']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_services']['field_api_classes'] = TRUE;
  /* Field: Content: Tempo */
  $handler->display->display_options['fields']['field_tempo']['id'] = 'field_tempo';
  $handler->display->display_options['fields']['field_tempo']['table'] = 'field_data_field_tempo';
  $handler->display->display_options['fields']['field_tempo']['field'] = 'field_tempo';
  $handler->display->display_options['fields']['field_tempo']['element_type'] = '0';
  $handler->display->display_options['fields']['field_tempo']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_tempo']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_tempo']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_tempo']['field_api_classes'] = TRUE;
  /* Field: Content: Theme */
  $handler->display->display_options['fields']['field_theme']['id'] = 'field_theme';
  $handler->display->display_options['fields']['field_theme']['table'] = 'field_data_field_theme';
  $handler->display->display_options['fields']['field_theme']['field'] = 'field_theme';
  $handler->display->display_options['fields']['field_theme']['element_type'] = '0';
  $handler->display->display_options['fields']['field_theme']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_theme']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_theme']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_theme']['field_api_classes'] = TRUE;
  $handler->display->display_options['path'] = 'admin/content/songs';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Song Admin';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'management';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $export['songs'] = $view;

  return $export;
}
