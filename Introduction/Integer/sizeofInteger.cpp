#include <iostream>
using namespace std;

int main()
{
    // write your code here
    printf("size data types of normal int is %1d bits\n", sizeof(int) * 8);
    // here all integer types
    printf("size data types of short int is %1d bits\n", sizeof(short int) * 8);
    printf("size data types of long int is %1d bits\n", sizeof(long int) * 8);
    printf("size data types of long long int is %1d bits\n", sizeof(long long int) * 8);
    printf("size data types of unsigned int is %1d bits\n", sizeof(unsigned int) * 8);
    printf("size data types of unsigned short int is %1d bits\n", sizeof(unsigned short int) * 8);
    printf("size data types of unsigned long int is %1d bits\n", sizeof(unsigned long int) * 8);
    printf("size data types of unsigned long long int is %1d bits\n", sizeof(unsigned long long int) * 8);

    return 0;
}