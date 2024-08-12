#include <iostream>
using namespace std;
// A copy constructor is a special type of constructor used to create a new object as a copy of an existing object. It initializes a new object with the values of another object of the same class.

class Rectangle
{
public:
   int width = 0;
   int height = 0;

   // Parameterized constructor 
   Rectangle(int w, int h)
   {
      width = w;
      height = h;
   }

   // Copy constructor
   Rectangle(const Rectangle &rect)
   {
      width = rect.width;
      height = rect.height;
   }

   // display
   void Display()
   {
      cout << " Width: " << width << " Height: " << height << endl;
   }
};

int main()
{
   Rectangle reac1(10, 5);

   // Creating a new object reac2 using the copy constructor
   Rectangle reac2(reac1);

   reac1.Display();
   reac2.Display();

   return 0;
}