// Class --> user defined datatype with data members and some functions
// blueprint for an object

// MONOLITHIC and MODULAR Program -->
// if everything is inside the main function then the program is monolithic program

// if program is too large and difficult to understand
// then some part of program is defined using function
// or divided into functions, so it is called as modular program

#include <iostream>
#include <stdio.h>

using namespace std;

class Rectangle
{
private:
    int length;
    int breadth;

public:
    // default constructor --> no parameter
    // for using parameterized constructor, we must declare default constructor
    Rectangle()
    {
    }

    // parameterized constructor
    Rectangle(int l, int b)
    {
        length = l;
        breadth = b;
    }

    // copy constructor
    Rectangle(Rectangle &r)
    {
        length = r.length;
        breadth = r.breadth;
    }

    void intialize(int l, int b)
    {
        length = l;
        breadth = b;
    }

    int area()
    {
        int area = length * breadth;
        return area;
    }

    void change_length(int n)
    {
        length = n;
    }

    ~Rectangle()
    {
        // destructor --> to destroy or release same allocated dynamically
    }
};

class Test
{
private:
    int x;

public:
    Test();
    void display();
};

Test::Test()
{
    x = 10;
}

void Test::display()
{
    cout << "value of x = " << x << endl;
}

int main()
{
    Rectangle r1;

    // intializing
    r1.intialize(10, 5);

    // calculate area
    printf("area = %d\n", r1.area());

    // change length
    int n;
    cout << "Enter new length ";
    cin >> n;
    r1.change_length(n);
    printf("area after changing length = %d\n", r1.area());

    // intializing using constructor
    Rectangle r2(10, 5);

    // calculate area
    printf("Intializatizing using constructor");
    printf("area = %d\n", r2.area());

    Rectangle r3(r2);
    cout << r3.area() << endl;
    cout << "assigned value using copy constructor" << endl;


    cout << "declaring function outside of class" << endl;
    Test T;
    T.display();
}
