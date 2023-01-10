// Structure  --> collection of data members that aree related data members under one name (simmilar or dissimmilar type)
// User defined data types

#include <iostream>
#include <stdio.h>

using namespace std;

struct Rectangle
{
    int length;  // 2 byte
    int breadth; // 2 byte
};

// Example of Structure
// struct Complex
// {
//     int real;  // 2 byte
//     int img; // 2 byte
// };

struct Card
{
    int face;
    int shape;
    int color;
};

int main()
{
    // decalartion
    struct Rectangle R1; // 4 byte
    // decalartion + intialization
    struct Rectangle R2 = {10, 20}; // 4 byte

    // Define value
    R1.length = 10;
    R1.breadth = 20;
    cout << "Area of reactangle = "
         << R1.length * R1.breadth << endl;

    struct Card c;
    c.face = 1;
    c.shape = 0;
    c.color = 0;

    // OR
    // struct Card c={1,0,0};

    // for array of structures
    struct Card deck[52] =
        {{1, 0, 0},
         {2, 0, 0},
         {3, 0, 0}};

    // Access as array then struct
    cout << deck[0].face << endl;
}