<?php
/**
 * @file
 * ew_artist_worship_leader..inc
 */

/**
 * Implements hook_multifield_default_multifield().
 */
function ew_artist_worship_leader_multifield_default_multifield() {
  $export = array();

  $multifield = new stdClass();
  $multifield->disabled = FALSE; /* Edit this to true to make a default multifield disabled initially */
  $multifield->machine_name = 'field_album';
  $multifield->label = 'field_album';
  $multifield->description = '';
  $export['field_album'] = $multifield;

  return $export;
}
