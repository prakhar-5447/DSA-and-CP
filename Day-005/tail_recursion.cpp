// Tail Recursion --> if a recursive function calling itself, then it is recursive call
// and that call is last statement in function then it is known as tail recusion
//  after call there is nothing, all operation perform at call time not at returning time

#include <iostream>
#include <stdio.h>

using namespace std;

void func1(int n)
{
    if (n > 0)
    {
        printf("%d\n", n);
        func1(n - 1); // calling the same and no operation is remain for returning time
    }
}

// comparing with loops
// tail recusion can be easily converted into loops
void func2(int n)
{
    while (n > 0)
    {
        printf("%d\n", n);
        n--;
    }
}

// analyzing
// time taken by both is same [ O(n) ]
// but space will be different

// recursive function utilizes space for "n" it will create "n + 1" activation records
// O(n)

// for loops it will craate only one activation record
// O(1)

// so instead of tail recusion you can write loop statement that is more efficient in terms of space
// but it is not true for every type of recursion, only for tail recursion