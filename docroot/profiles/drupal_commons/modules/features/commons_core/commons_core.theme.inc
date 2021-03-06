<?php

/**
 * @file
 *   Theme callbacks for commons_core
 */

/**
 * Theme handler for user stats block
 */
function theme_commons_core_user_stats_block($data) {
  $content = '<ul>';
  foreach($data as $item) {
    $content .= '<li>' . $item . '</li>';
  }
  $content .= '</ul>';
  
  return $content;
}

/**
 * Theme handler for the Commons information block
 * 
 * This is used in the footer to link back to acquia.com
 */
function theme_commons_core_info_block() {
  $content = '';
  
  $content .= '<div id="acquia-footer-message">';

  $content .= '<a href="http://acquia.com/drupalcommons" title="Drupal Commons social business software">';
  $content .= theme('image', 'profiles/drupal_commons/images/commons_droplet.png', t('Drupal Commons social business software'), t('Drupal Commons social business software'));
  $content .= '</a>';
  $content .= '<span>';
  $content .= t('A !dc Community, powered by', array('!dc' => l(t('Drupal Commons'), 'http://acquia.com/drupalcommons', array('attributes' => array('title' => t('A Drupal Commons social business software')))))) . '&nbsp;';
  $content .= l(t('Acquia'), 'http://acquia.com', array('attributes' => array('title' => t('Acquia'))));
  $content .= '</span>';
  $content .= '</div>';
  
  $content .= '<div id="fusion-footer-message">';
  $content .= t('Theme by') . '&nbsp;';
  $content .= '<a href="http://www.topnotchthemes.com" title="Drupal Themes by TopNotchThemes">TopNotchThemes</a>';
  $content .= ', ' . t('powered by') . '&nbsp;';
  $content .= '<a href="http://fusiondrupalthemes.com" title="Premium Drupal themes powered by Fusion">Fusion</a>.';
  $content .= '</div>';
  
  return $content;
}

/**
 * Theme handler for the group members and managers block
 */
function theme_commons_core_group_members_block($managers, $members, $link) {
  $content = '';
  if ($managers) {
    $content .= '<div class="group-managers-label">' . t('Managers:') . '</div>';
    $content .= '<div class="group-managers">' . $managers . '</div>';
  }
  if ($members) {
    $content .= '<div class="group-members-label">' . t('Recent members:') . '</div>';
    $content .= '<div class="group-members">' . $members . '</div>';
  }
  if ($link) {
    $content .= '<div class="group-members-link">' . $link . '</div>';
  }
  return $content;
}
