#include<iostream>
using namespace std; 


int main() 
{

    /* Primitive DataTypes */
    // Integer - int (4 bytes) 
    int a = 20; 

    // Character - char (1 byte) 
    char grade = 'A'; 

    // Boolean - bool (1 byte) 
    bool isBinary = true; 

    // Float - float (4 bytes) 
    float price = 99.5f; 

    // Double - double (8 bytes) 
    double weight = 65.75; 

    cout << "Integer: " << a << endl; 
    cout << "Grade (character): " << grade << endl; 
    cout << "Is Binary (Bool): " << isBinary << endl; 
    cout << "Price (float): " << price << endl; 
    cout << "Weight (double): " << weight << endl; 

    /* 
        Type Modifiers
    
        C++ lets you modify the size/range of data types: 
        Modifiers:

        short
        long
        signed
        unsigned 
    */ 
   short int si = 10;    // Smaller range 
   unsigned int ui = 50;    // Only +ve values 
   long long big = 999999;  // Larger range 
   
   cout << "Short Int: " << si << endl; 
   cout << "Unsigned Int: " << ui << endl; 
   cout << "Long Long Big: " << big << endl; 

   return 0;
}