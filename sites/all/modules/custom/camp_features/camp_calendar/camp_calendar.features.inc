<?php

/**
 * Implementation of hook_node_info().
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
