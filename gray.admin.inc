<?php

/**
 * @file
 * Admin page callbacks for the gray module.
 */

/**
 * Form constructor for the gray settings form.
 */
function gray_style_enable_settings($form, &$form_state) {
  $form['gray_style_enable'] = array(
    '#type' => 'checkbox',
    '#title' => t('Enable Black-White-Gray Style'),
    '#default_value' => variable_get('gray_style_enable', FALSE),
    '#description' => t('Make the site into black-white-gray style for some unfortunately reasons, wish no one will use this module'),
  );
  return system_settings_form($form);
}
