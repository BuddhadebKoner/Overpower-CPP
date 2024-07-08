#include <iostream>
using namespace std;

// function prototype
void lifeUp(int life)
{
    ++life;
}

int main()
{
    int life = 42;

    // call by value
    lifeUp(life);

    cout << life << endl;

    return 0;
}