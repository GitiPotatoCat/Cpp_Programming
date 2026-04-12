/* 
    Understanding Heap memory using 'Pointer'. 
*/

#include <iostream>
using namespace std;

int main()
{
    // Stack variable
    int a = 10;

    // Pointer variable (stored on stack)
    int* p = nullptr;

    // Allocate memory on HEAP
    p = new int;

    // Store value in heap memory
    *p = 20;

    cout << "Stack variable a value       : " << a << endl;
    cout << "Address of a (stack)         : " << &a << endl;

    cout << "\nHeap variable value (*p)     : " << *p << endl;
    cout << "Address stored in p (heap)   : " << p << endl;
    cout << "Address of pointer p (stack): " << &p << endl;

    // Free heap memory
    delete p;
    p = nullptr;

    return 0;
}