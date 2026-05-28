#include<iostream>
using namespace std;

int main() 
{
    int a = 10;
    int &r = a;

    cout << "a: " << a << endl;
    cout << "r: " << r << endl;
    cout << "&r: " << &r << endl;

    r++;

    cout << "a: " << a << endl;
    cout << "r: " << r << endl;
    cout << "&r: " << &r << endl;

    int b = 25;
    r = b;

    cout << "=========" << endl;
    cout << "a: " << a << endl;
    cout << "b: " << b << endl;
    cout << "r: " << r << endl;
    cout << "&r: " << &r << endl;

    b = 30;
    cout << "=========" << endl;
    cout << "b: " << b << endl;
    cout << "r: " << r << endl;
    cout << "&r: " << &r << endl;

    return 0;
}