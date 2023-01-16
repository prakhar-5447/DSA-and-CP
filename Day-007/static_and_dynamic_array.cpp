#include <iostream>
#include <stdio.h>

using namespace std;
int main()
{
    // int n;
    // cin >> n;
    // int A[n];
    // In C++ we can decide size of array at runtime

    // creating an array inside heap
    // memory for variable will go inside stack
    int A[5], *p;

    // memory for "5" integers will be allocated inside heap
    // and p will be pointting to that address
    // "new" is used to get momory in heap
    p = new int[5];
    
    // Intializing array
    for (int i = 0; i < 5; i++)
    {
        cin >> p[i];
    }

    // for releasing the unused momory otherwise there will be memory leakage
    delete[] p;

    // above can be done using "malloc" in C
    // p = (int *)malloc(5 * sizeof(int));
    // allocate raw memory but for using it as interger we put (int *) --> simply type casting
    // In C
    // free(p);


    // Note :- once the array is created we cannot resize it in stack,
    //         but there is an alternative to resize array in heap
}