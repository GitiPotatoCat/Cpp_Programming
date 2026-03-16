#include <iostream>
#include <string>
using namespace std;

class Car 
{
private:
    int car_id;
    string brand_name;
    string car_model;

public:
    // Default constructor
    Car()
        : car_id(0), brand_name("Unknown"), car_model("Unknown") 
    {
        // Optional: cout << "Default constructor called\n";
    }

    // Parameterized constructor (recommended)
    Car(int id, const string& brand, const string& model)
        : car_id(id), brand_name(brand), car_model(model) 
    {
        // Optional: cout << "Parameterized constructor called\n";
    }

    // Member function to print details
    void details() const 
    {
        cout << "ID: " << car_id << endl;
        cout << "Brand Name: " << brand_name << endl;
        cout << "Car Model: " << car_model << endl;
    }
};


int main() 
{
    // Using default constructor
    Car c1;
    c1.details();

    cout << "-----" << endl;

    // Using parameterized constructor
    Car c2(101, "Toyota", "Corolla");
    c2.details();

    cout << "-----" << endl; 

    return 0;
}