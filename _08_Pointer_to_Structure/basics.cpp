#include<iostream>
using namespace std;


struct Rectangle
{
    /* data */
    int length;
    int breadth;
};


int main() 
{
    Rectangle r = {10,5};
    cout << "Using variable to access struct" << endl;
    cout << r.length << endl;
    cout << r.breadth << endl;

    cout << "======" << endl;

    Rectangle *p = &r;
    cout << "Using pointer to access struct" << endl;
    cout << p->length << endl;
    cout << p->breadth << endl;
}