<?php
/**
 * @file
 * camp_calendar.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function camp_calendar_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function camp_calendar_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function camp_calendar_node_info() {
  $items = array(
    'event' => array(
      'name' => t('Event'),
      'base' => 'node_content',
      'description' => t('A scheduled event on our calendar'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => t('Enter a title, description and start/end time for this event.'),
    ),
  );
  return $items;
}
