#include <iostream>
using namespace std;

int main()
{
    // will go to first catch
    // int call_api = 2;
    // will go to secound catch
    // float call_api = 2.1;
    // will go to last catch
    char call_api = 'b';

    try
    {
        cout << "Trying to use API value\n";
        cout << "did some testing\n";
        throw call_api;
        cout << "No code work after through\n"; // not exicuted
    }
    catch (int x)
    {
        cout << "data isinteger...\n";
    }
    catch (float f)
    {
        cout << "data isfloat...\n";
    }
    catch (...)
    {
        cout << "Somthing went wrong\n";
    }

    cout << "keep coding...\n";

    return 0;
}