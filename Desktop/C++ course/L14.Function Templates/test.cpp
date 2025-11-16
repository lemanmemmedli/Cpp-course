#include <iostream>
#include <string.h>


using namespace std;

template <typename T, typename D> T maximum (D a, D b) {
    return (a > b) ? a : b;
}

template<typename L> L maximum_1(L *a,L *b){
    cout<<&a<<endl;
    cout<<&b<<endl;
    return (*a>*b)? *a: *b;
}


int main(){
    // int a=5;
    // int b=7;


    // double c=4.5;
    // double d=5.6;

    // string e="Hello";
    // string f="World";

    // cout<<maximum(a,b)<<endl;
    // cout<<maximum(c,d)<<endl;
    // cout<<maximum(e,f)<<endl;

    // int a=5;
    // int b=8;

    // cout<<"out: "<<&a<<endl;
    // cout<<maximum_1(a,b)<<endl;

    // int a = 1;
    // int b = 2;
    // double c = 1.1;
    // double d = 2.2;
    // string e = "three";
    // string f = "four";

    // 6. Different Type Names


    // unsigned long int a=5;
    // unsigned long int b=69;

    // cout<<maximum<char>(6.2,43.6)<<endl;
    // cout<<maximum<float>(5.2,66.6)<<endl;
    // cout<<maximum<short int>(a,b)<<endl;

    int a=10;
    int b=20;
    cout<<"Out: "<<&a<<endl;
    cout<<&b<<endl;

    cout<<maximum_1(&a,&b);



    

    

    
}