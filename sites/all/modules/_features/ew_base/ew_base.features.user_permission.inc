<?php
/**
 * @file
 * ew_base.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function ew_base_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'access own authorizations'.
  $permissions['access own authorizations'] = array(
    'name' => 'access own authorizations',
    'roles' => array(
      'developer' => 'developer',
    ),
    'module' => 'oauth_common',
  );

  // Exported permission: 'access own consumers'.
  $permissions['access own consumers'] = array(
    'name' => 'access own consumers',
    'roles' => array(
      'developer' => 'developer',
    ),
    'module' => 'oauth_common',
  );

  // Exported permission: 'administer addtoany'.
  $permissions['administer addtoany'] = array(
    'name' => 'administer addtoany',
    'roles' => array(
      'developer' => 'developer',
    ),
    'module' => 'addtoany',
  );

  // Exported permission: 'administer consumers'.
  $permissions['administer consumers'] = array(
    'name' => 'administer consumers',
    'roles' => array(
      'developer' => 'developer',
    ),
    'module' => 'oauth_common',
  );

  // Exported permission: 'administer flags'.
  $permissions['administer flags'] = array(
    'name' => 'administer flags',
    'roles' => array(
      'developer' => 'developer',
    ),
    'module' => 'flag',
  );

  // Exported permission: 'administer google analytics counter'.
  $permissions['administer google analytics counter'] = array(
    'name' => 'administer google analytics counter',
    'roles' => array(
      'developer' => 'developer',
    ),
    'module' => 'google_analytics_counter',
  );

  // Exported permission: 'administer mailchimp'.
  $permissions['administer mailchimp'] = array(
    'name' => 'administer mailchimp',
    'roles' => array(
      'developer' => 'developer',
    ),
    'module' => 'mailchimp',
  );

  // Exported permission: 'administer menu attributes'.
  $permissions['administer menu attributes'] = array(
    'name' => 'administer menu attributes',
    'roles' => array(
      'developer' => 'developer',
    ),
    'module' => 'menu_attributes',
  );

  // Exported permission: 'administer oauth'.
  $permissions['administer oauth'] = array(
    'name' => 'administer oauth',
    'roles' => array(
      'developer' => 'developer',
    ),
    'module' => 'oauth_common',
  );

  // Exported permission: 'flag homepage_feature'.
  $permissions['flag homepage_feature'] = array(
    'name' => 'flag homepage_feature',
    'roles' => array(
      'client' => 'client',
      'developer' => 'developer',
    ),
    'module' => 'flag',
  );

  // Exported permission: 'oauth authorize any consumers'.
  $permissions['oauth authorize any consumers'] = array(
    'name' => 'oauth authorize any consumers',
    'roles' => array(
      'developer' => 'developer',
    ),
    'module' => 'oauth_common',
  );

  // Exported permission: 'oauth register any consumers'.
  $permissions['oauth register any consumers'] = array(
    'name' => 'oauth register any consumers',
    'roles' => array(
      'developer' => 'developer',
    ),
    'module' => 'oauth_common',
  );

  // Exported permission: 'unflag homepage_feature'.
  $permissions['unflag homepage_feature'] = array(
    'name' => 'unflag homepage_feature',
    'roles' => array(
      'client' => 'client',
      'developer' => 'developer',
    ),
    'module' => 'flag',
  );

  // Exported permission: 'use flag import'.
  $permissions['use flag import'] = array(
    'name' => 'use flag import',
    'roles' => array(
      'developer' => 'developer',
    ),
    'module' => 'flag',
  );

  return $permissions;
}
