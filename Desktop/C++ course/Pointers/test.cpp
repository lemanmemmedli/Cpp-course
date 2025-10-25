#include <iostream>
#include <math.h>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{

    // int a=5;
    // int b=8;

    // cout<<a<<endl;
    // cout<< &a <<endl;
    // cout<<sizeof(&a)<<endl;
    // cout<< *(&a) <<endl;

    // int x=5;

    // int *pX=&x;

    // cout<<&x<<endl;
    // cout<<*(&x)<<endl;
    // cout<<*pX<<endl;
    // cout<<pX<<endl;
    // cout<<&pX<<endl;

    // int x = 5;
    // int *pointer1 = &x;      // declare and assign
    // int *pointer2 = nullptr; // declare and assign to null pointer

    // pointer2 = &x; // assign after

    // cout << "x: " << x << endl;                // 5
    // cout << "address of x: " << &x << endl;    // 0x_some_hex
    // cout << "pointer of x: " << *(&x) << endl; // 5 (pointer to the address of x (i.e. &x))

    // cout << "pointer1: " << pointer1 << endl;   // 0x7ff7b227c3bc
    // cout << "*pointer1: " << *pointer1 << endl; // 5

    // cout << "pointer2: " << pointer2 << endl;   // 0x7ff7b227c3bc
    // cout << "*pointer2: " << *pointer2 << endl; // 5

    // int *pointerI = nullptr;
    // int *pointerD(nullptr);

    // cout << pointerI << endl;
    // cout << pointerD << endl;

    // int *pointerL;
    // double *pointerG;

    // cout << pointerL << endl;
    // cout << pointerG << endl;

    //  // Declare and initialize pointer
    // int    *pointerI;
    // double *pointerD; 

    // // Explicitly initialize with nullptr 
    // int *number = nullptr;
    // int *number1(nullptr);

    // // Pointers to different variables are of the same size
    // cout << "sizeof(int):     " << sizeof(int)     << endl;     // 4
    // cout << "sizeof(int*):    " << sizeof(int*)    << endl;     // 8?
    // cout << "sizeof(double):  " << sizeof(double)  << endl;     // 8
    // cout << "sizeof(double*): " << sizeof(double*) << endl;     // 8?

    // cout << "sizeof(number):  " << sizeof(number)  << endl;    // 8
    // cout << "sizeof(*number):  " << sizeof(*number)  << endl;  // 4, why it is 4 byte?

    // cout << endl;

    int a=3;

    int *p=&a;

    int b;

    p=&b;

    cout<<p<<endl;

    int x = 45;
    int *pointer_int = &x; 
    int y = 47;
    pointer_int = &y;   // assign a different address to the pointer

    cout << "pointer_int:  " << pointer_int << endl;
    cout << "*pointer_int: " << *pointer_int << endl;
}