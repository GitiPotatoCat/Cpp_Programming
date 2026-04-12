/*
    Create and Display a Structure
    Create a structure Student with:

    int id
    char name[50]
    float marks

    Accept input for one student and display the details.
*/

#include<iostream>
using namespace std; 

struct Student
{
    /* data */ 
    int id; 
    char name[50]; 
    float marks; 
}; 

int main() 
{
    struct Student s; 
    cout << sizeof(Student) << endl; 
    cout << sizeof(s) << endl; 
    cout << sizeof(s.id) << endl; 
    cout << sizeof(char) << endl; 
    cout << sizeof(s.name) << endl; 
    cout << sizeof(s.marks) << endl; 

    return 0;
}

