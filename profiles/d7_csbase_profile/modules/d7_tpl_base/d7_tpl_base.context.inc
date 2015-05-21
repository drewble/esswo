<?php
/**
 * @file
 * d7_tpl_base.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function d7_tpl_base_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'front';
  $context->description = 'Homepage, Front Page';
  $context->tag = '';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        '<front>' => '<front>',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-hero-block' => array(
          'module' => 'views',
          'delta' => 'hero-block',
          'region' => 'hero',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Homepage, Front Page');
  $export['front'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'site_wide';
  $context->description = 'Site Wide, Every Page';
  $context->tag = '';
  $context->conditions = array(
    'sitewide' => array(
      'values' => array(
        1 => 1,
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'system-main-menu' => array(
          'module' => 'system',
          'delta' => 'main-menu',
          'region' => 'header',
          'weight' => '-10',
        ),
        'search-form' => array(
          'module' => 'search',
          'delta' => 'form',
          'region' => 'nav_tools',
          'weight' => '-10',
        ),
        'menu-menu-switch-themes' => array(
          'module' => 'menu',
          'delta' => 'menu-switch-themes',
          'region' => 'hero',
          'weight' => '-10',
        ),
        'menu-menu-content' => array(
          'module' => 'menu',
          'delta' => 'menu-content',
          'region' => 'footer',
          'weight' => '-10',
        ),
        'menu-menu-follow-us' => array(
          'module' => 'menu',
          'delta' => 'menu-follow-us',
          'region' => 'footer',
          'weight' => '-9',
        ),
        'menu-menu-legal' => array(
          'module' => 'menu',
          'delta' => 'menu-legal',
          'region' => 'footer',
          'weight' => '-8',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Site Wide, Every Page');
  $export['site_wide'] = $context;

  return $export;
}
