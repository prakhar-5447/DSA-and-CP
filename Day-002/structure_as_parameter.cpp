#include <iostream>
#include <stdio.h>

using namespace std;

struct Rectangle
{
    int length;
    int breadth;
};

struct Array_struct
{
    int A[5];
    int n;
};

int area(struct Rectangle R)
{
    R.length++;
    int area = R.length * R.breadth;
    return area;
}

int area_with_reference(struct Rectangle &R)
{
    R.length++;
    int area = R.length * R.breadth;
    return area;
}

void change_length(struct Rectangle *R, int n)
{
    R->length = n;
}

void func(struct Array_struct T)
{
    for (int i = 0; i < 5; i++)
    {
        cin >> T.A[i];
    }
}

int main()
{
    // call by value --> doesn't change the value of original structure
    struct Rectangle r1 = {10, 5};
    cout << "length before the function is " << r1.length << endl;
    printf("area = %d\n", area(r1));
    cout << "length after the function is " << r1.length << endl;
    cout << endl;

    // call by reference --> chang evalue from function in actual structure
    struct Rectangle r2 = {10, 5};
    cout << "length before the function is " << r2.length << endl;
    printf("area = %d\n", area_with_reference(r2));
    cout << "length after the function is " << r2.length << endl;

    // call by address
    struct Rectangle r3 = {10, 5};
    int n;
    cout << "Enter new length ";
    cin >> n;
    change_length(&r3, n);
    cout << "length of Rectangle = " << r3.length << endl;

    // array are only call by address (not as call by value)
    // and structure can be send as call by value
    // so if structure as array then it send as call by value
    // as it call by value so not change in original structure
    struct Array_struct a = {{1, 2, 3, 4, 5}, 5};
    func(a);
    for (int i = 0; i < 5; i++)
    {
        cout << a.A[i] << " ";
    }
}
