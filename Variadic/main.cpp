#include <iostream>
using namespace std;

/*
what is Variadic template?
Variadic template is a feature in C++ that allows us to write a function that can take any number of arguments of any type.
*/

template <typename T>
void func(T t)
{
   cout << "one func " << t << endl;
}
template <typename T, typename... Args>
void func(T t, Args... args)
{
   cout << "Two func " << t << endl;
   func(args...);
}

int main()
{
   string name = "Buddhadeb";
   func(name);
   func(10, 3, 12.23, "jeet");
   return 0;
}