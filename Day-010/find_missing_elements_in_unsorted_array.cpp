#include <iostream>
#include <stdio.h>

using namespace std;

void missing(int A[], int n, int m)
{
    int H[m + 1] = {0};

    for (int i = 0; i < n; i++)
    {
        H[A[i]]++;
    }

    for (int i = 0; i < m + 1; i++)
    {
        if (H[i] == 0)
            printf("%d\n", i);
    }
}

int find_max(int A[], int n)
{
    int max = 0;
    for (int i = 0; i < n; i++)
    {
        if (max < A[i])
            max = A[i];
    }
    return max;
}

int main()
{
    int n;
    printf("Enter array length ");
    cin >> n;

    int A[n];
    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
    }

    int max = find_max(A, n);
    cout << "max value in array is " << max << endl;
    missing(A, n, max);
}
