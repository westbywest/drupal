<?php
/**
 * @file
 * custom_rich_text_formats.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function custom_rich_text_formats_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "file_entity" && $api == "file_default_displays") {
    return array("version" => "1");
  }
  if ($module == "oembedcore" && $api == "") {
    return array("version" => "");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
