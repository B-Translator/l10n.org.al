<?php
/**
 * @file
 * bcl_sq_content.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function bcl_sq_content_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function bcl_sq_content_node_info() {
  $items = array(
    'mass_contact' => array(
      'name' => t('Mass Contact message'),
      'base' => 'node_content',
      'description' => t('Archived copies of mass email messages sent from this site.'),
      'has_title' => '1',
      'title_label' => t('Subject'),
      'help' => '',
    ),
    'page' => array(
      'name' => t('Basic page'),
      'base' => 'node_content',
      'description' => t('Use <em>basic pages</em> for your static content, such as an \'About us\' page.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'simplenews' => array(
      'name' => t('Simplenews newsletter'),
      'base' => 'node_content',
      'description' => t('A newsletter issue to be sent to subscribed email addresses.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
