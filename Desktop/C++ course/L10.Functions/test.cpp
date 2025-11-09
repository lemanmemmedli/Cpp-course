#include <iostream>
#include <cstring>
#include "compare.h"


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


int max_1(int a,int b){
    a=a*a;
    b=b+b;

    int result = (a>b) ? a : b;

    return result;
    
}

double increment_multiply(double a,double b){
    cout<<"orginal"<<endl;
    cout<<a<<endl;
    cout<<b<<endl;

   double result =(++a) * (b++);

   cout<<"Deyismis qiymet"<<endl;
   cout<<a<<endl;
   cout<<b<<endl;

   return result;

}


int min(int ,int );

void swap(int &a,int &b){
    int temp=a;
    a=b;
    b=temp;
}

void pointerswap(int *a,int *b){
    int temp=*a;
    *a=*b;
    *b=temp;
}





int main(){

    // sayHello();
    // countAge(11);
    // countAge(0);
    // countAge(5);

    // for (int i=0;i<20;i++){
    //     countAge(i);
    // }
    
    // // cout<<giveFive()<<endl;

    // string myresult=str("Hello ");
    // cout<<myresult<<endl;

    // int x=12;
    // int y=45;
    // int c=25;

    // int result = max_1(10,15,95);
    // cout<<max_1(x,y,c)<<endl;
    // cout<<result<<endl;


    // double h=3;
    // double i=4;

    // cout<<"orginal"<<endl;
    // cout<<h<<endl;
    // cout<<i<<endl;

    // double inc_result=increment_multiply(h,i);

    // cout<<inc_result<<endl;
    // cout << "Outside function, after sending variables: " << endl;
    // cout << "h: " << h << endl;   // 3.00
    // cout << "i: " << i << endl; 


    // int x=5;
    // int y=6;

    // cout<< max_1(x,y)<<"--"<<max_1(y,x)<<endl;

    // cout<<x <<y<<endl;


    // cout<<min(4,5)<<endl;

    // cout<<PI<<endl;
    // cout<<MAX(4,5)<<endl;
    // cout<<MIN(5,6)<<endl;

    int a=6;
    int b=8;

    pointerswap(&a,&b);

    cout<<a<<"--"<<b<<endl;



}

// int min(int a,int b){
//     if(a>b){
//         return a;
//     }else{
//         return b;
//     }
// }