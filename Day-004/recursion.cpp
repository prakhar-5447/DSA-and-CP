// Recursion --> function calling itself, directly or indirectly
// has some comdition for tetrmination

#include <iostream>
#include <stdio.h>

using namespace std;

void func1(int n)
{
    if (n > 0)
    {
        func1(n - 1); // calling the same function again
        printf("%d\n", n);
    }
}

int main()
{
    int x = 3;
    func1(x);
    func2(x);
}

// Recurion Tree
// func(3) --> func(2) --> func(1) --> func(0) --> terminated
//  |           |           |
//  |           |           |
//  --> 3       --> 2       --> 1

// output :-  3 2 1
// as it print the call the function

void func2(int n)
{
    if (n > 0)
    {
        func2(n - 1); // calling the same function again
        printf("%d\n", n);
    }
}

// Recurion Tree
// func(3) --> 3
//  |
//  |
//  --> func(2) --> 2
//  |
//  |
//  --> func(1) --> 1
//  |
//  |
//  --> func(0) --> terminated
// when it tis terminated then control goes to above block and print "1"

// output :-  1 2 3
// as it call function before the print function

int func(int n)
{
    int i, j = 0;
    if (n > 0)
    {
        i++;             // run at calling time --> ascending
        func(n - 1) * 2; // "* 2" operation perform at returning time
        j++;             // run at returning time --> descending
    }
}

//  recursion is also repeating statment like loops but differnece is
// recusion has two phase - Aascending and Descending
// whereas loops has only Ascending phase