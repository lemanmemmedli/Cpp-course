#include <iostream>
#include <cstring>


using namespace std;


void sayHello(){
    cout<<"HEllo"<<endl;
}

void countAge(unsigned int  age){

    if(age>10){
        cout<<"Good"<<endl;
    }else if(age == 0){
        cout<<"Bad"<<endl;
    }else{
        cout<<"you are young"<<endl;

    }
    return;
    cout<<"Next Print.."<<endl;
}

float giveFive(){
    return 45.0 / 25.0;
}
 string str(string text){
    return (text + text);

 }



int main(){

    // sayHello();
    // countAge(11);
    // countAge(0);
    // countAge(5);

    for (int i=0;i<20;i++){
        countAge(i);
    }
    
    // cout<<giveFive()<<endl;

    string myresult=str("Hello ");
    cout<<myresult<<endl;


}