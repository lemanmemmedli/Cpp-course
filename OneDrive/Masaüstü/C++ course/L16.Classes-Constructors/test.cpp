#include <iostream>


using namespace std;


class Cylinder{
    private:
    double radius;
    double height;


    public:
    Cylinder(){       
    radius=1;
    height=1;
    cout<<"Default Construction"<<endl;

    }

    Cylinder(double radiusparam,double heightparam){
        radius=radiusparam;
        height=heightparam;
        cout<<"parametric constructor"<<endl;
    }

    Cylinder(double radiusparam,double heightparam,double myPi){
        radius=radiusparam;
        height=heightparam;
        cout<<"parametric constructor with "<<myPi<<endl;
    }

    double volume(){
        return radius*height;
    }
};

class Customer {
    private:
    string name="";
    string email="";
    string phonenumber="";


    public:
    Customer(){
        name="John";
        email="Jane@";
        phonenumber="+994";
        cout<<"custom"<<endl;
    }

    Customer(string nameP,string emailP,string phonenumberP){
        name=nameP;
        email=emailP;
        phonenumber=phonenumberP;
        cout<<"custom2"<<endl;
    }
};


class Customer1 {
    private:
    string name="";
    string email="";
    string phonenumber="";


    public:
    Customer1()=default;

   
};




int main(){
    Cylinder cylinder;
    Cylinder cylinder2(15.3,25.3);
    Cylinder cylinder3(3,5,7.8);

    Customer custom1;
    Customer custom2("Janen","Jane@","99450");






}