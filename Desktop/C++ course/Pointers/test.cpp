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

    // int a=3;

    // int *p=&a;

    // int b;

    // p=&b;

    // cout<<p<<endl;

    // int x = 45;
    // int *pointer_int = &x;
    // int y = 47;
    // pointer_int = &y;   // assign a different address to the pointer

    // cout << "pointer_int:  " << pointer_int << endl;
    // cout << "*pointer_int: " << *pointer_int << endl;

    // int number = 22;   // stack
    // int *p_number = &number;

    // cout << "number:     " << number << endl;
    // cout << "&number:    " << &number << endl;
    // cout << "p_number:   " << p_number << endl;
    // cout << "*p_number:  " << *p_number << endl;

    // int *p_number1;   // uninitialized pointer, contains junk address
    // int number1 = 12;
    // p_number1 = &number1;   // make it point to a valid address

    // cout << "*p_number1: " << *p_number1 << endl;

    // int *p;
    // *p=55;

    // int *pointer = nullptr;
    // pointer = new int;

    // *pointer = 77; // writing into dynamically allocated memory

    // delete pointer;     // after releasing it, the pointer will contain a junk address
    // pointer = nullptr;  // so it is good practice to initialize it to null

    // cout <<pointer << endl;   // 0x0 - null address

    // {
    //     int local_var = 45;           // local_var is in stack memory
    //     int *local_ptr_var = new int; // local_ptr_var is in heap memory
    // }

    // float *p_number7(new float(27.6));

    // cout << *p_number7 << endl;

    // // It is possible to reuse the above pointers
    // int *p_number5 = new int;
    // p_number5 = new int(81); // here we are reallocatiing new memory in the heap
    // cout << *p_number5 << endl;

    // // do not forget to release the memory again
    // delete p_number5;
    // p_number5 = nullptr;

    // int *pointer2(new int(15));

    // delete pointer2;

    // cout<<*pointer2<<endl;

    //  // Case 3: Multiple pointers pointing to same address
    // int *pointer_3(new int(23));
    // int *pointer_4(pointer_3);

    // // cout << "pointer_3 - " << pointer_3 << ", " << *pointer_3 << endl;
    // // cout << "pointer_4 - " << pointer_4 << ", " << *pointer_4 << endl;

    // delete pointer_3;
    // pointer_3=nullptr;

    // // Handle with std::nothrow
    // for (int i(0); i < 100; ++i) {
    //     // When a heap memory allocation using "new" fails,
    //     // the "nothrow" parameter will cause it to set the value of "new" to null.
    //     int *arr = new (std::nothrow) int[10000000];

    //     if (arr != nullptr) {
    //         cout << "Data allocated " << (i + 1) << endl;
    //     } else {
    //         cout << "Data allocation failed " << (i + 1) << endl;
    //     }
    // }

    // int *pointer8=nullptr;

    // delete pointer8;

    // 9. Dynamically allocated arrays

    // int arr[]={1,2};

    // int *p=new int [5];

    // delete []p;

    int size = 5;

    float *scores = new (nothrow) float[size];
    int *students = new (nothrow) int[size]();

    scores[0] = 1;
    scores[1] = 2;
    scores[2] = 3;

    // cout << "sizeof(scores): " << sizeof(students) << endl;
    // cout<< *scores<<endl;
    // cout<< *(scores + 0)<<endl;
    // cout<< *(scores + 1)<<endl;
    // cout<< *(scores + 2)<<endl;
    // cout<< *(scores + 3)<<endl;
    // cout<< *(scores + 4)<<endl;

    // for(int i=0;i<size;++i){
    //     cout<<"value= "<<scores[i]<<": "<<*(scores +i)<<", address: "<<(scores + i)<<endl;
    // }
    // delete [] students;
    // students = nullptr;

    // delete [] scores;
    // scores = nullptr;

    // int levels[5]={1,2,3,4,5};

    // for(auto l: levels){
    //     cout<<"levels: "<<l<<endl;
    // }

    int *plevels = new int[5];

    for (int i = 0; i < size; ++i)
    {
        plevels[i] = (i + 1);
        cout << plevels[i] << " " << endl;
    }

    // const char *message={"Hello World!"};

    // cout<<"Message: "<<message<<endl;
    // cout<<"*Message: "<<*(message + 1)<<endl;
    // cout<<"*Message: "<<*(message + 2)<<endl;
    // cout<<"*Message: "<<*(message + 3)<<endl;

    char messages[] = ("Hello world");
    messages[0] = 'h';
    cout << messages << endl;

    int a[] = {1, 2, 3};

    cout << a << endl;
    cout << (a + 0) << endl;
    cout << (a + 1) << endl;
    cout << (a + 2) << endl;

    cout << *a << endl;
    cout << *(a + 0) << endl;
    cout << *(a + 1) << endl;
    cout << *(a + 2) << endl;

    int x = 1;
    int y = 2;
    int z = 3;
}