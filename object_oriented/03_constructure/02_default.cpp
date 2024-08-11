#include <iostream>
using namespace std;
// A constructor without any arguments or with the default value for every argument is said to be the Default constructor.

class Rectangle
{
    int width = 0;
    int height = 0;

public:
    Rectangle() // default constructor, implicitly called
    {
        width = 0;
        height = 0;
    }

    void Display() // member function
    {
        cout << "Width: " << width << ", Height: " << height << endl;
    }
};

int main()
{
    Rectangle box;
    // here displaying the default values , but i never called the constructor it called automatically
    box.Display();

    return 0;
}