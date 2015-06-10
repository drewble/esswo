<?php
/**
 * @file
 * ew_song.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function ew_song_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'add media from remote sources'.
  $permissions['add media from remote sources'] = array(
    'name' => 'add media from remote sources',
    'roles' => array(
      'client' => 'client',
      'developer' => 'developer',
    ),
    'module' => 'media_internet',
  );

  // Exported permission: 'administer spotify'.
  $permissions['administer spotify'] = array(
    'name' => 'administer spotify',
    'roles' => array(
      'developer' => 'developer',
    ),
    'module' => 'spotify',
  );

  // Exported permission: 'create song content'.
  $permissions['create song content'] = array(
    'name' => 'create song content',
    'roles' => array(
      'client' => 'client',
      'developer' => 'developer',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any song content'.
  $permissions['delete any song content'] = array(
    'name' => 'delete any song content',
    'roles' => array(
      'client' => 'client',
      'developer' => 'developer',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own song content'.
  $permissions['delete own song content'] = array(
    'name' => 'delete own song content',
    'roles' => array(
      'client' => 'client',
      'developer' => 'developer',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete terms in bpm'.
  $permissions['delete terms in bpm'] = array(
    'name' => 'delete terms in bpm',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in church'.
  $permissions['delete terms in church'] = array(
    'name' => 'delete terms in church',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in key'.
  $permissions['delete terms in key'] = array(
    'name' => 'delete terms in key',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in tempo'.
  $permissions['delete terms in tempo'] = array(
    'name' => 'delete terms in tempo',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in theme'.
  $permissions['delete terms in theme'] = array(
    'name' => 'delete terms in theme',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit any song content'.
  $permissions['edit any song content'] = array(
    'name' => 'edit any song content',
    'roles' => array(
      'client' => 'client',
      'developer' => 'developer',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own song content'.
  $permissions['edit own song content'] = array(
    'name' => 'edit own song content',
    'roles' => array(
      'client' => 'client',
      'developer' => 'developer',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit terms in bpm'.
  $permissions['edit terms in bpm'] = array(
    'name' => 'edit terms in bpm',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in church'.
  $permissions['edit terms in church'] = array(
    'name' => 'edit terms in church',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in key'.
  $permissions['edit terms in key'] = array(
    'name' => 'edit terms in key',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in tempo'.
  $permissions['edit terms in tempo'] = array(
    'name' => 'edit terms in tempo',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in theme'.
  $permissions['edit terms in theme'] = array(
    'name' => 'edit terms in theme',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  return $permissions;
}
