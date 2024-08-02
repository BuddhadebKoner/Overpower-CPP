#include <iostream>
using namespace std;

// Base class definition
class Base
{
private:
    int privateData; // Private member variable
protected:
    int protectedData; // Protected member variable
public:
    Base() : privateData(10), protectedData(42) {} // Constructor initializing member variables

    friend void accessData(Base &b); // Grant access to the friend function
};

// Friend function definition
void accessData(Base &b)
{
    // The friend function can access private and protected members
    cout << "Private data: " << b.privateData << endl;
    cout << "Protected data: " << b.protectedData << endl;
}

int main()
{
    Base obj;        
    accessData(obj);
    return 0;
}
