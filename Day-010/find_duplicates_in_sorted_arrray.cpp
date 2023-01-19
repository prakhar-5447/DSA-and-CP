#include <iostream>
#include <stdio.h>

using namespace std;

void duplicate(int A[], int n)
{
    int lastDuplicate = 0;

    for (int i = 0; i < n; i++)
    {
        if (A[i] == A[i + 1] && A[i] != lastDuplicate)
        {
            printf("Duplicate element %d\n", A[i]);
            lastDuplicate = A[i];
        }
    }
    // Order of n
}

void duplicateCount(int A[], int n)
{
    int lastDuplicate = 0;

    for (int i = 0; i < n - 1; i++)
    {
        if (A[i] == A[i + 1])
        {
            int j = i;
            while (A[j] == A[i])
                j++;
            printf("Duplicate element %d appear %d times\n", A[i], j - i);
            i = j - 1;
        }
    }
    // Order of n
}

void duplicate_2(int A[], int n)
{
    int H[A[n - 1] + 1] = {0};

    for (int i = 0; i < n; i++)
    {
        H[A[i]]++;
    }

    for (int i = 0; i < A[n - 1]; i++)
    {
        if (H[i] > 1)
            printf("%d element appear %d times\n", i, H[i]);
    }
    // Order of n
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
    duplicateCount(A, n);

    duplicate_2(A, n);
}
