#include <iostream>
using namespace std;

extern int BankBalance;   // Declaration of extern variable
extern int BalanceCheck(); // Declaration of extern function

int main()
{
    BankBalance = BalanceCheck();
    cout << "Your bank Balance is\t" << BankBalance << endl;
    return 0;
}

// Path: extern2.cpp