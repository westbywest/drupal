<?php
/**
 * @file
 * custom_rich_text_formats.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function custom_rich_text_formats_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'media__wysiwyg_allowed_types';
  $strongarm->value = array(
    0 => 'image',
    1 => 'video',
    2 => 'audio',
    3 => 'default',
  );
  $export['media__wysiwyg_allowed_types'] = $strongarm;

  return $export;
}
