<?php

function drupalcamp_example_form($form, &$form_state) {
  $form['title'] = array(
    '#title' => t('Title'),
    '#type' => 'textfield',
    '#description' => t('It should be at least 5 characters long.'),
    '#size' => 30,
  );

  $form['submit'] = array(
    '#type' => 'submit',
    '#value' => t('Save')
  );

  return $form;
}

function drupalcamp_example_form_validate($form, &$form_state) {
  if (drupalcamp_validate_title($form_state['values']['title'])) {
    form_set_error('title', t('Title is too short!'));
  }
}

function drupalcamp_example_form_submit($form, &$form_state) {
  drupal_set_message(t('Form submission completed!'), 'status');
  $form_state['redirect'] = '<front>';
}

function drupalcamp_validate_title($title) {
  return strlen($title) < 5;
}
