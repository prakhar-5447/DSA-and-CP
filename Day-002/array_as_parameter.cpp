#include <iostream>
#include <stdio.h>

using namespace std;

void func_1(int A[], int n) // we can write "*A" in place of "A[]"
{
    for (int i = 0; i < n; i++)
    {
        cout << A[i] << " ";
    }
    cout << endl;

    // Modifying array elements
    A[0] = 7;
}

// function returnting array using pointer
int *func_2(int n)
{
    int *ptr;
    ptr = new int[n];
    return ptr;
}

int main()
{
    int A[5] = {1, 2, 3, 4, 5};

    // array passing as parameter
    func_1(A, 5);

    // creating array using pointer
    int *B;
    B = func_2(5);

    // inserting values
    for (int x = 0; x < 5; x++)
    {
        cin >> B[x];
    }

    // printing values
    for (int x = 0; x < 5; x++)
    {
        cout << B[x] << " ";
    }
}