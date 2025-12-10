#include <iostream>

using namespace std;

class Dog{
    public:
    Dog()=default;
    Dog(string name_param, string breed_param, int age_param);
    ~Dog();

    int getage(){
        return age;
    }

    private:
    string name;
    string breed;
    int age;


};

Dog::Dog(string name_param, string breed_param, int age_param){
    name=name_param;
    breed=breed_param;
    age=age_param;
    cout<<"constructor is called: "<<name<<endl;
};
Dog::~Dog(){
    cout<<"Destructor is called: "<<name<<endl;
};

int main(){

    Dog dog1("Flufyy1","sheppered",1);
    Dog dog2("Flufyy2","sheppered",dog1.getage()+1);
    Dog dog3("Flufyy3","sheppered",3);

    
}