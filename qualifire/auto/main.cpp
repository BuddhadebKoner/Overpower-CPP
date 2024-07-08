#include <iostream>
using namespace std;

string api_call()
{
    return "This is big data From web API";
}

int another_api_call()
{
    return 100;
}

int main()
{
    // write your code here
    auto data = api_call(); // here auto is not data type, it is a keyword to get the data type from the right side of the expression
    auto data2 = another_api_call();

    cout << "Api Value is " << data << endl;
    cout << "Another Api Value is " << data2 << endl;


    if (typeid(data) == typeid(string))
    {
        puts("Data is string");
    }

    if (typeid(data2) == typeid(int))
    {
        puts("Data is int");
    }

    return 0;
}