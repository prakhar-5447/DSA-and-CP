#include <iostream>
#include <stdio.h>

using namespace std;

void duplicate(int A[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int count = 1;
        if (A[i] != -1)
        {
            for (int j = i + 1; j < n; j++)
            {
                if (A[j] == A[i])
                {
                    count++;
                    A[j] = -1;
                }
            }
            if (count > 1)
                printf("Duplicate element %d appear %d times\n", A[i], count);
        }
    }
    // Order of n^2
}

void duplicate_2(int A[], int n, int m)
{
    int H[m + 1] = {0};

    for (int i = 0; i < n; i++)
    {
        H[A[i]]++;
    }

    for (int i = 0; i < m + 1; i++)
    {
        if (H[i] > 1)
            printf("%d element appear %d times\n", i, H[i]);
    }
    // Order of n
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
    duplicate(A, n);

    int max = find_max(A, n);
    duplicate_2(A, n, max);
}
