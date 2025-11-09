#include <iostream>
#include <cstring>
#include <math.h>
#include <iomanip>

using namespace std;
// ---------128------------
double volume(double r)
{
    double p = 3.14172;
    double result = (4.0 / 3.0) * p * pow(r, 3);

    return result;
}
// -----129-----------
int ncube(int n)
{
    int cube = n * n * n;
    return cube;
}
// ------130--------------
int area(int a, int b)
{
    int area = a * b;
    return area;
}

int perimeter(int a, int b)
{
    int perimeter = a + b;
    return perimeter;
}
// ------------------131--------
double miles(double n)
{
    double miles = n * 0.621371;

    return miles;
}

// -------------132----------
double total(double a, double b, double c, double d)
{
    double total = a + b + c + d;
    return total;
}

double average(double a, double b, double c, double d)
{
    double average = (a + b + c + d) / 4;
    return average;
}
// 133------------------------
int ascii(char n)
{
    char ascii = int(n);
    return ascii;
}

// 134-------------------------
double meter(double N)
{
    double meter = N / 100;
    return meter;
}
double kilometer(double N)
{
    double kilometer = N / 100000;
    return kilometer;
}
// ----135----------------------
void oddeven(int N)
{
    if (N % 2 == 0)
    {
        cout << "The entered number is even" << endl;
    }
    else
    {
        cout << "The entered number is odd" << endl;
    }
}

// 136----------------------------
int fact = 0;
int divise;
int calcfactorial(int N)
{
    for (int i = 1; i < N; i++)
    {
        for (int j = i; i > 0; j++)
        {

            fact += i * j;
        }

        divise = fact / i;
    }
    return divise;
}

int sum = 0;
int sumfact(int N)
{
    sum += divise;
    return sum;
}
// 137-------------------------
void binary(int N)
{
    
    int binary[32];
    int i=0;
    while (N > 0)
    {
        binary[i] = N % 2;
        N=N/2;
        i++;
    }

    for(int j=i-1;j>=0;j--){
        cout<<binary[j];
    }

    
}

int main()
{

    // // 128-----------------------
    // double r;
    // cin>>r;

    // cout<<"The volume of a sphere is: "<<volume(r)<<endl;

    // // 129---------------------------
    // double n;
    // cin>>n;

    // cout<<ncube(n)<<endl;

    // // 130-----------------
    // int a,b;
    // cin>>a>>b;

    // cout<<"The area of the rectangle is: "<<area(a,b)<<endl;
    // cout<<"The perimeter of the rectangle is: "<<perimeter(a,b)<<endl;

    // // 131-------------------------------
    // double n;
    // cin>>n;

    // cout<<fixed<<setprecision(4);
    // cout<<miles(n)<<"Miles/hr"<<endl;

    // // 132---------------------------
    // double a,b,c,d;
    // cin>>a>>b;
    // cin>>c>>d;

    // cout<<"The total of four numbers is : "<<total(a,b,c,d)<<endl;
    // cout<<"The average of four numbers is : "<<average(a,b,c,d)<<endl;

    // 133-----------------
    // char n;
    // cin>>n;

    // cout << "The ASCII value of " << n << " is: " << ascii(n) << endl;
    // cout << "The character for the ASCII value " << ascii(n) << " is: " << n << endl;

    // // 134--------------------------
    // double N;
    // cin>>N;

    // cout<<"The distance in meter is: "<<meter(N)<<endl;
    // cout<<"The distance in kilometer is: "<<kilometer(N);

    // // 135--------------------------
    // int N;
    // cin>>N;

    // oddeven(N);

    // // 136--------------------------
    // int N;
    // cin>>N;

    // sumfact(N);

    // // 137-----------------------------
    // int N;
    // cin >> N;
    
    // binary(N);
    // cout << endl;
}
