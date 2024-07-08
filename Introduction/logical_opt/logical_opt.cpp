#include <iostream>
using namespace std;

int main()
{
    // Real Life Examples of Logical AND
    cout << "Real Life Examples of Logical AND" << endl;
    bool isRaining = true;
    bool haveUmbrella = true;
    cout << "isRaining && haveUmbrella = " << (isRaining && haveUmbrella) << endl;

    bool isSunny = false;
    bool haveSunscreen = true;
    cout << "isSunny && haveSunscreen = " << (isSunny && haveSunscreen) << endl;

    // Real Life Examples of Logical OR
    cout << "Real Life Examples of Logical OR" << endl;
    bool isWeekend = true;
    bool havePlans = false;
    cout << "isWeekend || havePlans = " << (isWeekend || havePlans) << endl;

    bool isHoliday = false;
    bool haveVacation = true;
    cout << "isHoliday || haveVacation = " << (isHoliday || haveVacation) << endl;

    // Real Life Examples of Logical NOT
    cout << "Real Life Examples of Logical NOT" << endl;
    bool isLoggedIn = false;
    cout << "!isLoggedIn = " << !isLoggedIn << endl;

    bool isLocked = true;
    cout << "!isLocked = " << !isLocked << endl;

    
    return 0;
}