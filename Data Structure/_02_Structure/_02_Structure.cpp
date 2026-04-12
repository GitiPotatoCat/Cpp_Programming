#include<iostream>
using namespace std; 

struct Card
{
    /* data */ 
    int face; 
    int shape; 
    int color;
}; 

int main() 
{
    struct Card deck[52]; 
    cout << sizeof(Card) << endl; 
    cout << sizeof(deck) << endl;

    return 0;
}
