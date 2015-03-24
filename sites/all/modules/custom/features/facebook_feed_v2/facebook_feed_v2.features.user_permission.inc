<?php
/**
 * @file
 * facebook_feed_v2.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function facebook_feed_v2_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create facebook_feed content'.
  $permissions['create facebook_feed content'] = array(
    'name' => 'create facebook_feed content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'create feed content'.
  $permissions['create feed content'] = array(
    'name' => 'create feed content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'create feed_item content'.
  $permissions['create feed_item content'] = array(
    'name' => 'create feed_item content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete any facebook_feed content'.
  $permissions['delete any facebook_feed content'] = array(
    'name' => 'delete any facebook_feed content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete any feed content'.
  $permissions['delete any feed content'] = array(
    'name' => 'delete any feed content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete any feed_item content'.
  $permissions['delete any feed_item content'] = array(
    'name' => 'delete any feed_item content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own facebook_feed content'.
  $permissions['delete own facebook_feed content'] = array(
    'name' => 'delete own facebook_feed content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own feed content'.
  $permissions['delete own feed content'] = array(
    'name' => 'delete own feed content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own feed_item content'.
  $permissions['delete own feed_item content'] = array(
    'name' => 'delete own feed_item content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit any facebook_feed content'.
  $permissions['edit any facebook_feed content'] = array(
    'name' => 'edit any facebook_feed content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit any feed content'.
  $permissions['edit any feed content'] = array(
    'name' => 'edit any feed content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit any feed_item content'.
  $permissions['edit any feed_item content'] = array(
    'name' => 'edit any feed_item content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit own facebook_feed content'.
  $permissions['edit own facebook_feed content'] = array(
    'name' => 'edit own facebook_feed content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit own feed content'.
  $permissions['edit own feed content'] = array(
    'name' => 'edit own feed content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit own feed_item content'.
  $permissions['edit own feed_item content'] = array(
    'name' => 'edit own feed_item content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'tamper facebook_feed'.
  $permissions['tamper facebook_feed'] = array(
    'name' => 'tamper facebook_feed',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'feeds_tamper',
  );

  return $permissions;
}
