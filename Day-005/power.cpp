//               -------> 1 | n = 0
// pow(m,n)-----|
//               ------> fact(m,n -1) * m  | when n > 0

#include <iostream>
#include <stdio.h>

using namespace std;

// method - 1
// time - O(n)
// space - O(n)
int pow1(int m, int n)
{
    if (n == 0)
    {
        return 1;
    }
    if (n % 2 == 0)
    {

        return pow1(m * m, n / 2);
    }
    else
    {
        return m * pow1(m * m, n / 2);
    }
}

// method - 2
int pow2(int m, int n)
{
    if (n == 0)
    {
        return 1;
    }
    else
    {

        return pow2(m, n - 1) * m;
    }
}

int main()
{
    cout << pow1(2, 5) << endl;
    cout << pow2(2, 5) << endl;
}
