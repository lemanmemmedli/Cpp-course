#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;

int main()
{

    // cin>> limit;

    // for (unsigned int i=5; i<=15 ; i++){
    //     cout << "i:"<< i  << endl;
    // }
    // size_t i(0);
    // for (; i<10 ; i++){
    //      cout << i <<endl;
    // }
    // cout << i ;
    // cout <<sizeof(unsigned long int)<<endl;
    // cout <<sizeof(size_t)<<endl;

    // const size_t count=12;
    // for (size_t i(0); i<count ;i++)
    // {
    //    cout<< i <<endl;
    // }

    // while---------------------
    // int count = 15;
    // int i = 0;

    // while (i < 15){
    //     cout << i << " ";
    //     i++;
    // }


    // int n;
    // cin>> n;
    // int i=0;

    // while(i<n){
    //     cout<<i <<" " <<endl;
    //     i++;
    // }

    // int number;
    // int sum=0;

    // while (cin>> number){
    //     sum=sum+ number;
    //     cout << "sum : " <<sum<<endl;
    // }


    // int i=1;

    // while(i<6){
    //     cout << "Hello World" <<endl;
    //     i++;
    // }

    // int n;
    // cin >> n;

    // while(5==n+1){
    //     cout << n <<endl;
    //     n++;
    // }


    // do While----------------------
    // int y=0;

    // do
    // {
    //     cout << y << endl;
    //     y--;
    // } while (y>0);


    // nested loops-----------------


    // for (int i=0;i<5; i++){
    //     for (int j=-5;j<0;j++){
    //         for (int k=0; k<5; k++){
    //         cout<< "i: " <<i << " " << "j: " <<j << " " << "k :" <<k<<endl;
    //     }
    //     }
    // }

    for (int i=10; i<100; i++){
        int first =i/10;
        int second=i%10;
        if((first + second)%2 ==0){
            cout << i << " ";
        }
    }
    
}