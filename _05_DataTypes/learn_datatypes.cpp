#include<iostream> 
#include<string>
using namespace std; 


int main() 
{
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
    cout << "int8_t: " << sizeof(int8_t) << "bytes" << endl; 
    cout << "int16_t: " << sizeof(int16_t) << "bytes" << endl; 
    cout << "int32_t: " << sizeof(int32_t) << "bytes" << endl; 
    cout << "int64_t: " << sizeof(int64_t) << "bytes" << endl;
    cout << "float size: " << sizeof(float) << "bytes" << endl; 
    cout << "_Float16: " << sizeof(_Float16) << "bytes" << endl; 
    cout << "_Float32: " << sizeof(_Float32) << "bytes" << endl; 
    cout << "_Float32x: " << sizeof(_Float32x) << "bytes" << endl; 
    cout << "_Float64: " << sizeof(_Float64) << "bytes" << endl; 
    cout << "_Float64x: " << sizeof(_Float64x) << "bytes" << endl; 
    cout << "_float128: " << sizeof(__float128) << "bytes" << endl; 
    cout << "double size: " << sizeof(double) << "bytes" << endl; 
    cout << "bool size: " << sizeof(bool) << "bytes" << endl; 
    cout << "char size: " << sizeof(char) << "bytes" << endl; 
    cout << "string size: " << sizeof(string) << "bytes" << endl; 
    cout << "unsigned int: " << sizeof(unsigned int) << "bytes" << endl; 
    cout << "signed int: " << sizeof(signed int) << "bytes" << endl; 
    cout << "long: " << sizeof(long) << "bytes" << endl; 
    cout << "long long: " << sizeof(long long) << "bytes" << endl; 

    return 0; 
}