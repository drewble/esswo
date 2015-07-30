<?php
/**
 * @file
 * ew_artist_worship_leader.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function ew_artist_worship_leader_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'access draggableviews'.
  $permissions['access draggableviews'] = array(
    'name' => 'access draggableviews',
    'roles' => array(
      'client' => 'client',
      'developer' => 'developer',
    ),
    'module' => 'draggableviews',
  );

  // Exported permission: 'create artist_worship_leader content'.
  $permissions['create artist_worship_leader content'] = array(
    'name' => 'create artist_worship_leader content',
    'roles' => array(
      'client' => 'client',
      'developer' => 'developer',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any artist_worship_leader content'.
  $permissions['delete any artist_worship_leader content'] = array(
    'name' => 'delete any artist_worship_leader content',
    'roles' => array(
      'client' => 'client',
      'developer' => 'developer',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own artist_worship_leader content'.
  $permissions['delete own artist_worship_leader content'] = array(
    'name' => 'delete own artist_worship_leader content',
    'roles' => array(
      'client' => 'client',
      'developer' => 'developer',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any artist_worship_leader content'.
  $permissions['edit any artist_worship_leader content'] = array(
    'name' => 'edit any artist_worship_leader content',
    'roles' => array(
      'client' => 'client',
      'developer' => 'developer',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own artist_worship_leader content'.
  $permissions['edit own artist_worship_leader content'] = array(
    'name' => 'edit own artist_worship_leader content',
    'roles' => array(
      'client' => 'client',
      'developer' => 'developer',
    ),
    'module' => 'node',
  );

  return $permissions;
}
