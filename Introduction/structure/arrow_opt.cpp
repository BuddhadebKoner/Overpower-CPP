#include <iostream>
using namespace std;

struct User
{
    const int uId;
    const char *name;
    const char *email;
    int course_count;
};

int main()
{
    // write your code here

    User rahul = {001, "Rahul", "rahul@google.com", 2};
    User Buddha = {002, "Buddha", "Buddha@microsoft.com", 10};

    User *p = &rahul;
    cout << rahul.email << endl;

    p->course_count = 3; // arrow operator can be used with pointer
    // p.course_count = 4; // dot operator can't be used with pointer

    return 0;
}