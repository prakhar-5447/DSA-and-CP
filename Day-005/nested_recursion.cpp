// Nested Recursion -->  recursiove function pass a parameter as a recursive call

#include <iostream>
#include <stdio.h>

using namespace std;

int func(int n)
{
    if (n > 100)
        return n - 10;
    else
        return func(func(n + 11));
}

// for fun(95)

// func(95) ---> func(func(95 + 11))
//               that become func(func(106)) ---> func(96) --->func(func(96 + 11))
//               and func(106) returns 96                       and same will repeat again and again