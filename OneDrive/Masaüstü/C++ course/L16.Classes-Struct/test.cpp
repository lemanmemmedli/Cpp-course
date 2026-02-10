#include <iostream>
#include <string>

using namespace std;

struct Person{
    string name;
    string surname;
    int age;


    void print(){
        cout<<name<<endl;
        cout<<surname<<endl;
        cout<<age<<endl;
    }
};

struct Rectangle{
    private:
    double length;
    double width;

    public:
    Rectangle(double length,double width){
        this->length=length;
        this->width=width;
    }
    double calcarea(){
        return length*width;
    }
    
    double calcperimeter(){
       return 2 * (length+width);
    }



};

int main(){
    Person John;
    John.name="Jhon";
    John.surname="Doe";
    John.age=12;

    John.print();

    Rectangle rectangle(3.2,5.4);
    double area=rectangle.calcarea();
    cout<<area<<endl;
    cout<<rectangle.calcarea()<<endl;
    cout<<rectangle.calcperimeter()<<endl;

}