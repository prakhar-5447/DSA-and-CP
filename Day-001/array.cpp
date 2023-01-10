// Array --> collection of simmilar datatype

// Declaring an Array
// int A[5];
// if 'int' has 8 bytes then total size of array is 2 x 5 = 10 bytes

// Main memory divided into
// i) Heap
// ii) Stack
// iii) Code Section

// Initializing an Array
// int A[5]={1,2,3,4,5};

#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    // Declaration
    // Creating an array
    int A[5];

    // Accessing array elements
    A[0] = 0;
    A[1] = 1;
    A[2] = 2;
    A[3] = 3;
    A[4] = 4;

    // Declaration + Initialization
    int B[5] = {1, 2, 3, 4, 5};

    cout << "B[0] is " << B[0] << endl;
    printf("value of A[0] is %d\n", A[0]);

    // Size of Operator
    cout << "size of A is " << sizeof(B) << endl;

    // for (int i = 0; i < 5; i++)
    // {
    //     cout << A[i] << endl;
    // }

    // Anoter way to write for loop
    for (int x : A)
    {
        cout << x << " ";
    }

    // Intialize remaining value with 0
    int C[10] = {1, 2, 3, 4, 5, 6, 7, 8};

    // Automatic define its size
    int D[] = {1, 2, 3, 4, 5, 6, 7, 8};
}