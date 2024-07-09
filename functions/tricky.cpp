#include <iostream>
using namespace std;

// function prototype
int addMe(int a, int b);
float addMe(float a, float b);

int main()
{
    // write your code here
    int v1 = 5;
    int v2 = 10;
    float v3 = 3.14;
    float v4 = 2.71;

    cout << addMe(v1, v2) << endl;
    cout << addMe(v3, v4) << endl;

    // this is possible only on c++ not in c
    // same name function but different parameter
    // this is called function overloading
    // the compiler will choose the right function to call
    // based on the parameter passed

    return 0;
}

// fot integer case
int addMe(int a, int b)
{
    return a + b;
}

// if the passing value is in float
float addMe(float a, float b)
{
    return a + b;
}