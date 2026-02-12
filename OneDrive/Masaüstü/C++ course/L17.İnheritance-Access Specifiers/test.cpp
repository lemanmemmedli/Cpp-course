#include <iostream>
#include <functional>
#include <string>

using namespace std;

class Person{
    private:
    string password;

    protected:
    string surname;

    public:
    string name;

};

/*
1.public inheritance-> public name;protected surname;
2.protected inheritance->protected surname; protected surname;
3.private inheritance-> private name; private surname;
*/
class Customer : private Person{
    public:
    void print(string name,string surname){
        this->name=name;
        this->surname=surname;

        cout<<Person::name<<endl;
        cout<<Person::surname<<endl;
    }

};
class Seller : public Customer{
    public:
    void print(string name){
        this->name=name;
        cout<<Person::name<<endl;
    }

};


int main(){

    Customer first;
    first.print("Ozzy","Ozzy");

    Seller second;
    second.print("Izzy");

}