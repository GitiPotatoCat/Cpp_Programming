#include<iostream>
using namespace std;

int main()
{
    int a = 5;
    int &b = a;

    cout << "&a: " << &a << endl;
    cout << "&b: " << &b << endl;

    b = 15;
    cout << "======" << endl;
    cout << "&a: " << &a << endl;
    cout << "&b: " << &b << endl;

    b++;
    cout << "======" << endl;
    cout << "a: " << a << endl;
    cout << "&a: " << &a << endl;
    cout << "&b: " << &b << endl;

    a = 20; 
    cout << "======" << endl;
    cout << "b: " << b << endl;
    cout << "&b: " << b << endl;

    return 0;
}