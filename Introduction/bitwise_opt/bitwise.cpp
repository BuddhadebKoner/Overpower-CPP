#include <iostream>
using namespace std;

int main()
{
    // bitwise operator with real life example
    unsigned int x = 20; // in binary 20 = 0001 0100
    unsigned int y = 30; // in binary 30 = 0001 1110

    unsigned z = x & y;  // 0001 0100 & 0001 1110 = 0001 0100
    unsigned z1 = x | y; // 0001 0100 | 0001 1110 = 0001 1110
    unsigned z2 = x ^ y; // 0001 0100 ^ 0001 1110 = 0000 1010
    unsigned z3 = ~x;    // ~0001 0100 = 1110 1011

    cout << "x & y = " << z << endl;
    cout << "x | y = " << z1 << endl;
    cout << "x ^ y = " << z2 << endl;
    cout << "~x = " << z3 << endl;

    return 0;
}