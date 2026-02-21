#include <iostream>
#include <string>

using namespace std;

/*
    Exercise: Polymorphism in a Backend Application

    Scenario:
    You are developing a backend application for a library management system. 
    The application needs to handle various types of items in the library, such as books, e-books, and audio CDs. 
    Each of these items has specific properties and actions associated with them.

    Requirements:

    1. Create a base class called LibraryItem with the following properties and methods:
        Properties:
        title (string): The title of the library item.
        year (int): The year of publication.
        Methods:
        virtual void checkout(): A virtual function that marks the item as checked out.
        virtual void checkin(): A virtual function that marks the item as checked in.
        virtual void displayInfo(): A virtual function that displays information about the item, 
        including its title and year of publication.

    2. Create three derived classes: Book, EBook, and AudioCD, each inheriting from LibraryItem. 
       These classes should have their own specific properties and methods:
        Book:
        Properties:
        author (string): The author of the book.
        Methods:
        Override the displayInfo() method to include information about the author.
        EBook:
        Properties:
        format (string): The format of the e-book (e.g., PDF, EPUB).
        Methods:
        Override the displayInfo() method to include information about the format.
        AudioCD:
        Properties:
        artist (string): The artist of the audio CD.
        Methods:
        Override the displayInfo() method to include information about the artist.

    3. In the main() function, create instances of Book, EBook, and AudioCD objects, each representing a library item.
    4. Create an array of pointers to LibraryItem objects and store the addresses of the items in the array.
    5. Use a loop to iterate through the array and perform the following actions:
        Check out and check in each item to simulate library operations.
        Display information about each item using the displayInfo() method.
    

    Example Output:

    Book Title: "The Great Gatsby"
    Author: F. Scott Fitzgerald
    Year: 1925
    Status: Checked out

    EBook Title: "The Hitchhiker's Guide to the Galaxy"
    Format: EPUB
    Year: 1979
    Status: Checked in

    Audio CD Title: "Abbey Road"
    Artist: The Beatles
    Year: 1969
    Status: Checked out

*/

// Solution

class LibraryItem{
    public:
    string title;
    int year;

    LibraryItem(string Ptitle,int Pyear) 
    : title(Ptitle),year(Pyear){};

    virtual void displayInfo(){
        cout<<"Year: "<<year<<endl;
    };

    virtual void checkout(){
        cout<<"Status: Checked out"<<endl;
    };

    virtual void checkin(){
        cout<<"Status: Checked in"<<endl;
    };


};

class Book : public LibraryItem{
    private:
    string author;
    
    public:
    Book(string Ptitle,string Pauthor,int Pyear) :
    author(Pauthor),LibraryItem( Ptitle,Pyear){}

    virtual void displayInfo() override{
        cout<<"Book Title: \""<<title<<"\""<<endl;
        cout<<"Author: "<<author<<endl; 
        LibraryItem::displayInfo();      
    };
};

class  EBook : public LibraryItem{
    private:
    string format;
    

    public:
    EBook(string Ptitle,string PFormat,int Pyear)
    :format(PFormat),LibraryItem( Ptitle,Pyear){}

    virtual void displayInfo() override{
        cout<<"EBook Title: \""<<title<<"\""<<endl;
        cout<<"Format: "<<format<<endl; 
        LibraryItem::displayInfo();      
    };


};

class AudioCD : public LibraryItem{
    private:
    string artist;

    public:
    AudioCD(string Ptitle,string Partist,int Pyear) 
    :artist(Partist),LibraryItem( Ptitle,Pyear){};

    virtual void displayInfo() override{
        cout<<"AudioCD: \""<<title<<"\""<<endl;
        cout<<"Artist: "<<artist<<endl;
        LibraryItem::displayInfo();  
             
    };

};



int main() {
    system("cls");

    Book book("The Great Gatsby","F. Scott Fitzgerald",1925);
    EBook ebook("The Hitchhiker's Guide to the Galaxy","EPUB",1979);
    AudioCD audiocd("Abbey Road","The Beatles",1969);

    LibraryItem* items[]={&book,&ebook,&audiocd};

    for(int i = 0; i < 3; i++) {
    items[i]->displayInfo();
    if(i % 2 == 0) { 
        items[i]->checkout();
    } else {
        items[i]->checkin();
    }

    cout << endl;
}



  

    return 0;
}
