/*
    Array of Structures
    Write a program to:
    
    Store details of 5 employees
    Each employee has:
    
    int empId
    char empName[40]
    float salary
    
    
    Display all employees whose salary > 50,000.
*/

#include<iostream> 
using namespace std; 

struct Employee 
{
    int empId; 
    char empName[40]; 
    float salary; 
}; 

int main() 
{
    struct Employee e[5]; 

    e[0] = { 1, "Emp1", 40000.00f }; 
    e[1] = { 2, "Emp2", 38000.00f }; 
    e[2] = { 3, "Emp3", 48000.00f }; 
    e[3] = { 4, "Emp4", 55000.00f }; 
    e[4] = { 5, "Emp5", 72000.00f }; 

    cout << e << endl; 
    cout << sizeof(e) << endl; 
    
    // foreach loop 
    for (Employee X : e) 
    {
        if (X.salary > 50000.00f) 
        {
            cout << X.empId << " " << X.empName << " " << X.salary << endl;
        }
    }

    return 0;
}