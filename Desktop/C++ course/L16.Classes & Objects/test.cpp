#include <iostream>
#include <unordered_map>

using namespace std;

hash<string>hasher;

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


class User {
    private:
    string password = "";
    string email = "";

    public:

    string name ="";

    void setpassword(string orginalPassword){
        password=hasher(orginalPassword);
    }
    void details(){
        cout<<name<<endl;
        cout<<password<<endl;
    }
    
};

class UserInfo {
    private:
    string password= "";

    private:
    string email = "";

    public:

    string name="";
    void setpassword(string orginalPassword){
        password=hasher(orginalPassword);
    }
    public:
    void setemail(string orginalemail){
        email=orginalemail;
    }

    void Ddetails(){
        cout<<name<<endl;
        cout<<password<<endl;
        cout<<email<<endl;
    }
};

class Cube{
    public:
    int height=1;
    int b=1;
    int c=1;


    public:

    int volume(){
        return height*b*c;
    }
};

int main(){
    
    Cylinder Cylinder1;
    Cylinder1.radius=5;
    Cylinder1.height = 10;

    cout<<Cylinder1.volume()<<endl;
// ------------------------
    User first;

    first.setpassword("Hello!");

    first.name ="Jhon";

    first.details();

//    ------------------------------
    UserInfo second;

    second.setpassword("Salam!");
    second.setemail("Salam@gmail.com");

    second.name="Jane";

    second.Ddetails();
    // ---------------------------
    Cube voll;

    voll.height=12;
    voll.b=5;
    voll.c=15;

    cout<<voll.volume();




}