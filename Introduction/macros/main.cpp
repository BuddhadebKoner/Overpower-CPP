#include <iostream>
#include <string>

/*
those all macros are not recommended to use, all are depends upon usecase
*/
#define END return 0
#define ENDMESSAGE cout << "Here is the end of the program" << endl

#define LCOINT int32_t
#define LCOCCPC const char *const

#define comsole_log(a) cout << a << endl

using namespace std;

int main()
{
   LCOINT a = 10;
   // cout << a << endl;

   string name = "John";
   // readable program than cout syntax
   comsole_log(name);

   ENDMESSAGE;

   END;
}