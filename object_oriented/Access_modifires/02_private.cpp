// Created by @BuddhadebKoner on 02/08/2024.
// This is a simple example illustrating the use of private access specifier in C++.

#include <iostream> 
using namespace std;

class Circle
{
   // private access specifier
private:
   double redius; // This is a private member variable. It can only be accessed within the Circle class.

   // public access specifier
public:
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
   
   // Attempt to access and modify the private member 'redius'
   // This line will cause a compilation error because 'redius' is private.
   // obj.redius = 90; // Error: 'double Circle::redius' is private within this context

   // Instead, we should provide public methods to set and get the private variable 'redius'.
   // For example:
   // void set_radius(double r) { redius = r; }
   // double get_radius() const { return redius; }

   double area = obj.calculate_area(); // Call the public method to calculate the area (circumference in this case)
   cout << "Area is :" << area << "\n";

   return 0; 
}
