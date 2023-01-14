// Head Recursion --> if a recursive function calling itself, then it is recursive call
// and all the procession it has do afterwards after the recursive call,
// there is no statement before the recursive call
// doesn't have to process or perform any opration at the time of calling,
// it has dome at returning

#include <iostream>
#include <stdio.h>

using namespace std;

void func1(int n)
{
    if (n > 0)
    {
        func1(n - 1); // calling the same and no operation is at the time of calling
        printf("%d\n", n);
    }
}

// comparing with loops
// head recusion can be converted into loops
void func2(int n)
{
    int i = 0;
    while (i <= n)
    {
        printf("%d\n", i);
        i++;
        ;
    }
}