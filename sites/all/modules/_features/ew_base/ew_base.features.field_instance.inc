<?php
/**
 * @file
 * ew_base.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function ew_base_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'user-user-field_i_would_like_to_receive_th'
  $field_instances['user-user-field_i_would_like_to_receive_th'] = array(
    'bundle' => 'user',
    'default_value' => array(
      0 => array(
        'subscribe' => 0,
        'interest_groups' => array(
          15245 => '',
        ),
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'mailchimp_lists',
        'settings' => array(
          'interest_groups' => array(),
          'show_interest_groups' => FALSE,
        ),
        'type' => 'mailchimp_lists_subscribe_default',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'user',
    'fences_wrapper' => 'div',
    'field_name' => 'field_i_would_like_to_receive_th',
    'label' => 'I would like to receive the monthly newsletter',
    'required' => 0,
    'settings' => array(
      'interest_groups_title' => 'Interest Groups',
      'mergefields' => array(
        'EMAIL' => '[user:mail]',
        'FNAME' => '',
        'LNAME' => '',
        'advanced' => 0,
      ),
      'options' => array(
        'interest_groups' => array(),
        'subscribe' => FALSE,
      ),
      'show_interest_groups' => 0,
      'unsubscribe_on_delete' => 1,
      'user_register_form' => 1,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'mailchimp_lists',
      'settings' => array(),
      'type' => 'mailchimp_lists_select',
      'weight' => 41,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('I would like to receive the monthly newsletter');

  return $field_instances;
}
