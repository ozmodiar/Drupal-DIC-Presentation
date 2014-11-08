<?php

function drupalcamp_example_form($form, &$form_state) {
  $example_form = new \Drupal\drupalcamp\Form\ExampleForm();
  return $example_form->buildForm($form, $form_state);
}

function drupalcamp_example_form_validate($form, &$form_state) {
  $example_form = new \Drupal\drupalcamp\Form\ExampleForm();
  $example_form->validateForm($form, $form_state);
}

function drupalcamp_example_form_submit($form, &$form_state) {
  $example_form = new \Drupal\drupalcamp\Form\ExampleForm();
  $example_form->submitForm($form, $form_state);
}

