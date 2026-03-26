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


    // Logical Operators 
    cout << "===== Logical Operators =====" << endl;  

    cout << "Logical AND (&&)" << endl; 
    cout << " 0 AND 0 : " << (0 && 0) << endl; 
    cout << " 0 AND 1 : " << (0 && 1) << endl; 
    cout << " 1 AND 0 : " << (1 && 0) << endl; 
    cout << " 1 AND 1 : " << (1 && 1) << endl; 

    cout << "Logical OR (||)" << endl; 
    cout << " 0 OR 0 : " << (0 || 0) << endl; 
    cout << " 0 OR 1 : " << (0 || 1) << endl; 
    cout << " 1 OR 0 : " << (1 || 0) << endl; 
    cout << " 1 OR 1 : " << (1 || 1) << endl; 
    
    cout << "Logical NOT (!)" << endl; 
    cout << "(NOT) true : " << !true << endl; 
    cout << "(NOT) false : " << !false << endl; 
    cout << "(NOT) 4 : " << !4 << endl;     // because 4 is a numeric value represents true so NOT operator showing opposite value, so it is false. 
    cout << "(NOT) 0 : " << !0 << endl;  


    // Bitwise Operators 
    cout << "===== Bitwise Operators =====" << endl; 
    cout << "Bitwise AND" << endl; 
    cout << " 2 & 3 -> " << (2&3) << endl;      // 2 = 010, 3 = 011; so 2 & 3 = 010 & 011 = 010 = 2 (result). 
    cout << " 4 & 5 -> " << (4&5) << endl;      // 4 = 100, 5 = 101; so 4 & 5 = 100 & 101 = 100 = 4 (result). 
    cout << " 1 & 4 -> " << (1&4) << endl;      // 1 = 001, 4 = 100; so 1 & 4 = 001 & 100 = 100 = 0 (result). 
    cout << " 1 & 5 -> " << (1&5) << endl;      // 1 = 001, 5 = 101; so 1 & 5 = 001 & 101 = 001 = 0 (result). 
    cout << "Bitwise OR" << endl; 
    cout << " 2 | 3 -> " << (2|3) << endl;      // 2 = 010, 3 = 011; so 2 | 3 = 010 | 011 = 011 = 3 (result). 
    cout << " 4 | 5 -> " << (4|5) << endl;      // 4 = 100, 5 = 101; so 4 | 5 = 100 | 101 = 101 = 5 (result). 
    cout << " 1 | 4 -> " << (1|4) << endl;      // 1 = 001, 4 = 100; so 1 | 4 = 001 | 001 = 100 = 5 (result). 
    cout << " 1 | 5 -> " << (1|5) << endl;      // 1 = 001, 5 = 101; so 1 | 5 = 001 | 101 = 101 = 5 (result).  
    cout << "Bitwise XOR" << endl; 
    cout << " 0 ^ 0 -> " << (0^0) << endl;    
    cout << " 0 ^ 1 -> " << (0^1) << endl;      
    cout << " 1 ^ 0 -> " << (1^0) << endl;       
    cout << " 1 ^ 1 -> " << (1^1) << endl; 
    cout << "Left Shift" << endl;   // formula: value << n = value * (2 to the power n)
    cout << "1 << 2 -> " << (1<<2) << endl;     // 1 = 0001, so left shift by 2 means it is '0100' so it is 4. 
    cout << "Right shift" << endl;  // formula: value >> n = value / (2 to the power n)
    cout << "1 >> 2 -> " << (1>>2) << endl;     // 1 = 0001, so right shift by 2 means it is '0000' so it is 0. 
    cout << "One's complement" << endl; 
    cout << "~(4) -> " << ~(4) << endl;
    

    // Assignment Operator 


    return 0; 
}
