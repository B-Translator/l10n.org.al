<?php
/**
 * @file
 * bcl_sq_layout.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function bcl_sq_layout_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu_about:node/12.
  $menu_links['main-menu_about:node/2'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/12',
    'router_path' => 'node/%',
    'link_title' => 'About',
    'options' => array(
      'attributes' => array(
        'title' => 'About this website.',
      ),
      'identifier' => 'main-menu_about:node/2',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -44,
    'customized' => 1,
  );
  // Exported menu link: main-menu_contact:contact.
  $menu_links['main-menu_contact:contact'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'contact',
    'router_path' => 'contact',
    'link_title' => 'Contact',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_contact:contact',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -45,
    'customized' => 1,
  );
  // Exported menu link: main-menu_fjalort:vocabularies.
  $menu_links['main-menu_fjalort:vocabularies'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'vocabularies',
    'router_path' => 'vocabularies',
    'link_title' => 'Fjalorët',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_fjalort:vocabularies',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -46,
    'customized' => 1,
  );
  // Exported menu link: main-menu_home:<front>.
  $menu_links['main-menu_home:<front>'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Home',
    'options' => array(
      'identifier' => 'main-menu_home:<front>',
    ),
    'module' => 'menu',
    'hidden' => 1,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 0,
  );
  // Exported menu link: main-menu_prkthimet:translations/.
  $menu_links['main-menu_prkthimet:translations/'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'translations/',
    'router_path' => 'translations',
    'link_title' => 'Përkthimet',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_prkthimet:translations/',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
  );
  // Exported menu link: main-menu_projektet:btr/project.
  $menu_links['main-menu_projektet:btr/project'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'btr/project',
    'router_path' => 'btr/project',
    'link_title' => 'Projektet',
    'options' => array(
      'attributes' => array(
        'title' => 'Lista e projekteve',
      ),
      'identifier' => 'main-menu_projektet:btr/project',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('About');
  t('Contact');
  t('Fjalorët');
  t('Home');
  t('Projektet');
  t('Përkthimet');

  return $menu_links;
}
