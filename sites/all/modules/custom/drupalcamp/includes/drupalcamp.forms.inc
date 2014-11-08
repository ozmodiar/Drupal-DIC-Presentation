<?php

function drupalcamp_example_form($form, &$form_state) {
  return DIC::service('drupalcamp.example_form')->buildForm($form, $form_state);
}

function drupalcamp_example_form_validate($form, &$form_state) {
  DIC::service('drupalcamp.example_form')->validateForm($form, $form_state);
}

function drupalcamp_example_form_submit($form, &$form_state) {
  DIC::service('drupalcamp.example_form')->submitForm($form, $form_state);
}

