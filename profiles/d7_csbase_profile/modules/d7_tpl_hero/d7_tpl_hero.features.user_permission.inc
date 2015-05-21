<?php
/**
 * @file
 * d7_tpl_hero.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function d7_tpl_hero_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create hero content'.
  $permissions['create hero content'] = array(
    'name' => 'create hero content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete any hero content'.
  $permissions['delete any hero content'] = array(
    'name' => 'delete any hero content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own hero content'.
  $permissions['delete own hero content'] = array(
    'name' => 'delete own hero content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit any hero content'.
  $permissions['edit any hero content'] = array(
    'name' => 'edit any hero content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit own hero content'.
  $permissions['edit own hero content'] = array(
    'name' => 'edit own hero content',
    'roles' => array(),
    'module' => 'node',
  );

  return $permissions;
}
