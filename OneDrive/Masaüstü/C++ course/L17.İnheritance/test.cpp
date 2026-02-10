#include <iostream>
#include <string>


using namespace std;


// class Person{  //Parent Class / Base Class /superclass
//     public:
//     string name;
//     int age;

//     public:
//     void print(){
//         cout<<name<<endl;
//         cout<<age<<endl;
//     }
    
//     friend ostream& operator << (ostream &out,const Person &person){
//     out<<person.age<<endl;
//     out<<person.name<<endl;
//     return out;
// }

// };

// class Engineer : public Person{   //Derived class / Child class / subclass
//     private:
//     int id;
//     public:
//     void printEngineer(){
//         print();
//     }

// };

class Person{
    private:
    int password;

    public:
    string name;

    protected:
    string surname;
};

class Customer : public Person{
    private:
    int customer_id;

    public:
    void display() const{
        cout<<"Name: "<<name<<endl;
        cout<<"Surname: "<<surname<<endl;
    }

    void setSurname(string surname){
         if(surname.length()>2){
            this->surname=surname;
         }
         else{
            cout<<"Surname - "<<surname<<" is not valid!"<<endl;
         }
    }

};




int main(){

    system("cls");

    // Person Afsun;

    // Afsun.age=33;
    // Afsun.name="Afsun";

    // cout<<Afsun<<endl;

    Customer first;

    first.name="Jhon";
    first.setSurname("Doe");

    first.display();






}