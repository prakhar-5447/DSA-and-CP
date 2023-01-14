// sum(n) = 1 + 2 + 3 + 4 + ........ + (n - 1) + n
// sum(n) = sum(n - 1) + n

//          -------> 0 | n = 0
// T(n)-----|
//          ------> T(n -1) + 2  | when n > 0

#include <iostream>
#include <stdio.h>

using namespace std;

int sum(int n)
{
    if (n == 0)
        return 0;
    else
        return sum(n - 1) + n;
}
// TIme and Space - O(n)

int main()
{
    int n = 0;
    printf("Enter a no. ");
    cin >> n;
    printf("sum of %d natural numbers is %d\n", n, sum(n));
}

// using formula for sum of n terms
int sum1(int n)
{
    return n * (n + 1) / 2;
}
// TIme - O(1)

// using loops
int sum2(int n)
{
    int s = 0;
    for (int i = 0; i <= 0; i++) // ----- n + 1
        s = s + i;               // ----- n
    return s;
}
// TIme - O(n)