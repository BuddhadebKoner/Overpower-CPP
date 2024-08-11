#include <iostream>
using namespace std;

class Atm
{
public:
   void display();
};

void Atm ::display() // scope resolution operator
{
   cout << "Atm is displayed" << endl;
} // here deffination of the function is outside the class

int main()
{
   Atm atm;
   atm.display();

   return 0;
}