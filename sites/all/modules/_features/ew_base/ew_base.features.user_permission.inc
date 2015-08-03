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

  // Exported permission: 'access artist_worship_leader node view'.
  $permissions['access artist_worship_leader node view'] = array(
    'name' => 'access artist_worship_leader node view',
    'roles' => array(
      'developer' => 'developer',
    ),
    'module' => 'internal_nodes',
  );

  // Exported permission: 'access banner node view'.
  $permissions['access banner node view'] = array(
    'name' => 'access banner node view',
    'roles' => array(
      'developer' => 'developer',
    ),
    'module' => 'internal_nodes',
  );

  // Exported permission: 'access homepage_feature node view'.
  $permissions['access homepage_feature node view'] = array(
    'name' => 'access homepage_feature node view',
    'roles' => array(
      'developer' => 'developer',
    ),
    'module' => 'internal_nodes',
  );

  // Exported permission: 'access mailchimp signup pages'.
  $permissions['access mailchimp signup pages'] = array(
    'name' => 'access mailchimp signup pages',
    'roles' => array(
      'client' => 'client',
      'developer' => 'developer',
    ),
    'module' => 'mailchimp_signup',
  );

  // Exported permission: 'access news_article node view'.
  $permissions['access news_article node view'] = array(
    'name' => 'access news_article node view',
    'roles' => array(
      'developer' => 'developer',
    ),
    'module' => 'internal_nodes',
  );

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

  // Exported permission: 'access page node view'.
  $permissions['access page node view'] = array(
    'name' => 'access page node view',
    'roles' => array(
      'developer' => 'developer',
    ),
    'module' => 'internal_nodes',
  );

  // Exported permission: 'access song node view'.
  $permissions['access song node view'] = array(
    'name' => 'access song node view',
    'roles' => array(
      'developer' => 'developer',
    ),
    'module' => 'internal_nodes',
  );

  // Exported permission: 'access the block administration page'.
  $permissions['access the block administration page'] = array(
    'name' => 'access the block administration page',
    'roles' => array(
      'developer' => 'developer',
    ),
    'module' => 'block_access',
  );

  // Exported permission: 'administer addtoany'.
  $permissions['administer addtoany'] = array(
    'name' => 'administer addtoany',
    'roles' => array(
      'developer' => 'developer',
    ),
    'module' => 'addtoany',
  );

  // Exported permission: 'administer block access settings'.
  $permissions['administer block access settings'] = array(
    'name' => 'administer block access settings',
    'roles' => array(
      'developer' => 'developer',
    ),
    'module' => 'block_access',
  );

  // Exported permission: 'administer consumers'.
  $permissions['administer consumers'] = array(
    'name' => 'administer consumers',
    'roles' => array(
      'developer' => 'developer',
    ),
    'module' => 'oauth_common',
  );

  // Exported permission: 'administer devel menu items'.
  $permissions['administer devel menu items'] = array(
    'name' => 'administer devel menu items',
    'roles' => array(
      'developer' => 'developer',
    ),
    'module' => 'menu_admin_per_menu',
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

  // Exported permission: 'administer google tag manager'.
  $permissions['administer google tag manager'] = array(
    'name' => 'administer google tag manager',
    'roles' => array(
      'client' => 'client',
      'developer' => 'developer',
    ),
    'module' => 'google_tag',
  );

  // Exported permission: 'administer internal nodes'.
  $permissions['administer internal nodes'] = array(
    'name' => 'administer internal nodes',
    'roles' => array(
      'developer' => 'developer',
    ),
    'module' => 'internal_nodes',
  );

  // Exported permission: 'administer mailchimp'.
  $permissions['administer mailchimp'] = array(
    'name' => 'administer mailchimp',
    'roles' => array(
      'client' => 'client',
      'developer' => 'developer',
    ),
    'module' => 'mailchimp',
  );

  // Exported permission: 'administer mailchimp signup entities'.
  $permissions['administer mailchimp signup entities'] = array(
    'name' => 'administer mailchimp signup entities',
    'roles' => array(
      'client' => 'client',
      'developer' => 'developer',
    ),
    'module' => 'mailchimp_signup',
  );

  // Exported permission: 'administer main-menu menu items'.
  $permissions['administer main-menu menu items'] = array(
    'name' => 'administer main-menu menu items',
    'roles' => array(
      'client' => 'client',
      'developer' => 'developer',
    ),
    'module' => 'menu_admin_per_menu',
  );

  // Exported permission: 'administer management menu items'.
  $permissions['administer management menu items'] = array(
    'name' => 'administer management menu items',
    'roles' => array(
      'developer' => 'developer',
    ),
    'module' => 'menu_admin_per_menu',
  );

  // Exported permission: 'administer menu attributes'.
  $permissions['administer menu attributes'] = array(
    'name' => 'administer menu attributes',
    'roles' => array(
      'client' => 'client',
      'developer' => 'developer',
    ),
    'module' => 'menu_attributes',
  );

  // Exported permission: 'administer menu-get-in-touch menu items'.
  $permissions['administer menu-get-in-touch menu items'] = array(
    'name' => 'administer menu-get-in-touch menu items',
    'roles' => array(
      'client' => 'client',
      'developer' => 'developer',
    ),
    'module' => 'menu_admin_per_menu',
  );

  // Exported permission: 'administer navigation menu items'.
  $permissions['administer navigation menu items'] = array(
    'name' => 'administer navigation menu items',
    'roles' => array(
      'developer' => 'developer',
    ),
    'module' => 'menu_admin_per_menu',
  );

  // Exported permission: 'administer oauth'.
  $permissions['administer oauth'] = array(
    'name' => 'administer oauth',
    'roles' => array(
      'developer' => 'developer',
    ),
    'module' => 'oauth_common',
  );

  // Exported permission: 'administer user-menu menu items'.
  $permissions['administer user-menu menu items'] = array(
    'name' => 'administer user-menu menu items',
    'roles' => array(
      'developer' => 'developer',
    ),
    'module' => 'menu_admin_per_menu',
  );

  // Exported permission: 'assign roles'.
  $permissions['assign roles'] = array(
    'name' => 'assign roles',
    'roles' => array(
      'client' => 'client',
      'developer' => 'developer',
    ),
    'module' => 'roleassign',
  );

  // Exported permission: 'blocked node status'.
  $permissions['blocked node status'] = array(
    'name' => 'blocked node status',
    'roles' => array(
      'developer' => 'developer',
    ),
    'module' => 'internal_nodes',
  );

  // Exported permission: 'configure all block body fields'.
  $permissions['configure all block body fields'] = array(
    'name' => 'configure all block body fields',
    'roles' => array(
      'client' => 'client',
      'developer' => 'developer',
    ),
    'module' => 'block_access',
  );

  // Exported permission: 'configure all block descriptions'.
  $permissions['configure all block descriptions'] = array(
    'name' => 'configure all block descriptions',
    'roles' => array(
      'developer' => 'developer',
    ),
    'module' => 'block_access',
  );

  // Exported permission: 'configure all block titles'.
  $permissions['configure all block titles'] = array(
    'name' => 'configure all block titles',
    'roles' => array(
      'client' => 'client',
      'developer' => 'developer',
    ),
    'module' => 'block_access',
  );

  // Exported permission: 'configure all blocks'.
  $permissions['configure all blocks'] = array(
    'name' => 'configure all blocks',
    'roles' => array(
      'developer' => 'developer',
    ),
    'module' => 'block_access',
  );

  // Exported permission: 'configure all content type visibility settings'.
  $permissions['configure all content type visibility settings'] = array(
    'name' => 'configure all content type visibility settings',
    'roles' => array(
      'developer' => 'developer',
    ),
    'module' => 'block_access',
  );

  // Exported permission: 'configure all language settings'.
  $permissions['configure all language settings'] = array(
    'name' => 'configure all language settings',
    'roles' => array(
      'developer' => 'developer',
    ),
    'module' => 'block_access',
  );

  // Exported permission: 'configure all page visibility settings'.
  $permissions['configure all page visibility settings'] = array(
    'name' => 'configure all page visibility settings',
    'roles' => array(
      'developer' => 'developer',
    ),
    'module' => 'block_access',
  );

  // Exported permission: 'configure all region settings'.
  $permissions['configure all region settings'] = array(
    'name' => 'configure all region settings',
    'roles' => array(
      'developer' => 'developer',
    ),
    'module' => 'block_access',
  );

  // Exported permission: 'configure all role visibility settings'.
  $permissions['configure all role visibility settings'] = array(
    'name' => 'configure all role visibility settings',
    'roles' => array(
      'developer' => 'developer',
    ),
    'module' => 'block_access',
  );

  // Exported permission: 'configure all user visibility settings'.
  $permissions['configure all user visibility settings'] = array(
    'name' => 'configure all user visibility settings',
    'roles' => array(
      'developer' => 'developer',
    ),
    'module' => 'block_access',
  );

  // Exported permission: 'configure all visibility settings'.
  $permissions['configure all visibility settings'] = array(
    'name' => 'configure all visibility settings',
    'roles' => array(
      'developer' => 'developer',
    ),
    'module' => 'block_access',
  );

  // Exported permission: 'create blocks'.
  $permissions['create blocks'] = array(
    'name' => 'create blocks',
    'roles' => array(
      'developer' => 'developer',
    ),
    'module' => 'block_access',
  );

  // Exported permission: 'delete all blocks'.
  $permissions['delete all blocks'] = array(
    'name' => 'delete all blocks',
    'roles' => array(
      'developer' => 'developer',
    ),
    'module' => 'block_access',
  );

  // Exported permission: 'disable all blocks'.
  $permissions['disable all blocks'] = array(
    'name' => 'disable all blocks',
    'roles' => array(
      'developer' => 'developer',
    ),
    'module' => 'block_access',
  );

  // Exported permission: 'enable all blocks'.
  $permissions['enable all blocks'] = array(
    'name' => 'enable all blocks',
    'roles' => array(
      'developer' => 'developer',
    ),
    'module' => 'block_access',
  );

  // Exported permission: 'flag new'.
  $permissions['flag new'] = array(
    'name' => 'flag new',
    'roles' => array(
      'client' => 'client',
      'developer' => 'developer',
    ),
    'module' => 'flag',
  );

  // Exported permission: 'move all blocks'.
  $permissions['move all blocks'] = array(
    'name' => 'move all blocks',
    'roles' => array(
      'developer' => 'developer',
    ),
    'module' => 'block_access',
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

  // Exported permission: 'unflag new'.
  $permissions['unflag new'] = array(
    'name' => 'unflag new',
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

  // Exported permission: 'view all blocks'.
  $permissions['view all blocks'] = array(
    'name' => 'view all blocks',
    'roles' => array(
      'developer' => 'developer',
    ),
    'module' => 'block_access',
  );

  return $permissions;
}
