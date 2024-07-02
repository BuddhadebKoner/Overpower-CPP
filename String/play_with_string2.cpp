#include <iostream>
#include <string>
using namespace std;

int main()
{
    string my_name, my_title;
    cout << "Enter your name: \n";
    getline(cin, my_name);
    cout << "Enter your title: \n";
    getline(cin,my_title);
    cout << "Wellcome " << my_name << " " << my_title << "\n";

    return 0;
}