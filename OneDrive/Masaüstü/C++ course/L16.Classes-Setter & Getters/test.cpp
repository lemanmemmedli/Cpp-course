#include <iostream>


using namespace std;

class Rectangle{
    private:
    int width;
    int height;


    public:

    void setWidth(int w){
        if(w>0){
            width=w;
        }else{
            cout<<"invalid width!!!";
        }

    }

    void setHeight(int h){
        if(h>0){
            height=h;        
        }else{
            cout<<"invalid height!!!";
        }
    }
    int getWidth(){
        return width;
    }

    int getHeight(){
        return height;
    }

    int  calcarea(){
        return width*height;
    }
};

class Triangle{
    private:
    int radius;
    int part;


    public:

    void setRadius(int r){
        if(r>0){
            radius=r;
        }else{
            cout<<"invalid radius!!!"<<endl;
        }
    }

    void setPart(int p){
        if(p>0){
            part=p;

        }else{
            cout<<"invalid part!!!"<<endl;
        }
    }
    int getRadius(){
        return radius;
    }

    int getPart(){
        return part;
    }

    int calculate(){
        return radius*part;
    }

};

class BankAccount{
    private:
    string accountNumber;
    double balance;
    
    public:

    void setaccountNumber(const string &accNum){
        accountNumber=accNum;
    }

    void setBalance(double ball){
        if(ball>0){
            balance=ball;
        }else{
            cout<<"invalid balance!!!"<<endl;
        }
    }

    string getaccountNUmber() const {
        
        return accountNumber;
    }

    double getbalance(){
        return balance;
    }

    void deposit(double amount){
        if(amount>0){
            balance+=amount;
        }else{
            cout<<"invalid deposit amount!!";
        }
    }
    void withdrow(double amount){
        if(amount>0 && amount<=balance){
            balance-=amount;
        }else{
            cout<<"Invalid withdrawal amount or insufficient balance!"<<endl;
        }
    }
};

class StudentAccount{
    private:
    int StudentID;
    string StudentName;

    public:

    void setStudentId(int id){
        StudentID=id;
    }

    void SetStudentName(string name){
        StudentName=name;
    }

    string getStudentName(){
        return StudentName;
    }

    int getStudentId(){
        return StudentID;
    }

};



int main(){



    Rectangle rect;

    rect.setHeight(5);
    rect.setWidth(25);

    cout<<rect.getHeight()<<endl;
    cout<<rect.getWidth()<<endl;
    cout<<rect.calcarea()<<endl;

    //----------------
    Triangle tre;
    
    tre.setPart(5);
    tre.setRadius(15);
    cout<<tre.getPart()<<endl;
    cout<<tre.getRadius()<<endl;
    cout<<tre.calculate()<<endl;


    // -------------------
    cout<<"------------Bankaccount--------------"<<endl;

    BankAccount account;

    account.setaccountNumber("12345678");
    account.setBalance(500.4);

    cout<<account.getbalance()<<endl;
    cout<<account.getaccountNUmber()<<endl;

    account.deposit(500.0);
    cout<<account.getbalance()<<endl;

    account.withdrow(200.0);
    cout<<account.getbalance()<<endl;

    // -------------------
    cout<<"------------Studentaccount--------------"<<endl;
    StudentAccount saccount;

    saccount.setStudentId(12345);
    saccount.SetStudentName("Jane");

    cout<<saccount.getStudentId()<<endl;
    cout<<saccount.getStudentName()<<endl;





}