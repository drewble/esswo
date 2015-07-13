<?php
/*
  Preprocess
*/

/*
function ewo_preprocess_html(&$vars) {
  //  kpr($vars['content']);
}
*/

function ewo_preprocess_page(&$vars,$hook) {
  $path = drupal_get_path('theme', 'ewo');
  //googlefont
  drupal_add_css('http://fonts.googleapis.com/css?family=Ropa+Sans','external');
  drupal_add_css('http://fonts.googleapis.com/css?family=Titillium+Web:400,400italic','external');

  // Variables set for fallback
  $vars['bgImg'] = '';
  $vars['subtitle'] = '';
  $vars['resources'] = '';
  // if a node
  if (isset($vars['node'])) {
    $node = $vars['node'];
    // Background Image functionality
    // If the image field is set
    if (isset($node->field_header_image) && !empty($node->field_header_image)) {
      $vars['bgImg'] = $node->field_header_image['und'][0];
    }
    // If Song
    if ($node->type == 'song') {
      drupal_add_css('http://fonts.googleapis.com/css?family=Roboto+Mono','external');
      drupal_add_css($path .'/assets/js/vendor/bootstrap/css/bootstrap-theme.min.css', array('group' => CSS_DEFAULT));
      drupal_add_css($path .'/assets/js/vendor/bootstrap/css/bootstrap.min.css', array('group' => CSS_DEFAULT));
      drupal_add_js($path .'/assets/js/vendor/bootstrap/js/bootstrap.min.js', array('group' => JS_LIBRARY));
      drupal_add_js($path .'/assets/js/song.js', array('group' => JS_THEME));
      if (!empty($node->field_subtitle)) {
        $vars['subtitle'] = $node->field_subtitle[LANGUAGE_NONE][0]['safe_value'];
      }
      if (!empty($node->field_song_resources)) {
        $vars['resources'] = file_create_url($node->field_song_resources[LANGUAGE_NONE][0]['uri']);
      }
      
      // Link Changes
      $vars['links'] = $vars['page']['content']['system_main']['nodes'][1]['links']['#links'];
    }
  }
}


function ewo_form_alter(&$form, &$form_state, $form_id) {
  $path = drupal_get_path('theme', 'ewo');
  if ($form_id == 'views_exposed_form') {
    if ($form['#id'] == 'views-exposed-form-songs-page') {
      drupal_add_css($path .'/assets/js/vendor/chosen/chosen.min.css', array('group' => CSS_DEFAULT));
      drupal_add_js($path .'/assets/js/vendor/chosen/chosen.jquery.min.js', array('group' => JS_LIBRARY));
      drupal_add_js($path .'/assets/js/chosen-inst.js', array('group' => JS_THEME));

      // Set Default Values
      $form['title']['#attributes']['placeholder'] = 'Find a Song...';
      $form['field_key_tid']['#options']['All'] = '';
      $form['field_tempo_tid']['#options']['All'] = '';
      $form['field_theme_tid']['#options']['All'] = '';
      $form['field_services_tid']['#options']['All'] = '';
      $form['field_church_tid']['#options']['All'] = '';
    }
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
*/

// function ewo_preprocess_node(&$vars,$hook) {
//   if ($vars['type'] == 'song') {
//     // sdpm($vars);
//     // if (!empty($vars['field_spotify'])) {
//     //   unset($vars['field_mp3']);
//     // }
//   }
// }

/*
function ewo_preprocess_comment(&$vars,$hook) {
  //  kpr($vars['content']);
}
*/
/*
function ewo_preprocess_field(&$vars,$hook) {
  //  kpr($vars['content']);
  //add class to a specific field
  switch ($vars['element']['#field_name']) {
    case 'field_ROCK':
      $vars['classes_array'][] = 'classname1';
    case 'field_ROLL':
      $vars['classes_array'][] = 'classname1';
      $vars['classes_array'][] = 'classname2';
      $vars['classes_array'][] = 'classname1';
    case 'field_FOO':
      $vars['classes_array'][] = 'classname1';
    case 'field_BAR':
      $vars['classes_array'][] = 'classname1';
    default:
      break;
  }

}
*/
/*
function ewo_preprocess_maintenance_page(){
  //  kpr($vars['content']);
}
*/

