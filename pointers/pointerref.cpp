#include <iostream>
using namespace std;

int main()
{
    int score = 200;
    int *myp = &score;

    printf("value of score: %d\n", score);
    // value of pointer is
    printf("value of pointer: %p\n", myp);

    int &another_score = score; //here another_score is a reference to score
    another_score = 400;

    printf("value of score: %d\n", score);
    printf("value of pointer: %p\n", myp);

    return 0;
}