#include <iostream>

using namespace std;


class MyClass1{
    private:
    int age;

    public:
    MyClass1(int ageP){
        age=ageP;
        cout<<this<<endl;
        cout<<(*this).age<<endl;
        cout<<this->age<<endl;

    }

    void print() const{
        cout<<this->age<<endl;
    }

};


class MyClass{
    int value;

    public:

    void setvalue(int value) {
        this->value=value;
        cout<<value<<endl;
    }

    void printvalue(){
        cout<<"print: "<<this->value<<endl;
    }

    MyClass()=default;

    MyClass (int value){
        this->value=value;
        cout<<"Parametric Constructor: "<<this->value<<endl;
    }

    ~MyClass(){
        cout<<"Parametric Destructor: "<<this->value<<endl;
    }

};

class Dog{
    public:
    Dog()=default;
    Dog(string nameP,string breedP,int ageP);
    ~Dog();

    void printdog(){
        cout<<"Print Dog class:"<<this<<name<<breed<<*p_age<<endl;
    }

    void setdog(string name){
        this->name=name;
    }

    void setbreed(string breed){
        this->breed=breed;
    }

    void setage(int age){
        *(this)->p_age=age;
    }


    private:
    string name;
    string breed;
    int *p_age=nullptr;
};

Dog::Dog(string nameP,string breedP,int ageP){
    name=nameP;
    breed=breedP;
    p_age=new int;
    *p_age=ageP;
    cout<<"Constructor called: "<<this<< " at: "<<name<<endl;
}
Dog::~Dog(){
    delete p_age;
    cout << "Dog destructor called for " << name << " at: " << this << endl;

}

class Cat{
    public:
    Cat()=default;
    Cat(string nameP,string breedP,int ageP);
    ~Cat();

    void printcat() const{
        cout << "Cat (" << this << ") : [ name: " << name << ", breed: " << breed << ", age:" << *p_age << " ]" << endl;
    }

    Cat* set_cat_name(string name){
        this->name=name;
        return this;
    }

    Cat* set_cat_breed(string breed){
        this->breed=breed;
        return this;
    }

    Cat* set_cat_age(int age){
        *(this->p_age)=age;
    }

    // reference 

    Cat &ref_set_cat_name(string name){
        this->name=name;
        return *this;
    }

    Cat &ref_set_cat_breed(string breed){
        this->breed=breed;
        return *this;
    }

    Cat& ref_set_age(int age){
        *(this->p_age)=age;
        return *this;
    }


    private:
    string name;
    string breed;
    int *p_age;
};

Cat::Cat(string nameP,string breedP,int ageP){
    name=nameP;
    breed=breedP;
    p_age=new int;
    *p_age=ageP;
    cout << "Cat constructor called for " << name << " at: " << this << endl;
}

Cat::~Cat(){
    delete p_age;
    cout << "Cat destructor called for " << name << " at: " << this << endl;

}

int main(){
    system("cls");

    // MyClass obj1(12);
    // MyClass obj(13);

    // obj1.print();

    // MyClass obj3;
    // obj3.setvalue(14);
    // obj3.printvalue();

    // MyClass obj4;
    // obj4.setvalue(100);
    // obj4.printvalue();
    
    // {
    //     MyClass obj(200);
    // }

    // Dog first("DOggy","Sheppered",4);

    // first.printdog();

    // first.setbreed("sheppered");
    // first.setdog("Fluffy");
    // first.setage(3);

    // first.printdog();

    Cat obj("garr","filed",2);
    obj.printcat();

    obj.set_cat_name("Flow")->set_cat_breed("Bozz")->set_cat_age(1);

    obj.printcat();

    cout<<endl;

    obj.ref_set_cat_name("Gruu").ref_set_cat_breed("fields").ref_set_age(2);

    obj.printcat();

    


    



}