<?php
/**
 * @file
 * ew_base.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function ew_base_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_i_would_like_to_receive_th'
  $field_bases['field_i_would_like_to_receive_th'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_i_would_like_to_receive_th',
    'indexes' => array(),
    'locked' => 0,
    'module' => 'mailchimp_lists',
    'settings' => array(
      'double_opt_in' => 0,
      'mc_list_id' => 'd1abab443f',
      'send_welcome' => 0,
    ),
    'translatable' => 0,
    'type' => 'mailchimp_lists_subscription',
  );

  return $field_bases;
}
