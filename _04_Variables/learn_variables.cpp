#include<iostream> 

/*
     ---------- Global variable (scope demo) ----------
     Global variables exist for the program lifetime and are accessible anywhere
     after their point of definition. 
*/
int g_counter = 1; 

using namespace std; 

void printGlobal() 
{
    cout << "[print global] g_counter: " << g_counter << endl; 
}


int main() 
{
    cout << "C++ Variables: Declaration, Initialization, Rules & Scope " << endl; 
    
    int num = 3; 
    cout << "num (after init) = " << num << endl; 

    num = 7; 
    cout << "num (after update) = " << num << endl; 


    int width; 
    width = 25; 
    cout << "width = " << width << endl; 

    int height; 
    height = 10; 
    cout << "height = " << height << endl << endl; 



    int x = 10, y = 20, z; 
    z = x + y; 
    cout << "x = " << x << endl << "y = " << y << endl << "z (x + y) = " << z << endl; 


    /* Initialization Styles */ 
    
    int a = 5;     // copy-initialization
    int b(6);      // direct-initialization (parentheses)
    int c{7};      // list-initialization (braces) 
    cout << "Init styles -> " << "a = " << a << endl << "b = " << b << endl << "c = " << c << endl; 


    /* ======== Local vs Global ======== */ 
    int g_counter = 100;    // SHADOWS the global g_counter within main's scope 
    cout << "[main] local g_counter = " << g_counter << " (shadows global)" << endl; 
    printGlobal();  // still sees the true global '::g_counter' (value = 1)
    ::g_counter = 2;    // access the global explicitly via scope resolution 
    printGlobal(); 
    cout << endl; 


    /* ======== Using variables in expressions ======== */ 
    int num1 = 10, num2; 
    num2 = num1; 
    cout << "num1 = " << num1 << endl << "num2 = " << num2 << endl; 


    return 0; 
}