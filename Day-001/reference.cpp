// Reference --> nickname given to a variable
// consume same memory

#include <iostream>

using namespace std;

struct Rectangle
{
    int length;  // 2 byte
    int breadth; // 2 byte
};

int main()
{
    int a = 10;
    int &r = a; // it is reference
    // it can be called as "a" and "r"

    cout << "a = " << a << endl;
    cout << "r = " << r << endl;
    r++;

    // both are increassed by 1
    cout << "a = " << a << endl;
    cout << "r = " << r << endl;

    struct Rectangle R = {10, 20};
    struct Rectangle *ptr = &R;

    cout
        << "Area of reactangle = "
        << (*ptr).length * (*ptr).breadth << endl;
    cout
        << "Area of reactangle = "
        << ptr->length * ptr->breadth << endl;

    // dynamically create structure
    struct Rectangle *ptr2;
    ptr2 = new Rectangle();
    ptr2->length = 10;
    ptr2->breadth = 20;
    cout << "length =" << ptr2->length << endl;
    cout << "breadth =" << ptr2->breadth << endl;
    // ptr2 = (struct Rectangle)malloc(sizeof(struct Rectangle));
}
