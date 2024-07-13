#include <iostream>
using namespace std;

class Phone
{
   string _name = "";
   string _os = "";
   int _price = 0;

public:
   Phone();                                        // default constracture
   // Phone(string &name, string &os, int &price); // parameterized constracture
   // Phone(Phone &);                              // copy constracture
   // string getName() { return _os; }             // getter
   // ~Phone();                                    // destracture
};

Phone::Phone(): _name(), _os(), _price() {
   puts("Default constracture called");
}

int main()
{
   Phone samsung;


   return 0;
}