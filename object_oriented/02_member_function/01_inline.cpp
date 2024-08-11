#include <iostream>
using namespace std;

class Atm
{
public:
   // inline function
   void display()
   {
      cout << "Atm is displayed" << endl;
   } // deffination of the function is inside the class
};

int main()
{
   Atm atm;
   atm.display();

   return 0;
}