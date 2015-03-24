<?php
/**
 * @file
 * facebook_feed_v2.feeds_importer_default.inc
 */

/**
 * Implements hook_feeds_importer_default().
 */
function facebook_feed_v2_feeds_importer_default() {
  $export = array();

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'facebook_feed';
  $feeds_importer->config = array(
    'name' => 'Facebook Feed',
    'description' => 'Import feed from public Facebook page',
    'fetcher' => array(
      'plugin_key' => 'OAuth2HTTPSFetcher',
      'config' => array(
        'scope' => '',
        'authenticator' => 'feeds_oauth_get_tokens',
        'site_id' => 'fb',
        'consumer_key' => 'Enter App Key here',
        'consumer_secret' => 'Enter App Secret here',
        'request_token_url' => '',
        'access_token_url' => 'https://graph.facebook.com/oauth/access_token',
        'authorize_url' => 'https://graph.facebook.com/oauth/authorize',
        'method' => 'get',
        'uid' => '',
        'auto_detect_feeds' => 0,
        'use_pubsubhubbub' => FALSE,
        'designated_hub' => '',
        'request_timeout' => '',
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsExJsonPath',
      'config' => array(
        'sources' => array(
          'name' => array(
            'name' => 'Name',
            'value' => '$.name',
            'debug' => 1,
            'weight' => '1',
          ),
          'description' => array(
            'name' => 'Description',
            'value' => '$.description',
            'debug' => 1,
            'weight' => '2',
          ),
          'link' => array(
            'name' => 'Link',
            'value' => '$.link',
            'debug' => 1,
            'weight' => '3',
          ),
          'id' => array(
            'name' => 'ID',
            'value' => '$.id',
            'debug' => 1,
            'weight' => '4',
          ),
          'created' => array(
            'name' => 'Created',
            'value' => '$.created_time',
            'debug' => 1,
            'weight' => '5',
          ),
          'picture' => array(
            'name' => 'Picture',
            'value' => '$.picture',
            'debug' => 0,
            'weight' => '6',
          ),
        ),
        'context' => array(
          'value' => '$.data.*',
        ),
        'display_errors' => 0,
        'source_encoding' => array(
          0 => 'auto',
        ),
        'debug_mode' => 0,
      ),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsNodeProcessor',
      'config' => array(
        'expire' => '7776000',
        'author' => 0,
        'authorize' => 1,
        'mappings' => array(
          0 => array(
            'source' => 'name',
            'target' => 'title',
            'unique' => FALSE,
          ),
          1 => array(
            'source' => 'id',
            'target' => 'guid',
            'unique' => 1,
          ),
          2 => array(
            'source' => 'description',
            'target' => 'field_feed_item_description',
            'unique' => FALSE,
          ),
          3 => array(
            'source' => 'created',
            'target' => 'created',
            'unique' => FALSE,
          ),
          4 => array(
            'source' => 'link',
            'target' => 'field_source:url',
            'unique' => FALSE,
          ),
          5 => array(
            'source' => 'picture',
            'target' => 'field_feed_item_description',
            'unique' => FALSE,
          ),
        ),
        'update_existing' => '0',
        'input_format' => '11',
        'skip_hash_check' => 0,
        'bundle' => 'feed_item',
      ),
    ),
    'content_type' => 'facebook_feed',
    'update' => 0,
    'import_period' => '3600',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 0,
  );
  $export['facebook_feed'] = $feeds_importer;

  return $export;
}
