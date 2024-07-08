#include <iostream>
using namespace std;

int main() {
    const int speedLimit = 65;
    cout << "The speed limit is " << speedLimit << " mph." << endl;
    // speedLimit = 70; // Error: cannot modify a const variable
    return 0;
}
