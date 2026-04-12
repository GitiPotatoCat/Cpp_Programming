/*
Structure Initialization
Declare and initialize a structure Book with:

title
author
price

Print the values without using user input.
*/ 

#include<iostream>
using namespace std; 

struct Book
{
    /* data */ 
    char title[8]; 
    char author[12]; 
    float price; 
};


int main() 
{
    Book b1 = { "Book1", "Author 1", 300.00f }; 
    Book b2 = { "Book2", "Author 2", 269.00f }; 

    cout << "Size of 'Book' structure: " << sizeof(Book) << endl; 
    cout << "Object b1: " << b1.title << endl << b1.author << endl << b1.price << "₹" << endl; 
    cout << "Object b2: " << b2.title << endl << b2.author << endl << b2.price << "₹" << endl; 

    return 0;
}