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


int main(){
    {
      MyClass obj2("Second");
    }
    
    MyClass obj1("First");

    DynamicArray array1(10);
    
}