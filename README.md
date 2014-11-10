# Demo 3 - Dependency Injection

**The Drupal core code is left out of this repository to put the focus fully on the important files.**

One of the problems with the previous branch was the fact that if we wanted to change the classname of the TitleValidator class, we would have to change the ExampleForm class as well (because the TitleValidator was instantiated inside the ExampleForm class). This is where dependency injection comes in.

We created a getter and setter for the TitleValidator on the ExampleForm class and in the form validate function, we make sure we first set the TitleValidator we want, and then we call the actual validation function.

Inside the validateForm function of the ExampleForm class, we make sure we ask the class which TitleValidator is set, and we use it.