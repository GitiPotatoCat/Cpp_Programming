#include<iostream>
using namespace std;


void swap(int &a, int &b) 
{
    cout << "&a: " << &a << endl;
    cout << "a: " << a << endl;
    cout << "&b: " << &b << endl;
    cout << "b: " << b << endl;

    int temp = a;
    a = b;
    b = temp;

    cout << "After Swapping" << endl;
    cout << "&a: " << &a << endl;
    cout << "a: " << a << endl;
    cout << "&b: " << &b << endl;
    cout << "b: " << b << endl;
}

int main() 
{
    int x = 10, y = 20;
    cout << "&x: " << &x << endl;
    cout << "&y: " << &y << endl;
    cout << "x: " << x << " y: " << y << endl;
    cout << "======" << endl;
    swap(x, y);

    return 0;
}