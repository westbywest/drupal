<?php
/**
 * @file
 * facebook_feed_v2.feeds_tamper_default.inc
 */

/**
 * Implements hook_feeds_tamper_default().
 */
function facebook_feed_v2_feeds_tamper_default() {
  $export = array();

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'facebook_feed-description-required';
  $feeds_tamper->importer = 'facebook_feed';
  $feeds_tamper->source = 'description';
  $feeds_tamper->plugin_id = 'required';
  $feeds_tamper->settings = '';
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Required field';
  $export['facebook_feed-description-required'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'facebook_feed-description-rewrite';
  $feeds_tamper->importer = 'facebook_feed';
  $feeds_tamper->source = 'description';
  $feeds_tamper->plugin_id = 'rewrite';
  $feeds_tamper->settings = array(
    'text' => '<div class="facebook-feed-img"><img src="[picture]"></div>[description]',
  );
  $feeds_tamper->weight = 1;
  $feeds_tamper->description = 'ZZ Rewrite wrap image in tag';
  $export['facebook_feed-description-rewrite'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'facebook_feed-link-find_replace_regex';
  $feeds_tamper->importer = 'facebook_feed';
  $feeds_tamper->source = 'link';
  $feeds_tamper->plugin_id = 'find_replace_regex';
  $feeds_tamper->settings = array(
    'find' => '/^\\//',
    'replace' => 'https://facebook.com/',
    'limit' => '1',
    'real_limit' => '1',
  );
  $feeds_tamper->weight = 1;
  $feeds_tamper->description = 'Find replace REGEX';
  $export['facebook_feed-link-find_replace_regex'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'facebook_feed-name-keyword_filter';
  $feeds_tamper->importer = 'facebook_feed';
  $feeds_tamper->source = 'name';
  $feeds_tamper->plugin_id = 'keyword_filter';
  $feeds_tamper->settings = array(
    'words' => '',
    'word_boundaries' => 0,
    'exact' => 0,
    'case_sensitive' => 0,
    'invert' => 1,
    'word_list' => array(
      0 => '',
    ),
    'regex' => FALSE,
    'func' => 'mb_stripos',
  );
  $feeds_tamper->weight = 1;
  $feeds_tamper->description = 'Inverted keyword filter w/ no keywords (to reject blank fields)';
  $export['facebook_feed-name-keyword_filter'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'facebook_feed-name-required';
  $feeds_tamper->importer = 'facebook_feed';
  $feeds_tamper->source = 'name';
  $feeds_tamper->plugin_id = 'required';
  $feeds_tamper->settings = '';
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Required field';
  $export['facebook_feed-name-required'] = $feeds_tamper;

  return $export;
}
