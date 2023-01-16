// Scalar variable --> having magnitude
// Array --> collection of simmilar data items | having dimension
// when array is declared if it is not intialized then garbage value is stored
// declaration --> garbage values intialization not start
// int A[5];

// declaration + intialization
// int A[5] = {1, 2, 3, 4, 5};

// declaration + intialization --> remaining are '0'
// not garbage because intialization start
// int A[5] = {1, 2};

// declaration + intialization --> array size will be same as element list
// int A[] = {1, 2, 3, 4, 5};

#include <iostream>
#include <stdio.h>

using namespace std;
int main()
{
    int A[] = {1, 2, 3, 4, 5};

    // Traversing in array
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", A[i]);
        printf("%d ", i[A]);
        printf("%d", *(A + i));
        cout << endl;
    }
}

// in progam we se variable to represent some data but the comiler convert it into machine code
// during execution the memory is allocated, this variable represent the addresss so basiclly the machine code referred this locaton to access the variable, not by the name
// the compiler has to convert name into address, but the address is known during execution, so how the compiler wil write down the address at compile time
// compiler convert variable name to the address
// int A[5] = {1, 2, 3, 4, 5}
// for 3rd element or i = 3, it uses
// Addr(A[3]) = Base Address + 3 * sizeof(int)
// or
// Addr(A[i]) = Base Address + i * sizeof(type(A[i]))
// or
// Addr(A[i]) = Lo + i * w, where w is size of datatype
// base address will be known at runtime and it is called data binding
