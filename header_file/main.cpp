#include <iostream>
#include "factorial.h"  // factorial.h is included here

using namespace std;

int main()
{
    int n;
    cout << "Enter a positive integer: ";
    cin >> n;
    cout << "Factorial of " << n << " = " << Factorial(n) << endl;

    return 0;
}