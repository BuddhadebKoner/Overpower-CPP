#include <iostream>
using namespace std;

// #define NULL 0

// Function to print integer values
void printValue(int a)
{
    printf("int value is : %d\n", a);
}

// Function to print double values
void printValue(double a)
{
    printf("double value is : %f\n", a);
}

// Function to print integer pointer values
void printValue(int *a)
{
    // Dereference the pointer to get the value it points to
    printf("int pointer value is : %d\n", *a);
}

int main()
{
    // int a = 50;
    // printValue(5); // Calls the printValue(int) function
    // printValue(5.5f); // Calls the printValue(double) function
    // printValue(&a); // Calls the printValue(int*) function with address of a

    // printValue(NULL); // Calls the printValue(int*) function with NULL

    // Calls the printValue(int*) function with nullptr, which is type-safe null pointer
    printValue(nullptr);

    return 0;
}
