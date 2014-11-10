# Demo 5 - Composer

**The Drupal core code is left out of this repository to put the focus fully on the important files.**

In this branch we have introduced Composer. In the composer.json file that is living in the root of the Drupal installation, we have defined that we want our DIC module to be downloaded from [Packagist](https://packagist.org/packages/saga/dic-module).

The "installer-paths" section makes sure that if the package we have downloaded is a Drupal module, the package will be installed in the sites/all/modules/vendor folder in this case. If the package is not a Drupal module, it will be installed in the normal /vendor folder in the root of the Drupal installation.

We removed the xautoload module and use Composer now for autoloading the classes in the drupalcamp module (see the autoload section of the composer.json).

This way, the sites/all/libraries is now clean again, no Symfony components in version control.

The /vendor and sites/all/modules/vendor folders are included in version control for demonstration purposes. These folders should never be in version control in normal circumstances.