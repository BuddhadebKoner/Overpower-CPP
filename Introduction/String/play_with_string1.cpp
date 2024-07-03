#include <iostream>
#include <string>
using namespace std;

int main()
{
    string my_color;
    cout << "Enter your Fev color: \n";
    getline(cin, my_color);
    cout << "hey " << my_color << " is my fav. too" << "\n";

    return 0;
}