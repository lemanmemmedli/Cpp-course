#include <iostream>

using namespace std;

/*
    Exercise:
    Imagine you are developing a simple banking application in C++. 
    You have a class called BankAccount that represents a user's bank account. 

    The BankAccount class has the following attributes:
        accountNumber (integer) - represents the account number
        balance (double) - represents the account balance

    The BankAccount class also has the following methods:
        deposit(amount) - deposits the specified amount into the account
        withdraw(amount) - withdraws the specified amount from the account
        getBalance() - returns the current account balance

    In addition to the above functionality, you need to ensure that when a BankAccount object is destroyed, 
    it writes a log message indicating that the account is closed.

    Your task is to implement the BankAccount class with appropriate constructors, methods, and a destructor. 
    Demonstrate the need for a destructor by creating multiple BankAccount objects, manipulating them, 
    and observing the log messages when the objects are destroyed.

    Hint:
    To keep things simple, you can use a static variable to keep track of the number of BankAccount objects created, 
    and increment it in the constructor. 
    In the destructor, decrement the count and check if it reaches zero. 
    If so, write the log message.
*/


/* 
    Solution 
*/
class BankAccount {
    private:
    int accountNumber;
    double balance;

    public:
    BankAccount(int accountNumber){
        this->accountNumber=accountNumber;
       
    }
    ~BankAccount(){
        cout<<"Your bank account has been closed."<<accountNumber<<endl;
    }

    void deposit(double amount){
        if(amount>0){
            balance+=amount;
        }else{
            cout<<"Invalid amount"<<endl;
        }
    }

    void withdraw(double amount){
        if(amount>0){
            balance-=amount;
        }else{
            cout<<"Invalid witdhdraw"<<endl;
        }
    }

    double getBalance(){
        return balance;
    }





};



int main() {

    /*      Example usage:     */ 

    BankAccount account1(12345);
    BankAccount account2(2468);

    account1.deposit(500.0);
    account2.deposit(2500.0);

    cout<<"Account 1 Balance: "<<account1.getBalance()<<endl;
    cout<<"Account 2 Balance: "<<account2.getBalance()<<endl;

    return 0;
}