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
      drupal_add_js($path .'/assets/js/song.js', array('group' => JS_THEME));
      if (!empty($node->field_subtitle)) {
        $vars['subtitle'] = $node->field_subtitle[LANGUAGE_NONE][0]['safe_value'];
      }
      if (!empty($node->field_song_resources)) {
        $vars['resources'] = file_create_url($node->field_song_resources[LANGUAGE_NONE][0]['uri']);
      }
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
/*
function ewo_preprocess_node(&$vars,$hook) {
  //  kpr($vars['content']);

  // add a nodeblock
  // in .info define a region : regions[block_in_a_node] = block_in_a_node
  // in node.tpl  <?php if($noderegion){ ?> <?php print render($noderegion); ?><?php } ?>
  //$vars['block_in_a_node'] = block_get_blocks_by_region('block_in_a_node');
}
*/
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
/*
function ewo_form_alter(&$form, &$form_state, $form_id) {
  //if ($form_id == '') {
  //....
  //}
}
*/

