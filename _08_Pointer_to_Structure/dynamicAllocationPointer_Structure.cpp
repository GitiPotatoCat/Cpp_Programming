#include<iostream>
using namespace std;

struct Rectangle 
{
    int length;
    int breadth;
};


int main() 
{
    cout << "accessing object dynamic allocation" << endl;
    struct Rectangle *p;
    p = new Rectangle;
    

    p->length = 10, p->breadth = 6;

    cout << p->length << endl;
    cout << p->breadth << endl;


    // ------------------

    cout << "Accesing using Pointer" << endl;
    Rectangle rec2 = { 20, 16 };

    struct Rectangle *point2;
    point2 = &rec2;

    cout << point2->length << endl;
    cout << point2->breadth << endl;

    return 0;
}