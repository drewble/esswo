<?php
/**
 * @file
 * ew_artist_worship_leader.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function ew_artist_worship_leader_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'worship_leader_node';
  $context->description = 'Worship Leader Node';
  $context->tag = '';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'artist_worship_leader' => 'artist_worship_leader',
      ),
      'options' => array(
        'node_form' => '0',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-worship_leaders-block_2' => array(
          'module' => 'views',
          'delta' => 'worship_leaders-block_2',
          'region' => 'pre_footer',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Worship Leader Node');
  $export['worship_leader_node'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'worship_leaders';
  $context->description = 'Worship Leaders Page';
  $context->tag = '';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'worship-leaders' => 'worship-leaders',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-worship_leaders-block_1' => array(
          'module' => 'views',
          'delta' => 'worship_leaders-block_1',
          'region' => 'content',
          'weight' => '10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Worship Leaders Page');
  $export['worship_leaders'] = $context;

  return $export;
}
