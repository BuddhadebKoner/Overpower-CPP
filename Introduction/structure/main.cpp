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

    cout << rahul.email << endl;
    cout << Buddha.email << endl;

    rahul.course_count = 3; // we can change the value of course_count
    cout << rahul.course_count << endl;

    rahul.email = "rahul@apple.com"; // we can change the value of email , here memory location is constant not the value . const char *email;
    cout << rahul.email << endl;

    // rahul.uId = 003; // we can't change the value of uId

    return 0;
}