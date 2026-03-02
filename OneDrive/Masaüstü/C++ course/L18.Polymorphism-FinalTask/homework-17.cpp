#include <iostream>
#include <string>
#include <cmath>
using namespace std;

/*
    Polymorphism

    15. Abstract Classes as Interfaces
*/


/*
    Exercise: Shape Hierarchy Design

    Instructions:

    1. Identify Common Functionality:
        Analyze the scenario involving shapes, drawing, and resizing.
        Identify functionalities common to all shapes. These will go into the Shape interface.
    2. Consider Partial Implementation: 
        Determine if there are functionalities common to all drawable shapes that can be partially implemented. 
        If yes, create an abstract class named DrawableShape that extends the Shape interface and provides a partial implementation.
    3. Implement Concrete Classes:
        Implement concrete classes (e.g., Circle and Square) that inherit from either the Shape interface or the DrawableShape abstract class.
    4. Virtual Destructors:
        Ensure proper cleanup by adding virtual destructors where necessary.
    5. Demonstrate Usage:
        In the main function, create instances of concrete classes and demonstrate the use of the interface or abstract class methods.

    Tips:
        Tip 1: Think about functionalities that are common among all shapes and should be defined in an interface.
        Tip 2: Consider functionalities that can have a partial implementation common to all drawable shapes; create an abstract class if necessary.
        Tip 3: Implement concrete classes based on your design, ensuring they inherit from the appropriate interface or abstract class.
        Tip 4: Use virtual destructors where necessary for proper cleanup.
        Tip 5: In the main function, create instances of concrete classes and demonstrate the use of the interface or abstract class methods.

    Note: 
    The goal is to reinforce the understanding of when to use interfaces and abstract classes in a class hierarchy representing shapes and their behaviors.
*/


// Starter Code: 
class Shape{
    public:
    virtual void draw()=0;
    virtual double calculateArea()=0;
    virtual void resize(double factor) = 0;

    virtual ~Shape(){}


};

class DrawableShape : public Shape{
    public:
    double radius;

    virtual void draw() override{
        cout<<"Drawing..."<<endl;
    }

    virtual ~DrawableShape(){}
};

class Circle : public DrawableShape{
    public:
    double radius;

    
    Circle(double R_param) : radius(R_param){}

    virtual void draw() override{
        cout<<" Circle Drawing..."<<endl;
    }
     virtual double calculateArea(){
        return M_PI*radius*radius;
    }

    virtual void resize(double factor){
        radius*=factor;
    }

    virtual ~Circle(){}

};
class Square : public DrawableShape{
    public:
    double side;

    Square(double S_param) : side(S_param){}

    virtual void draw() override{
        cout<<" Square Drawing..."<<endl;
    }
     virtual double calculateArea(){
        return side * side;
    }

    virtual void resize(double factor){
        side*=factor;
    }

    virtual ~Square(){}

};

// TODO: Identify common functionalities for the Shape interface


// TODO: Consider partial implementation in an abstract class named DrawableShape


// TODO: Implement concrete classes (e.g., Circle and Square) inheriting from the interface or abstract class


int main() {

    // Tip 4: Demonstrate the use of the interface or abstract class
    Circle circle(5.0);
    Square square(4.0);

    // Drawing and calculating area for the circle
    circle.draw();
    cout << "Circle Area: " << circle.calculateArea() << endl;
    circle.resize(1.5);
    cout << "Resized Circle Area: " << circle.calculateArea() << endl;

    // Drawing and calculating area for the square
    square.draw();
    cout << "Square Area: " << square.calculateArea() << endl;
    square.resize(2.0);
    cout << "Resized Square Area: " << square.calculateArea() << endl;

    return 0;
}

