# Demo 4 - Container

**The Drupal core code is left out of this repository to put the focus fully on the important files.**

- In this branch, we have used our DIC module for Symfony Dependency Injection Container integration. This module allows us to create a drupalcamp.services.yml in our module where we can define all the classes of our module as services. These services can then be asked from our Container using the DIC static class.
- The drupalcamp module now leverages the DIC module instead of just instantiating classes on its own.
- This DIC static class resembles the Drupal class in Drupal 8.
- The Symfony libraries we needed to do this now live in the sites/all/libraries folder.