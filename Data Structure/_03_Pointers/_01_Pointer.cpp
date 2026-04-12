#include <iostream>
using namespace std;

int main() {
    int a = 10;          // Step 1: Declare an integer variable
    int* p;             // Step 2: Declare a pointer variable

    p = &a;             // Step 3: Assign address of 'a' to pointer 'p'

    cout << "Value of a: " << a << endl;             // Print value of a
    cout << "Address of a: " << &a << endl;          // Print address of a
    cout << "Pointer p holds address: " << p << endl; // Print value of p (address of a)
    cout << "Value pointed to by p: " << *p << endl; // Step 4: Dereference p to get value of a 

    return 0;
}