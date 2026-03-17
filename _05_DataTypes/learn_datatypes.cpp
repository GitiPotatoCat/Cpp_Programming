#include<iostream> 
#include<string>
using namespace std; 


int main() {
    /* Basic Datatypes */ 
    int var = 10; 
    cout << var << endl; 

    char c = 'A'; 
    cout << c << endl; 

    float price = 12.29f; 
    cout << price << endl; 

    double weight = 26.889; 
    cout << weight << endl; 

    bool isValid = true; 
    cout << isValid << endl; 


    cout << "Data Type Conversion" << endl; 
    int n = 3; 
    char charVar = 'A'; 
    cout << (int)charVar << endl; 
    
    
    cout << "Size of DataTypes" << endl; 
    cout << "int size: " << sizeof(int) << "bytes" << endl; 
    cout << "float size: " << sizeof(float) << "bytes" << endl; 
    cout << "double size: " << sizeof(double) << "bytes" << endl; 
    cout << "bool size: " << sizeof(bool) << "bytes" << endl; 
    cout << "char size: " << sizeof(char) << "bytes" << endl; 
    cout << "string size: " << sizeof(string) << "bytes" << endl; 
    cout << "unsigned int: " << sizeof(unsigned int) << "bytes" << endl; 
    cout << "signed int: " << sizeof(signed int) << "bytes" << endl; 
    
    /* Derived Datatypes */ 


    /* User-defined datatypes */ 

    return 0; 
}