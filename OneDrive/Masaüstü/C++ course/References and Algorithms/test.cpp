#include <iostream>
#include <math.h>
#include <cmath>
#include <iomanip>

using namespace std;

// void swap(int &x,int &y){
//     int temp=x;
//      x=y;
//     y=temp;


// }

void print(const double &n){
    cout<<"our number: "<<n<<endl;
}

int main()
{
    // int x=15;
    // int &r=x; //leqeb;

    // cout<<x<<endl;
    // cout<<r<<endl;

    // x=20;
    // cout<<x<<endl;
    // cout<<r<<endl;

    // r=40;
    // cout<<x<<endl;
    // cout<<r<<endl;


    // int x=5;
    // int &r=x;
    // int y=x;


    // cout<<&x<<endl;
    // cout<<&r<<endl;
    // cout<<&y<<endl;


    // int x(33);
    // double y(55);

    // // References
    // int &ref_int_data = x;
    // double &ref_double_data = y;

    // // Prind data out
    // cout << "x: " << x << endl;
    // cout << "y: " << y << endl;
    // cout << "&x: " << &x << endl;
    // cout << "&y: " << &y << endl;

    // cout << "===================================" << endl;

    // cout << "ref_int_data: "     << ref_int_data << endl;
    // cout << "ref_double_data: "  << ref_double_data << endl;
    // cout << "&ref_int_data: "    << &ref_int_data << endl;
    // cout << "&ref_double_data: " << &ref_double_data << endl << endl << endl;

    //     cout << "===================================" << endl;

    // cout << "ref_int_data: "     << ref_int_data << endl;
    // cout << "ref_double_data: "  << ref_double_data << endl;
    // cout << "&ref_int_data: "    << &ref_int_data << endl;
    // cout << "&ref_double_data: " << &ref_double_data << endl;

    //  // Change data
    // x = 101;
    // y = 67.2;

    // // Prind data out
	// cout << "x: " << x << endl;
    // cout << "y: " << y << endl;
    // cout << "&x: " << &x << endl;
    // cout << "&y: " << &y << endl;

    // cout << "===================================" << endl;

    // cout << "ref_int_data: "     << ref_int_data << endl;
    // cout << "ref_double_data: "  << ref_double_data << endl;
    // cout << "&ref_int_data: "    << &ref_int_data << endl;
    // cout << "&ref_double_data: " << &ref_double_data << endl;

    // // Change referential data
    // ref_int_data = 1002;
    // ref_double_data = 3.14;

    // // Prind data out
    // cout << "x: " << x << endl;
    // cout << "y: " << y << endl;
    // cout << "&x: " << &x << endl;
    // cout << "&y: " << &y << endl;

    // cout << "===================================" << endl;


    // int x=20;
    // int &r=x;

    // int *p=&x;

    // cout<<p<<endl;
    // cout<<*p<<endl;
    // cout<<x<<endl;

    // x=30;
    // cout<<p<<endl;
    // cout<<*p<<endl;
    // cout<<x<<endl;
    // cout<<r<<endl;

    // r=40;
    // cout<<p<<endl;
    // cout<<*p<<endl;
    // cout<<x<<endl;
    // cout<<r<<endl;

    // *p=50;
    // cout<<p<<endl;
    // cout<<*p<<endl;
    // cout<<x<<endl;
    // cout<<r<<endl;


    // int x=30;
    // int &r=x;
    // int y=60;

    // &r=y;

    // const int  *const p=&x;
    // int y;

    // p=10;
    // int  g=50;

    // p=&g;


    // int x=5;

    // const int &r=x;
    // const int *const p=&x;

    // x=20;

    // cout<<x<<endl;
    // cout<<p<<endl;
    // cout<<r<<endl;


    // int a=5;
    // int b=8;

    // swap(a,b);

    // cout<<a<<" - "<<b<<endl;

    double x=3.14;
    print(x);

    double array[]={1.1,2.2,3.3};

    for(double &element: array){      //her defe yeni yaddas yaranmasin deye &element istifade etmeliyik.
        cout<<element<<endl;
    }









}