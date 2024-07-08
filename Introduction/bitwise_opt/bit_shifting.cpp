#include <iostream>
using namespace std;

int main()
{
    // ">>" and ">>" operator 
    unsigned int x = 20; // in binary 20 = 0001 0100
    unsigned int y = 30; // in binary 30 = 0001 1110

    unsigned z = x << 1; // 0001 0100 << 1 = 0010 1000
    unsigned z1 = y >> 1; // 0001 1110 >> 1 = 0000 1111

    cout << "x << 1 = " << z << endl;
    cout << "y >> 1 = " << z1 << endl;
    
    return 0;
}