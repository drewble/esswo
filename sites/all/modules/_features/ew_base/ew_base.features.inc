<?php
/**
 * @file
 * ew_base.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function ew_base_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "captcha" && $api == "captcha") {
    return array("version" => "1");
  }
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function ew_base_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_flag_default_flags().
 */
function ew_base_flag_default_flags() {
  $flags = array();
  // Exported flag: "New".
  $flags['new'] = array(
    'entity_type' => 'node',
    'title' => 'New',
    'global' => 1,
    'types' => array(
      0 => 'artist_worship_leader',
      1 => 'song',
    ),
    'flag_short' => 'Mark as New',
    'flag_long' => '',
    'flag_message' => '',
    'unflag_short' => 'Not New',
    'unflag_long' => '',
    'unflag_message' => '',
    'unflag_denied_text' => '',
    'link_type' => 'toggle',
    'weight' => 0,
    'show_in_links' => array(
      'full' => 0,
      'teaser' => 0,
      'rss' => 0,
      'diff_standard' => 0,
      'token' => 0,
    ),
    'show_as_field' => 0,
    'show_on_form' => 1,
    'access_author' => '',
    'show_contextual_link' => 0,
    'i18n' => 0,
    'module' => 'ew_base',
    'locked' => array(
      0 => 'name',
    ),
    'api_version' => 3,
  );
  return $flags;

}

/**
 * Implements hook_default_mailchimp_signup().
 */
function ew_base_default_mailchimp_signup() {
  $items = array();
  $items['registration'] = entity_import('mailchimp_signup', '{
    "name" : "registration",
    "mc_lists" : { "9860993967" : "9860993967" },
    "mode" : "1",
    "title" : "Registration",
    "settings" : {
      "path" : "",
      "submit_button" : "Submit",
      "confirmation_message" : "You have been successfully subscribed.",
      "destination" : "thanks-subscribing-newsletter",
      "mergefields" : {
        "EMAIL" : {
          "name" : "Email Address",
          "req" : true,
          "field_type" : "email",
          "public" : true,
          "show" : true,
          "order" : "1",
          "default" : "",
          "helptext" : "",
          "size" : "25",
          "tag" : "EMAIL",
          "id" : 0
        },
        "FNAME" : 0,
        "LNAME" : 0,
        "POSTAL" : 0,
        "BIRTHDAY" : 0,
        "MOBILE" : 0
      },
      "description" : "SUBSCRIBE TO OUR NEWSLETTER",
      "doublein" : 0,
      "send_welcome" : 0,
      "include_interest_groups" : 0
    },
    "rdf_mapping" : []
  }');
  return $items;
}
