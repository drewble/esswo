<?php

/**
 * @file
 * This template is used to print a single field in a view.
 *
 * It is not actually used in default Views, as this is registered as a theme
 * function which has better performance. For single overrides, the template is
 * perfectly okay.
 *
 * Variables available:
 * - $view: The view object
 * - $field: The field handler object that can process the input
 * - $row: The raw SQL result that can be used
 * - $output: The processed output that will normally be used.
 *
 * When fetching output from the $row, this construct should be used:
 * $data = $row->{$field->field_alias}
 *
 * The above will guarantee that you'll always get the correct data,
 * regardless of any changes in the aliasing that might happen if
 * the view is modified.
 */

// If not mandatory
$theme = '';
$services = '';
$scripture = '';
$songwriters = '';
$church = '';
if (!empty($row->field_field_theme)) {
  $theme = '<div><span>Theme:</span>' . $row->field_field_theme[0]['rendered']['#markup'] . '</div>';
}
if (!empty($row->field_field_services)) {
  $numServices = count($row->field_field_services);
  $i = 0;
  $services = '<div><span>Service:</span>';
  foreach ($row->field_field_services as $key => $value) {
    if(!(++$i === $numServices)) {
      $services .= $row->field_field_services[$key]['rendered']['#markup'] . ' / ';
    }
    else {
      $services .= $row->field_field_services[$key]['rendered']['#markup'];
    }
  } 
  $services .= '</div>';
}
if (!empty($row->field_field_scripture)) {
  $scripture = '<div><span>Scripture:</span>' . $row->field_field_scripture[0]['rendered']['#markup'] . '</div>';
}
if (!empty($row->field_field_songwriters)) {
  $songwriters = '<div><span>Songwriters</span>' . $row->field_field_songwriters[0]['rendered']['#markup'] . '</div>';
}
if (!empty($row->field_field_church)) {
  $numChurch = count($row->field_field_church);
  $i = 0;
  $church = '<div><span>Ministry:</span>';
  foreach ($row->field_field_church as $key => $value) {
    if(!(++$i === $numChurch)) {
      $church .= $row->field_field_church[$key]['rendered']['#markup'] . ' / ';
    }
    else {
      $church .= $row->field_field_church[$key]['rendered']['#markup'];
    }
  } 
  $church .= '</div>';
}
?>
<div class="key-tempo">
<span><h4>Recommended Key</h4><?php print $row->field_field_key[0]['rendered']['#markup']; ?></span>
<span><h4>Tempo/BPM</h4><?php print $row->field_field_tempo[0]['rendered']['#markup']; ?> / <?php print $row->field_field_bpm[0]['rendered']['#markup']; ?></span>
</div>
<div class="theme">
<?php print $theme; ?>
<?php print $services; ?>
<?php print $scripture; ?>
</div>
<div class="song-info">
<?php print $songwriters; ?>
<?php print $church; ?>
<div><span>CCLI#:</span><?php print $row->field_field_ccli_license[0]['rendered']['#markup']; ?><br></div>
</div>