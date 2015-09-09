<?php
/*
  Preprocess
*/


function ewo_preprocess_page(&$vars,$hook) {
  $path = drupal_get_path('theme', 'ewo');
  //googlefont
  drupal_add_css('https://fonts.googleapis.com/css?family=Ropa+Sans','external');
  drupal_add_css('https://fonts.googleapis.com/css?family=Titillium+Web:300,400,400italic','external');
  drupal_add_css($path .'/assets/js/vendor/bootstrap/css/bootstrap-theme.min.css', array('group' => CSS_DEFAULT));
  drupal_add_css($path .'/assets/js/vendor/bootstrap/css/bootstrap.min.css', array('group' => CSS_DEFAULT));
  drupal_add_js($path .'/assets/js/vendor/bootstrap/js/bootstrap.min.js', array('group' => JS_LIBRARY));

  if ($vars['is_front'] == TRUE) {
  	drupal_add_js($path .'/assets/js/front.js', array('group' => JS_THEME));
  }

  // Variables set for fallback
  $vars['bgImg'] = '';
  $vars['subtitle'] = '';
  $vars['resources'] = '';
  $vars['links'] = '';
  // if a node
  if (isset($vars['node'])) {
    $node = $vars['node'];
    // Background Image functionality
    // If the image field is set
    if (isset($node->field_header_image) && !empty($node->field_header_image)) {
      $vars['bgImg'] = $node->field_header_image['und'][0];
    }
    if (!empty($node->field_subtitle)) {
      $vars['subtitle'] = $node->field_subtitle[LANGUAGE_NONE][0]['safe_value'];
    }
    // If Song
    if ($node->type == 'song') {
      drupal_add_css('https://fonts.googleapis.com/css?family=Roboto+Mono','external');
      drupal_add_js($path .'/assets/js/vendor/jquery.fitvids.js', array('group' => JS_LIBRARY));
      drupal_add_js($path .'/assets/js/song.js', array('group' => JS_THEME));
      if (!empty($node->field_song_resources)) {
        $vars['resources'] = file_create_url($node->field_song_resources[LANGUAGE_NONE][0]['uri']);
      }
      
      // Link Changes
      foreach ($vars['page']['content']['system_main']['nodes'] as $key => &$value) {
        if (is_array($value)) {
          $vars['links'] = $value['links']['#links'];
        }
      }
    }

    // Worship Leader
    if ($node->type == 'artist_worship_leader') {
      drupal_add_css($path .'/assets/js/vendor/chosen/chosen.min.css', array('group' => CSS_DEFAULT));
      drupal_add_js($path .'/assets/js/vendor/chosen/chosen.jquery.min.js', array('group' => JS_LIBRARY));
      drupal_add_js($path .'/assets/js/song-list.js', array('group' => JS_THEME));
    }
  }

  // Song page
  if ($vars['theme_hook_suggestions'][0] == 'page__songs') {
    $vars['subtitle'] = 'browse our collection of worship songs for any key, tempo, theme,
ministry or service to find the perfect song.';
  }

  // Spotify Callback Page
  if ($vars['theme_hook_suggestions'][0] == 'page__spotify_callback') {
    drupal_add_js($path .'/assets/js/spotify_add_to_playlist.js', array('group' => JS_THEME));
  }

  // If a Profile page
  if (in_array('page__user__%', $vars['theme_hook_suggestions'])) {
  	drupal_set_title($vars['page']['content']['system_main']['#account']->mail);
  }
}


function ewo_form_alter(&$form, &$form_state, $form_id) {
  $path = drupal_get_path('theme', 'ewo');
  if ($form_id == 'views_exposed_form') {
    if ($form['#id'] == 'views-exposed-form-songs-page') {
      drupal_add_css($path .'/assets/js/vendor/chosen/chosen.min.css', array('group' => CSS_DEFAULT));
      drupal_add_js($path .'/assets/js/vendor/chosen/chosen.jquery.min.js', array('group' => JS_LIBRARY));
      drupal_add_js($path .'/assets/js/song-list.js', array('group' => JS_THEME));

      // Set Default Values
      $form['title']['#prefix'] = '<span class="icon icon-icons_search"></span><p><span>press [enter] to submit</span><small class="icon icon-icons_close"></small></p>';
      $form['field_key_tid']['#prefix'] = '<span>Filter by</span>';
      $form['title']['#attributes']['placeholder'] = 'Find a Song...';
      $form['field_key_tid']['#options']['All'] = 'Key';
      $form['field_tempo_tid']['#options']['All'] = 'Tempo';
      $form['field_theme_tid']['#options']['All'] = 'Theme';
      $form['field_services_tid']['#options']['All'] = 'Services';
      $form['field_church_tid']['#options']['All'] = 'Ministry';
    }
  }

  // Login
  if ($form_id == 'user_login_block') {
    $form['name']['#attributes']['placeholder'] = 'Email Address';
    $form['actions']['submit']['#value'] = 'Sign In';
  }
  if ($form_id == 'user_login') {
  	$form['gacode']['#title'] = "2-Factor Auth Code";
  }

  // Register
  if ($form_id == 'user_register_form') {
    $form['account']['mail']['#attributes']['placeholder'] = 'Email Address';
    $form['actions']['submit']['#value'] = 'Sign Up';
    $form['field_i_would_like_to_receive_th'][LANGUAGE_NONE][0]['subscribe']['#title'] = $form['field_i_would_like_to_receive_th'][LANGUAGE_NONE][0]['#title'];
  }
}


function ewo_preprocess_field(&$vars,$hook) {
  // If it is a link field
  if ($vars['element']['#field_name'] == 'field_link') {
    // Check the Title to see if the icon class should be added
    if ($vars['items'][0]['#element']['title'] == 'Watch the Song Session' || $vars['items'][0]['#element']['title'] == 'Watch the Tutorial' || $vars['items'][0]['#element']['title'] == 'Watch the Live Video' || $vars['items'][0]['#element']['title'] == 'Watch the Story') {
      $vars['items'][0]['#element']['attributes']['class'] = 'white-btn icon-btn feature-btn icon-icons_watch';
    }
    if ($vars['items'][0]['#element']['title'] == 'Download Song Resources') {
      $vars['items'][0]['#element']['attributes']['class'] = 'white-btn icon-btn feature-btn icon-icons_download';
    }
    if ($vars['items'][0]['#element']['title'] == 'Check it Out') {
      $vars['items'][0]['#element']['attributes']['class'] = 'white-btn icon-btn feature-btn icon-icons_arrow';
    }
    if ($vars['items'][0]['#element']['title'] == 'Listen Now') {
      $vars['items'][0]['#element']['attributes']['class'] = 'white-btn icon-btn feature-btn icon-icons_listen';
    }
    if ($vars['items'][0]['#element']['title'] == 'Find Out More') {
      $vars['items'][0]['#element']['attributes']['class'] = 'white-btn icon-btn feature-btn icon-icons_more';
    }
    if ($vars['items'][0]['#element']['title'] == 'Join the Gathering') {
      $vars['items'][0]['#element']['attributes']['class'] = 'white-btn icon-btn feature-btn icon-icons_join';
    }
  }
  if ($vars['element']['#field_name'] == 'field_website') {
    $vars['items'][0]['#element']['attributes']['class'] = 'icon-btn icon-icons_web';
  }
  if ($vars['element']['#field_name'] == 'field_facebook') {
    $vars['items'][0]['#element']['attributes']['class'] = 'icon-btn icon-icons_fbook_dk';
  }
  if ($vars['element']['#field_name'] == 'field_twitter') {
    $vars['items'][0]['#element']['attributes']['class'] = 'icon-btn icon-icons_twitter_dark';
  }
}



/*
function ewo_preprocess_region(&$vars,$hook) {
  //  kpr($vars['content']);
}
*/
/*
function ewo_preprocess_block(&$vars, $hook) {
  //  kpr($vars['content']);

  //lets look for unique block in a region $region-$blockcreator-$delta
   $block =
   $vars['elements']['#block']->region .'-'.
   $vars['elements']['#block']->module .'-'.
   $vars['elements']['#block']->delta;

  // print $block .' ';
   switch ($block) {
     case 'header-menu_block-2':
       $vars['classes_array'][] = '';
       break;
     case 'sidebar-system-navigation':
       $vars['classes_array'][] = '';
       break;
    default:

    break;

   }


  switch ($vars['elements']['#block']->region) {
    case 'header':
      $vars['classes_array'][] = '';
      break;
    case 'sidebar':
      $vars['classes_array'][] = '';
      $vars['classes_array'][] = '';
      break;
    default:

      break;
  }

}

function ewo_preprocess_comment(&$vars,$hook) {
  //  kpr($vars['content']);
}
*/
/*
function ewo_preprocess_maintenance_page(){
  //  kpr($vars['content']);
}
*/

