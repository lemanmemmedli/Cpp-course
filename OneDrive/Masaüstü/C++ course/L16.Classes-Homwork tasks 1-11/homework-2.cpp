#include <iostream>
#include <string>

using namespace std;

/*
    Exercise: Employee Management System

    Description:
    Design and implement an Employee Management System using classes and constructors in C++. 
    The system should allow you to create and manage employee records.

    Requirements:

    1. Create a class named "Employee" with the following attributes:
    Employee ID (an integer)
    Employee name (a string)
    Employee designation (a string)
    Employee salary (a floating-point number)

    2. Implement the following constructors for the "Employee" class:
    A parameterized constructor that initializes all the attributes based on provided values.
    A default constructor that sets default values for the attributes.

    3. Include member functions to:
    Set and get the employee attributes (ID, name, designation, salary).
    Display the employee details.

    4. Create multiple employee objects using different constructors and display their details.

    Tips:
    Use appropriate access specifiers (such as private and public) for the class members.
    Consider using default values in the parameterized constructor to provide flexibility when creating objects.
    Test the functionality of constructors by creating objects with and without providing initial values.
    This exercise will help you practice creating and initializing objects using constructors and defaulted constructors, as well as accessing and displaying object attributes.
*/




class Employee{
    private:
    int Employee_ID;
    string Employee_name;
    string Employee_designation;
    float Employee_salary;


    public:
    Employee()=default;
    Employee(int Employee_ID,string Employee_name,string Employee_designation,float Employee_salary){
        this->Employee_ID=Employee_ID;
        this->Employee_name=Employee_name;
        this->Employee_designation=Employee_designation;
        this->Employee_salary=Employee_salary;
    };

    void set_Employee_ID(int Employee_ID){
        this->Employee_ID=Employee_ID;
    }
    void set_Employee_name(string Employee_name){
        this->Employee_name=Employee_name;
    }
    void set_Employee_designation(string Employee_designation){
        this->Employee_designation=Employee_designation;
    }
    void set_Employee_salary(float Employee_salary){
        this->Employee_salary=Employee_salary;
    }
    int get_Employee_ID(){
        return Employee_ID;
    }
    string get_Employee_name(){
        return Employee_name;
    }
    string get_Employee_designation(){
        return Employee_designation;
    }
    float get_Employee_salary(){
        return Employee_salary;
    }

    void displayDetails(){
        cout<<"Employee_ID: "<<Employee_ID<<endl;
        cout<<"Employee_name: "<<Employee_name<<endl;
        cout<<"Employee_designation: "<<Employee_designation<<endl;
        cout<<"Employee_salary: "<<Employee_salary<<endl;
    }



};



int main() {

    /*      Example usage:     */ 

    // Creating employee objects using different constructors
    Employee emp1(123, "Johns", "Manager", 1000.0);
    Employee emp2;

    emp2.set_Employee_ID(321);
    emp2.set_Employee_name("Jane");
    emp2.set_Employee_designation("Creator");
    emp2.set_Employee_salary(3000.5);


    // Displaying employee details
    cout << "Employee 1 Details: " << endl;
    emp1.displayDetails();
    cout << endl;

    cout << "Employee 2 Details: " << endl;
    emp2.displayDetails();
    cout << endl;

    
}