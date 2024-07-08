#include <iostream>
using namespace std;

// According to problem_statement.cpp, here the solution

int LifeMario()
{
    static int Life = 3; // static keyword is used to retain the value of the variable in the memory

    return ++Life;
}

int main()
{
    // write your code here
    int Life = 3;
    cout << "The Life Of mario is\t" << Life;
    Life = LifeMario();
    cout << "\nThe Updated Life Of mario is\t" << Life; // 4
    Life = LifeMario();
    cout << "\nThe Updated Life Of mario is\t" << Life << endl; // 5

    // now the value of Life is retained in the memory and it is not initialized to 3 every time the function is called

    return 0;
}