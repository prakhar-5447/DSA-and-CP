// Pointer --> address variable that meant for storing the address of data (8 bytes)
// used to access resource that is outside of program, heap memory, parameter passing

#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
    int a = 10;
    int *p;
    p = &a; // now pointer "p" as address of a

    cout << "*p = " << *p << endl;
    cout << "p = " << p << endl; // print address of a

    int *q;
    // In C --> allocate in heap
    // p = (int *)malloc(5 * sizeof(int));
    //"sizeof" operator help to decide the size by the compiler

    p = new int[5];

    // Practice
    int t[5] = {1, 2, 3, 4, 5};
    int *r;
    r = t;

    // Access array elements
    for (int i = 0; i < 5; i++)
    {
        cout << p[i] << " ";
    }

    int *ptr;
    ptr = new int[5];
    ptr[0] = 0;
    ptr[1] = 1;
    ptr[2] = 2;
    ptr[3] = 3;
    ptr[4] = 4;

    // delete the dynamically allocation memory space
    delete[] ptr;
    free(ptr);
}
