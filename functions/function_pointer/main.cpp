#include <iostream>
using namespace std;

void iamFunction()
{
    puts("Hello Buddhadeb i am function");
}

int main()
{
    // iamFunction(); // normal function execution
    // function pointer
    void (*functionPointer)() = iamFunction;
    
    functionPointer();    // function pointer execution
    (*functionPointer)(); // another way to execute function pointer

    return 0;
}
