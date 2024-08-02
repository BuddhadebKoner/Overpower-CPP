// Created by @BuddhadebKoner on 02/08/2024.
// This is a simple example illustrating the use of the public access specifier in C++.

#include <iostream> 
using namespace std;

class Circle
{
// public access specifier
public:
   double redius; // This is a public member variable. It can be accessed and modified from outside the Circle class.

   // Member function to calculate the area of the circle
   double calculate_area()
   {
      // The formula used here is incorrect for the area of a circle.
      // It should be: return 3.14 * redius * redius;
      // Currently, it calculates the circumference.
      return 2 * 3.14 * redius; // This function computes and returns the circumference of the circle.
   }
};

int main()
{
   Circle obj; // Create an object of the Circle class

   // Access and modify the public member 'redius' directly
   obj.redius = 90; // No access restriction, 'redius' is public

   double area = obj.calculate_area(); // Call the public method to calculate the area (circumference in this case)
   cout << "Area is :" << area << "\n";

   return 0; 
}
