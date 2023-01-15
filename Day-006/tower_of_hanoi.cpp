// Tower of Hanoi --> Move the disc from source to destination tower with the help of an auxillary tower
// no larger disc kept over smaller

#include <iostream>
#include <stdio.h>

using namespace std;

void toh(int x, int A, int B, int C)
{
    if (x > 0)
    {
        toh(x - 1, A, C, B);
        printf("Move from %d to %d --> (%d,%d)\n", A, C, A, C);
        toh(x - 1, B, A, C);
    }
}
// Time - O(2^n)
// Space - O(n)

int main()
{
    int x = 0;
    printf("Enter no. ");
    cin >> x;
    toh(x, 1, 2, 3);
    cout << endl;
}