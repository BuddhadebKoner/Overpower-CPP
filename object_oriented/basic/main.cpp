#include <iostream>
#include <string.h>
#include "user.h" // include the header file

using namespace std;

void User::classMessage() { cout << "Hello " << name << endl; }
int User::getSecret() const { return _sceret; }

int main()
{

   User buddhadeb;
   buddhadeb.name = "buddhadeb";
   buddhadeb.classMessage();
   // buddhadeb.sceret = 21; // not accessable

   buddhadeb.setSecret(11);                             // setter method
   cout << "Secret: " << buddhadeb.getSecret() << endl; // getter method

   User Jeet;
   Jeet.name = "Jeet";
   Jeet.classMessage();

   return 0;
}