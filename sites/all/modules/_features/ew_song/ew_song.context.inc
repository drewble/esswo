<?php
/**
 * @file
 * ew_song.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function ew_song_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'songs_page';
  $context->description = 'Songs page';
  $context->tag = 'theme';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'songs' => 'songs',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views--exp-songs-page' => array(
          'module' => 'views',
          'delta' => '-exp-songs-page',
          'region' => 'content',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Songs page');
  t('theme');
  $export['songs_page'] = $context;

  return $export;
}
