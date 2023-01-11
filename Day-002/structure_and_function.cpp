#include <iostream>
#include <stdio.h>

using namespace std;

struct Rectangle
{
    int length;
    int breadth;
};

void intialize(struct Rectangle *R)
{
    int l, b;
    cout << "Enter length and breadth ";
    cin >> l >> b;
    R->length = l;
    R->breadth = b;
}

int area(struct Rectangle R)
{
    int area = R.length * R.breadth;
    return area;
}

void change_length(struct Rectangle *R, int n)
{
    R->length = n;
}

int main()
{
    struct Rectangle r;

    // intializing sturcture
    intialize(&r);

    // calculate area
    printf("area = %d\n", area(r));

    // change length
    int n;
    cout << "Enter new length ";
    cin >> n;
    change_length(&r, n);
    printf("area after changing length = %d\n", area(r));
}
