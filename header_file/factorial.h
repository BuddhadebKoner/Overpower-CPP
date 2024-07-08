// this is a header file factorial function

#ifndef FACTORIAL_H
#define FACTORIAL_H

int Factorial(int n)
{
    if (n == 0)
    {
        return 1;
    }
    else
    {
        return n * Factorial(n - 1);
    }
}

#endif
