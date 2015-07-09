<?php
/**
 * @file
 * ew_base.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function ew_base_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: menu-get-in-touch.
  $menus['menu-get-in-touch'] = array(
    'menu_name' => 'menu-get-in-touch',
    'title' => 'Get in Touch',
    'description' => 'Email and social links in footer',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Email and social links in footer');
  t('Get in Touch');


  return $menus;
}
