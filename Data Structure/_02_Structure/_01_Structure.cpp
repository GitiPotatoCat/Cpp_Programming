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
    Rectangle r; 
    r = { 10, 5 }; 
    cout << sizeof(r) << endl; 
    cout << r.length << endl; 
    cout << r.breadth << endl; 

    r.length = 12; 
    r.breadth = 6; 

    cout << r.length << endl; 
    cout << r.breadth << endl; 

    return 0;
}