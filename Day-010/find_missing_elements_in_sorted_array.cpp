#include <iostream>
#include <stdio.h>

using namespace std;

void missing_1(int A[], int n)
{
    int sum = 0;

    for (int i = 0; i < n; i++)
    {
        sum += A[i];
    }

    int s = (n + 1) * (n + 1 + 1) / 2;
    cout << "Missing element is " << s - sum << endl;
}

void missing_2(int A[], int n)
{
    int diff = A[0] - 0;
    for (int i = 0; i < 10; i++)
    {
        if (A[i] - i != diff)
        {
            printf("Missing element %d\n", i + diff);
            break;
        }
    }
    // Order of (n)
}

void missing_3(int A[], int n)
{
    int diff = A[0] - 0;
    for (int i = 0; i < 11; i++)
    {
        if (A[i] - i != diff)
        {
            while (diff < A[i] - i)
            {
                printf("Missing element %d\n", i + diff);
                diff++;
            }
        }
    }
    // Order of (n)
}

int main()
{
    int n;
    printf("Enter array length ");
    cin >> n;

    // Sum of n natural numbers

    int A[n];
    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
    }
    missing_1(A, n);

    // Missing element forn an sorted array
    int B[] = {6, 7, 8, 9, 10, 11, 12, 14, 15, 16};
    missing_2(B, n);

    // Find Multiple Missing element forn an sorted array
    int C[] = {6, 7, 8, 9, 11, 12, 15, 16, 17, 18, 19};
    missing_3(C, n);
}
