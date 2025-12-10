#include <iostream>


using namespace std;

class MyClass{
    public:
    string name;
    MyClass(string nameP) {

        name=nameP;
        cout<<"Constructor is callaed for: "<<name<<endl;
    };

    ~MyClass() {
        cout<<"Destructor is called for: "<<name<<endl;
    };

};

class DynamicArray{
    private:
    int *data;

    public:
    DynamicArray(int size){
        data = new int [size];
    }

    ~DynamicArray(){
        delete []data;
        data=nullptr;
        
    }
};


class Dog{
    public:
    Dog()=default;
    Dog(string name_param,string breed_param,int age_param);
    ~Dog();

    private:
    string name;
    string breed;
    int *p_age;
};

Dog::Dog(string name_param,string breed_param,int age_param){
    name=name_param;
    breed=breed_param;
    p_age=new int;
    *p_age=age_param;
    cout << "Dog constructor called for " << name << endl;
};
Dog::~Dog(){
    delete p_age;
    cout << "Dog destructor called for : " << name << endl;
}

void some_func(){
    Dog *p_age = new Dog("Flufy","Shepered",25);
    delete p_age;

}
void dogRex(){
    Dog *dog_rex=new Dog("rex","sheppered",1);
    delete dog_rex;
}


int main(){
    {
      MyClass obj2("Second");
    }
    
    MyClass obj1("First");

    DynamicArray array1(10);

    some_func();
    cout<<"Done!"<<endl;

    dogRex();

    
    
}