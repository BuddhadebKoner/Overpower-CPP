#include <iostream>
using namespace std;
// A parameterized constructor is a constructor that takes one or more arguments. Unlike the default constructor, which initializes data members with default values, the parameterized constructor allows you to initialize data members with specific values provided by the user at the time of object creation.

class Rectangle
{
   int width = 0;
   int height = 0;

public:
   //   Parameterized constructor
   Rectangle(int w, int h)
   {
      width = w;
      height = h;
   }
   void Display() // Method to display the width and height of the rectangle
   {
      cout << " Width: " << width << " Height: " << height << endl;
   }
};

int main()
{
   Rectangle reac1(10, 5); // Creating an object of the Rectangle class 
   Rectangle reac2(12, 8);

   reac1.Display(); 
   reac2.Display();

   return 0;
}