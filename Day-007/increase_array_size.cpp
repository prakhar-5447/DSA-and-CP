#include <iostream>
#include <stdio.h>

using namespace std;
int main()
{
    // creating another array of bigger size
    int *p = new int[5];
    int *q = new int[10];

   // Intializing array
    for (int i = 0; i < 5; i++)
    {
        cin >> p[i];
    }

    // assign all values from array "p" to "q"
    for (int i = 0; i < 5; i++)
    {
        q[i] = p[i];
    }

    // delete array "p"
    delete[] p;

    // now point "p" to new array of larger size
    p = q;

    // and point "q" to NULL
    q = NULL;

    // Now, "p" array size is "10"
}