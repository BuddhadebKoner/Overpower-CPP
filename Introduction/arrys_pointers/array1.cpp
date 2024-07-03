#include <iostream>
using namespace std;

int main()
{
    int intarray[5] = {31, 54, 77, 52, 93};
    cout << intarray << endl; // prints the address of the first element

    *intarray = 95; // same as intarray[0] = 95;

    printf("value of ap: %d\n", intarray[0]);

    int *ap = intarray; // ap points to the first element of intarray
    ap++;               // ap points to the second element of intarray
    *ap = 88;           // same as intarray[1] = 88;    

    printf("value of ap: %d\n", intarray[1]);

    return 0;
}