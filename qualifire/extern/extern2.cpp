#include <iostream>
using namespace std;

int BalanceCheck()
{
    int BankBalance = 6000; // Definition of extern variable

    return BankBalance;
}

// Need to complile g++ extern1.cpp extern2.cpp -o extern_example.out
// ./extern_example.out
// Your bank Balance is 6000
// Beacause the extern keyword is used to declare a variable or function in another file, so the compiler knows that the variable or function is defined in another file.