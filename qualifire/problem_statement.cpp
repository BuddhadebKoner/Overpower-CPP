#include <iostream>
using namespace std;


int LifeMario(){
    int Life = 3;
    Life = Life + 1;

    return Life;
}

int main()
{
    // write your code here
    int Life = 3;
    cout << "The Life Of mario is\t" << Life ;
    Life = LifeMario();
    cout << "\nThe Updated Life Of mario is\t" << Life; // 4
    Life = LifeMario();
    cout << "\nThe Updated Life Of mario is\t" << Life << endl; // 4

    // According to my use case every time the life of mario should be 4,
    // Because of function exicute with fresh memory every time.

    // Solution --> static.cpp 

    
    return 0;
}