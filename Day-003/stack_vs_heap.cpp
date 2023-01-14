// Memory --> memory is divided into small addressable unit called bytes
// So memory is divided into bytes, each have its own address

// memory is divided into manageable pieces called as segments
// program divided the main memory into three parts - stack, heap and code section

// static memory allocation --> memory required is decided at complie time
// int a and float b;
// allocated "2 bytes"(for 32 bit compiler) for integer and "4 bytes" for float

#include <iostream>
#include <stdio.h>

using namespace std;

void func1()
{
    func2();
}

void func2()
{
}

int main()
{
    int a;
    float b;
    func1();
}

// for this function in stack

// |---------------------|
// |    func2()          |
// |---------------------|
// |    func1()          |    <------ this is stack
// |---------------------|
// |    a , b            |
// |---------------------|

// when fun2 terminated then it removed from stack and control goes to fun1

// Heap Memory --> unorganised memory when required take the momory,
// when don't required release the momory
// programs can not access heap momory directly but access using pointer
// pointer size depends of its datatype, get allocate in stack
// p = new int[] --> momory will allocated in heap
// p = (int *)malloc(5 * sizeof(int))

// for deallocation of memory
// p = NULL or delete []p
// if it not been deallocated then it wiil used by program
// casuse loss of memory
