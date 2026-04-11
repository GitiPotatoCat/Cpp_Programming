#include<iostream>

using namespace std; 

int main() 
{
    int A[5];   // Array Declaration 

    // Array Initialization
    A[0] = 20; 
    A[1] = 24; 
    A[2] = 17; 
    A[3] = 25; 
    A[4] = 18; 

    cout << sizeof(A) << endl; 
    cout << size(A) << endl; 
    cout << A << endl; 
    cout << sizeof(A[0]) << endl; 
    cout << sizeof(A[1]) << endl; 

    cout << "Array: " << endl; 
    for (int i=0; i<5; i++) 
    {
        cout << A[i] << ", ";
    } cout << endl; 


    //------------

    int B[] = { 1, 2, 3 }; 
    cout << "Array: " << endl;
    for (int i=0; i<size(B); i++) 
    {
        cout << B[i] << ", ";
    } cout << endl; 

    
    //------------ 
    int n; 
    cout << "Enter Size"; 
    cin >> n; 
    int arr[n]; 
    arr[0] = 2; 

    // foreach loop 
    cout << "Array printing using foreach loop" << endl; 
    for(int x:arr) 
    {
        cout << x << ", ";
    } cout << endl;

    return 0;
}