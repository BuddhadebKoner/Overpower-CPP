#include <iostream>
using namespace std;

// function prototype
void lifeUp1(int *marioLife)
{
    ++(*marioLife);
}

void lifeUp2(int &marioLife)
{
    ++marioLife;
}

int main()
{
    int life = 42;

    // call by reference
    lifeUp1(&life);
    // lifeUp2(life);

    cout << life << endl;

    return 0;
}