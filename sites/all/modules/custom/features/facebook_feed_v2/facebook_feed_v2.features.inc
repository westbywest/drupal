<?php
/**
 * @file
 * facebook_feed_v2.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function facebook_feed_v2_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "feeds" && $api == "feeds_importer_default") {
    return array("version" => "1");
  }
  if ($module == "feeds_tamper" && $api == "feeds_tamper_default") {
    return array("version" => "2");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function facebook_feed_v2_node_info() {
  $items = array(
    'facebook_feed' => array(
      'name' => t('Facebook Feed'),
      'base' => 'node_content',
      'description' => t('Feed of timeline items from a Facebook page or profile'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
