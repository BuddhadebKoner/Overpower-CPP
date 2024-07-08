#include <iostream>
using namespace std;

struct User
{
   const int id;
   int age;

   User() : id(001), age(0) {}
};

int main()
{
   // Stack memory allocation
   int a = 10;
   User jeet;

   // Heap memory allocation
   int *heap_score = new int;
   *heap_score = 100;

   User *buddha = new User();

   // delete heap memory
   delete heap_score;
   delete buddha;

   return 0;
}