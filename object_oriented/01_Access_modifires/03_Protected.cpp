// Created by @BuddhadebKoner on 02/08/2024.
// This is a simple example about private access specifier in C++.

#include <iostream> 
using namespace std; 

class Clint // parent class
{
   // protected access specifier
protected:
   int your_id = 187; // Protected member variable 'your_id' that is accessible within this class and its derived classes
};

class Bank : public Clint // ":" This symbol is used to specify the inheritance mode.
{
public:
   // void set_id(int id) // Public member function to set the 'your_id' value
   // {
   //    your_id = id; // Set the value of 'your_id' (accessible here because 'Bank' inherits 'Clint' and 'your_id' is protected)
   // }

   void show_id() // Public member function to display the 'your_id' value
   {
      cout << "Your ID is :" << your_id << "\n"; 
   }
};

int main()
{
   Bank myBank;
   myBank.show_id(); 

   return 0; 
}
