#include <iostream>
using namespace std;

volatile bool IsGreenLight = false; // volatile keyword is used to prevent the compiler from optimizing the code

void TrafficLight()
{
    while (!IsGreenLight)
    {
        cout << "The Traffic Light is Red ! Please Wait" << endl;
    }
    
    cout << "The Traffic Light is Green ! You Can Go" << endl;
}

int main()
{
    // write your code here
    // IsGreenLight = false;
    TrafficLight(); 

    return 0;
}