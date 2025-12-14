#include <iostream>
#include <string>

using namespace std;

/*
    Exercise: Library Management System

    Description:
    Design and implement a Library Management System using classes and access specifiers in C++. 
    The system should allow you to manage books in a library.

    Requirements:

    1. Create a class named "Book" with the following attributes:
        Title (a string)
        Author (a string)
        Publication Year (an integer)
        ISBN (a string)
       
    2. Make the attributes private to encapsulate them.

    3. Include member functions to:
        Set the book details (title, author, publication year, ISBN).
        Display the book details.

    4. Create objects of the "Book" class and demonstrate accessing and modifying the attributes using member functions.

    Tips:
    Use access specifiers (public and private) to control access to class members.
    You can choose to implement the member functions directly in the class declaration (inline) or define them outside the class.
    Test the functionality of the class by creating book objects, setting their details, and displaying the information.
    This exercise will help you practice using access specifiers to control the visibility of class members and understand the concept of encapsulation.
*/



class Book{
    private:
    string Title;
    string Author;
    int Publication_Year;
    string ISBN;

    public:

    void set_details(string Title,string Author,int Publication_Year,string ISBN){
        this->Title=Title;
        this->Author=Author;
        this->Publication_Year=Publication_Year;
        this->ISBN=ISBN;
        
    }

    void display_details(){
        cout<<"Title: "<<Title<<endl;
        cout<<"Author: "<<Author<<endl;
        cout<<"Publication_Year: "<<Publication_Year<<endl;
        cout<<"ISBN: "<<ISBN<<endl;
    }
    


};



int main() {

    /*      Example usage:     */
    Book book1;
    book1.set_details("Chess","Stefan Zweig",1942,"998887777727274");

    Book book2;
    book2.set_details("White Nights","Stefan Zweig",1942,"12345677889");

    // Display book details
    cout << "Book 1 Details:" << endl;
    book1.display_details();
    cout << endl;

    cout << "Book 2 Details:" << endl;
    book2.display_details();
    cout << endl;

    
}
