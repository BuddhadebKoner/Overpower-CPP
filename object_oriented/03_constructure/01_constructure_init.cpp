#include <iostream>
using namespace std;

class Atm
{
public:
   Atm()
   {
      cout << "Atm is created" << endl;
   }
   void display()
   {
      cout << "Atm is displayed" << endl;
   }
};

int main()
{
   Atm atm;       // implicit call to the constructor
   atm.display(); // explicit call to the display function
   return 0;
}
