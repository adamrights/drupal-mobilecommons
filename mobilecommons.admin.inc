<?php

/**
 * @file
 * Content administration and module settings UI.
 */

/**
 * System settings form for basic configurations settings
 */
function mobilecommons_config_form($form, &$form_state)  {

  $form['mobilecommons_api_auth_email'] = array(
    '#type' => 'textfield',
    '#title' => t('Email'),
    '#max_length' => 100,
    '#size' => 20,
    '#required' => TRUE,
    '#default_value' => variable_get('mobilecommons_api_auth_email', ''),
  );

  $form['mobilecommons_api_auth_password'] = array(
    '#type' => 'textfield',
    '#title' => t('Password'),
    '#max_length' => 100,
    '#size' => 20,
    '#required' => TRUE,
  );

  return system_settings_form($form);
}
