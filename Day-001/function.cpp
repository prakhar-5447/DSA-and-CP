// Function --> modules or procedure or lines of code that can be executed multiple times

#include <iostream>
#include <stdio.h>

using namespace std;

// prototype of function
int add(int a, int b) // formal parameters
{
    int c;
    c = a + b;
    return c;
}

void swap(int *x, int *y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

void swap_value(int x, int y)
{
    int temp;
    temp = x;
    x = y;
    y = temp;
}

int main()
{
    int a, b;
    cin >> a >> b;

    // function call
    cout << "a = " << a << " and b = " << b << endl; // "a" and "b" are actual parameters
    swap(a, b);
    cout << "a = " << a << " and b = " << b << endl; // "a" and "b" are actual parameters

    int c, d;
    cin >> c >> d;
    cout << "swapping by values" << endl;
    cout << "c = " << c << " and d= " << d << endl; // "a" and "b" are actual parameters
    swap_value(c, d);
    cout << "c = " << c << " and d= " << d << endl; // "a" and "b" are actual parameters
}
