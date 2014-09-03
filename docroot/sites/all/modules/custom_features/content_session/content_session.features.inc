<?php
/**
 * @file
 * content_session.features.inc
 */

/**
 * Implements hook_node_info().
 */
function content_session_node_info() {
  $items = array(
    'session' => array(
      'name' => t('Session'),
      'base' => 'node_content',
      'description' => t('Drupal camp cebu session contents'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
