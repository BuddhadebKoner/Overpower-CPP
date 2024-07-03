#include <iostream>
using namespace std;

int main()
{
    const int life = 42;
    // life = 43;   const int cannot be modified

    int card = 40;
    int mycard = card;
    // printf("card: %d\n", card);

    //  pointer
    int *myp;
    myp = &card;
    mycard = *myp; // pointer dereference

    printf("card: %d\n", mycard);
    printf("myp: %p\n", myp);

    return 0;
}