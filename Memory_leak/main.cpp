#include <iostream>
using namespace std;

int main()
{
    // bad practice of memory allocation
    // int *myp;
    // myp = new int[10000];
    // cout << "Memory allocated" << endl;
    // delete myp;

    // using try and catch block to handle memory leak
    try
    {
        int *myp;
        myp = new int[100];
        cout << "Memory allocated" << endl;
        delete myp;
    }
    catch (...)
    {
        cout << "Memory allocation failed" << endl;
    }

    return 0;
}