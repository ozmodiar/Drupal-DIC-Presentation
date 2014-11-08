<?php

namespace Drupal\drupalcamp\Validator;

class TitleValidator {

  public function validate($title) {
    return strlen($title) < 5;
  }
}

