#include <iostream>

using namespace std;

const double PI =3.141722438473493;

class  Cylinder {
    public:
    double radius=1;
    double height=1;

    public:
    double volume (){
        return  PI * radius*radius * height;

    } 
};

int main(){
    
    Cylinder Cylinder1;
    Cylinder1.radius=5;
    Cylinder1.height = 10;

    cout<<Cylinder1.volume()<<endl;
}