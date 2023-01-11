// Template --> used for generic programming
// we can use same class or function for different datatypes

#include <iostream>
#include <stdio.h>

using namespace std;

template <class T>
class Arithemetic
{
private:
    T a;
    T b;

public:
    Arithemetic(T n1, T n2)
    {
        a = n1;
        b = n2;
    }

    T add()
    {
        return a + b;
    }

    T sub()
    {
        return a - b;
    }

    T multiply()
    {
        return a * b;
    }

    T divide()
    {
        return a / b;
    }

    T modulo();
};

template <class T>
T Arithemetic<T>::modulo()
{
    return a % b;
}

int main()
{
    Arithemetic<int> r1(10, 5);
    cout << r1.multiply() << endl;

    // "7.5" converted to "int"
    Arithemetic<int> r2(7.5, 5);
    cout << r2.multiply() << endl;

    Arithemetic<float> r3(10.9, 5.2);
    cout << r3.multiply() << endl;
}
