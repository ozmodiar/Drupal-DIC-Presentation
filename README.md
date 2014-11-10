# Demo 2 - Object-Oriented module

**The Drupal core code is left out of this repository to put the focus fully on the important files.**

- In this branch we have extracted all of the functionality that has something to do with the example form to its own ExampleForm class. When creating the ExampleForm class, we tried to use the same function names as the ones used in Drupal 8 form classes.
- The logic that does the validation of the title now lives in its own TitleValidator class.
- The xautoload module is now installed to do the PSR-4 autoloading.
- The .module and .inc files cannot hold any business logic anymore. They act as controllers, and controllers only.