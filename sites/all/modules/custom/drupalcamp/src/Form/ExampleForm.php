<?php
namespace Drupal\drupalcamp\Form;

use Drupal\drupalcamp\Validator\TitleValidator;

class ExampleForm {

  /**
   * @var TitleValidator
   */
  private $titleValidator;

  /**
   * @return TitleValidator
   */
  private function getTitleValidator() {
    return $this->titleValidator;
  }

  /**
   * @param TitleValidator $validator
   */
  public function setTitleValidator($validator) {
    $this->titleValidator = $validator;
  }

  public function buildMenu() {
    return array(
      'drupalcamp/example' => array(
        'title' => 'DrupalCamp Example Form',
        'description' => 'This page shows the DrupalCamp Example form.',
        'page callback' => 'drupal_get_form',
        'page arguments' => array('drupalcamp_example_form'),
        'access arguments' => array('access administration pages'),
        'weight' => 0,
        'file' => 'includes/drupalcamp.forms.inc',
      ),
    );
  }

  public function buildForm($form, &$form_state) {
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

  public function validateForm($form, &$form_state) {
    $title_validator = $this->getTitleValidator();
    if ($title_validator->validate($form_state['values']['title'])) {
      form_set_error('title', t('Title is too short!'));
    }
  }

  public function submitForm($form, &$form_state) {
    drupal_set_message(t('Form submission completed!'), 'status');
    $form_state['redirect'] = '<front>';
  }
}
