#include <iostream>
#include "cylinder.h"
using namespace std;

class  Point{
    private:
    int x;
    int y;
    int z;

    public:
    Point(int X,int Y,int Z=0){            //parametric constructor
        x=X;
        y=Y;
        z=Z;
    }


    int sum(){
        return x+y+z;
    }

    int product(){
        return x*y*z;
    }

    double division(){
        return x/z/y;
    }


};


int main(){
    
    system("cls");
    Point *pointer= new Point(200,4,6);

    cout<<&pointer<<endl;       //stack address
    cout<<pointer<<endl;       //heap address
    cout<<(*pointer).sum()<<endl;

    // delete pointer;
    // pointer=nullptr;
    // cout<<(*pointer).sum()<<endl;        //trash value

    cout<<pointer->sum()<<endl;
    cout<<pointer->product()<<endl;
    cout<<pointer->division()<<endl;;


    cout<<"--------------------"<<endl;

    Cylinder c1(4,6);
    cout<<c1.volume()<<endl;

    Cylinder *c2 = new Cylinder(12,15);

    cout<< (*c2).volume()<<endl;
    cout<<c2->volume()<<endl;

    delete c2;
    c2=nullptr;

    Cylinder cylinder(10,12);
    Cylinder *pCylinder=&cylinder;

    cout<<&cylinder<<endl;
    cout<<&pCylinder<<endl;
    cout<<pCylinder<<endl;

    cout<<(*pCylinder).volume()<<endl;
    cout<<pCylinder->volume()<<endl;

    cout<<"-----------------------"<<endl;
    // managing stack object through pointers

    cout << "&cylender: " << &cylinder << endl;
    cout << "sizeof(cylender): " << sizeof(cylinder) << endl;

    cout << "pCylinder:  " << pCylinder << endl;
    cout << "&pCylinder: " << &pCylinder << endl;

    cout << "volume: " << (*pCylinder).volume() << endl;
    cout << "volume: " << pCylinder->volume() << endl << endl;

    cout<<"--------------------------"<<endl;

    Cylinder *pCylinder_2=new Cylinder(12,18);

    cout<<pCylinder_2->get_base_radius()<<endl;
    cout<<pCylinder_2->volume()<<endl;

    cout<<pCylinder_2<<endl;
    delete pCylinder_2;
    pCylinder_2=nullptr;
    cout<<pCylinder_2->volume()<<endl;






}


