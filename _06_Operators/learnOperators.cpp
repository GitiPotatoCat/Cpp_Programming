#include<iostream> 
using namespace std; 


int main() 
{
    // Arithmetic Operators 
    int a = 20, b = 5; 

    cout << "===== Arithmetic Operators =====" << endl; 
    cout << "Addition of 20 and 5: " << (a+b) << endl; 
    cout << "Substraction of 20 and 5: " << (a-b) << endl; 
    cout << "Multiplication of 20 and 5: " << (a*b) << endl; 
    cout << "Division of 20 and 5: " << (a/b) << endl; 
    cout << "Modulo of 20 and 5: " << (a%b) << endl; 

    cout << "Pre-Increment Decrement Operator" << endl; 
    int preNum = 10; 
    cout << "preNum: " << preNum << endl; 
    cout << "++preNum: " << ++preNum << endl; 
    cout << "preNum: " << preNum << endl; 
    cout << "--preNum: " << --preNum << endl; 
    cout << "preNum: " << preNum << endl; 

    cout << "Post-Increment Decrement Operator" << endl; 
    int numPost = 12; 
    cout << "numPost: " << numPost << endl; 
    cout << "numPost++: " << numPost++ << endl; 
    cout << "numPost: " << numPost << endl; 
    cout << "numPost--: " << numPost-- << endl; 
    cout << "numPost: " << numPost << endl; 


    // Relational Operators 
    int c = 9, d = 15; 

    cout << "===== Relational Operators =====" << endl; 
    printf("%d == %d -> %d\n", c, d, (c == d)); 
    printf("%d != %d -> %d\n", c, d, (c != d)); 
    printf("%d > %d -> %d\n", c, d, (c > d)); 
    printf("%d >= %d -> %d\n", c, d, (c >= d)); 
    printf("%d < %d -> %d\n", c, d, (c < d)); 
    printf("%d <= %d -> %d\n", c, d, (c <= d)); 

    return 0; 
}
