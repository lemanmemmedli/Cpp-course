#include <iostream>
#include <iomanip>
#include <cmath>
#include <math.h>

using namespace std;

int main()
{

    // int number;
    // cin>>number;
    // if (number % 2 ==0){
    //     cout << "The number is even : " << number <<endl;
    // }else{
    //     cout << "The number not even : "<< number <<endl;;
    // }

    // // 5 ----------------
    // int number;
    // cin >> number;
    // int a;
    // int b;
    // a = number / 10;
    // b = number % 10;
    // cout << "Left digit: " << a << endl;
    // cout << "Right digit: " << b << endl;

    // // 6 ------------------
    // int number;
    // cin>>number;
    // int a = number /10;
    // int b = number %10;
    // cout << "Sum of the digits: " << a+b << endl;
    // cout << "Product of the digits: " << a*b << endl;

    // // 7 -------------------
    // int number;
    // cin >> number;

    // int a=number /10;
    // int b=number %10;
    // int c;
    // c=a;
    // a=b;
    // b=c;
    // if (a%10==0){
    //     cout << b << endl;

    // }else{
    //  cout << a << "" << b << endl;
    // }

    // // 8 -----------
    // int number;
    // cin >> number;
    // int a=number / 100;
    // cout << a << endl;

    // // 9 ------------
    // int number;
    // cin >> number;
    // int a=number % 10;
    // int b=(number / 10) % 10;
    // cout << "Last digit (units): " << a <<endl;
    // cout << "Middle digit (tens): " << b <<endl;

    // // 10 ---------------
    // int number;
    // cin >> number;
    // int a=number % 10;
    // int b=(number / 10) % 10;
    // int c=number /100;
    // cout << "Sum of the digits: " << a+b+c <<endl;
    // cout << "Product of the digits: " << a*b*c <<endl;

    // // 3 ----------------
    // int a;
    // int b;
    // cin >> a >> b;
    // int X=a;
    // int Y=b;;

    // if (a > b)
    // {
    //     cout << (a = X) << " " << (b = Y);
    // }else{
    //     cout << (a = Y) << " " << (b = X);
    // }

    // // 11 ----------------
    // int number ;
    // cin >> number;
    // int a=number % 10;
    // int b=(number / 10) % 10;
    // int c=number /100;
    // cout << a << b << c << endl;

    // // 12 --------------------
    // int number ;
    // cin >> number;
    // int a=number % 10;
    // int b=(number / 10) % 10;
    // int c=number /100;
    // cout << b << a << c << endl;

    // // 13--------------------
    // int number ;
    // cin >> number;
    // int a=number % 10;
    // int b=(number / 10) % 10;
    // int c=number /100;
    // cout << a << c << b << endl;

    // // 14--------------------
    // int number;
    // cin >> number;
    // int a = number % 10;
    // int b = (number / 10) % 10;
    // int c = number / 100;
    // cout << b << c << a << endl;

    // // 15 -----------------------
    // int number;
    // cin >> number;
    // int a = number % 10;
    // int b = (number / 10) % 10;
    // int c = number / 100;
    // cout << c << a << b << endl;

    // // 16-------------------
    // int number;
    // cin >> number;
    // int c = (number / 100)%10;
    // cout << c << endl;

    // 17-------Palindrome---------
    // int number;
    // cin >> number;
    // int a = number % 10;
    // int b = (number / 10) % 10;
    // int c = (number / 100) % 10;
    // int d = number / 1000;

    // if (a == d && b == c)
    // {
    //     cout << "Palindrome" << endl;
    // }
    // else
    // {
    //     cout << "Not Palindrome" << endl;
    // }

    // 18-----------------------
    // int number;
    // cin >> number;
    // int a = number % 10;
    // int b = (number / 10) % 10;
    // int d = (number / 1000) % 10;
    // int e= number /10000;

    // cout <<( (e+d) - (a+b)) << endl;

    // 19---------------------
    // int number;
    // cin >> number;
    // int a = number % 10;
    // int b = (number / 10) % 10;
    // int d = (number / 1000) % 10;
    // int e= number /10000;

    // if (a == e && b == d)
    // {
    //     cout << "Palindrome" << endl;
    // }
    // else
    // {
    //     cout << "Not Palindrome" << endl;
    // }

    // 20---------------------
    // int number;
    // cin >> number;
    // int a = number % 10;
    // int b = (number / 10) % 10;
    // int c=(number /100) %10;
    // int d = (number / 1000) % 10;
    // int e= number /10000;

    // int result=pow(a,2) + pow(b,2) + pow(c,2) + pow(d,2) + pow (e,2);
    // cout << result << endl;

    // 23------------------------
    // int number;
    // cin >> number;
    // int a = number % 10;
    // int b = (number / 10) % 10;
    // int c = (number / 100) % 10;
    // int d = (number / 1000) % 10;
    // int e = number / 10000;

    // if (a==b || a==c || a==d || a==e || b==c || b==d || b==e || c==d || c==e || d==e)
    // {
    //     cout << "tekrar var" << endl;
    // }
    // else
    // {
    //     cout << "tekrar yoxdur" << endl;
    // }

    // 24---------------------

    // int number;
    // cin >> number;
    // int a = number % 10;
    // int b = (number / 10) % 10;
    // int c = (number / 100) % 10;
    // int d = number / 1000;

    // if (a == b || a == c || a == d  || b == c || b == d || c == d)
    // {
    //     cout << "Duplicate Digits Found" << endl;
    // }
    // else
    // {
    //     cout << "All Digits are Different" << endl;
    // }

    // 25---------------
    // int number;
    // cin >> number;
    // int a = number % 10;
    // int b = (number / 10) % 10;
    // int c = (number / 100) % 10;
    // int d = number / 1000;

    // if (a==3 || b==3 || d==3 || c==3){
    //     cout << "Digit 3 Found" << endl;
    // }else{
    //     cout << "Digit 3 Not Found" << endl;
    // }

    // 26------------------------
    // int number;
    // cin >> number;
    // int a = number % 10;
    // int b = (number / 10) % 10;
    // int c = (number / 100) % 10;
    // int d = number / 1000;

    // if ( (d==3 && c == 7) || (c==3 && b==7) || (b==3 && a==7)){
    //     cout << "Consecutive Digits Found" << endl;
    // }else{
    //     cout << "Consecutive Digits Not Found" << endl;
    // }

    // // 27---------------------
    // int number;
    // cin >> number;
    // int d = number % 10;
    // int c = (number / 10) % 10;
    // int b = (number / 100) % 10;
    // int a = number / 1000;
    // int result = (pow(a, 4)) + (pow(b, 4)) + (pow(c, 4)) + (pow(d, 4));

    // if(result==number){
    //     cout << "Armstrong Number" << endl;
    // }else{
    //     cout << "Not Armstrong Number" << endl;
    // }

    // // 28--------------------------
    // int number;
    // cin >> number;
    // int d = number % 10;
    // int c = (number / 10) % 10;
    // int b = (number / 100) % 10;
    // int a = number / 1000;

    // int result = a + b + c + d;
    // if (result % 2 == 0 && result % 3 == 0)
    // {
    //     cout << "Multiple of 2 and 3" << endl;
    // }
    // else
    // {
    //     cout << "Not a Multiple of 2 and 3" << endl;
    // }

    // // 29---------------------
    // int number;
    // cin >> number;
    // int d = number % 10;
    // int c = (number / 10) % 10;
    // int b = (number / 100) % 10;
    // int a = number / 1000;

    // if ((number % a==0) && (number % b==0) &&(number % c==0) && (number % d==0)){
    //     cout<< "Divisible by All Digits" <<endl;
    // }else{
    //     cout << "Not Divisible by All Digits";
    // }

    // 30-------------------
    //  float X;
    //  float Y;
    //  float Z;
    //  cin>>X >>Y >>Z;
    // if (X>Y && X>Z){
    //     cout << X << endl;
    // }else if (Y>X && Y>Z){
    //     cout << Y << endl;
    // }else if(Z>X && Z>Y){
    //     cout << Z << endl;
    // }

    // 31----------------------
    // float X;
    // float Y;
    // float Z;
    // cin >> X >> Y >> Z;
    // if (X < Y && X < Z)
    // {
    //     cout << X << endl;
    // }
    // else if (Y < X && Y < Z)
    // {
    //     cout << Y << endl;
    // }
    // else if (Z < X && Z < Y)
    // {
    //     cout << Z << endl;
    // }

    // // 32------------------
    // float X;
    // float Y;
    // float Z;
    // cin >> X >> Y >> Z;

    // if (Z >= Y && Z >= X && Y>=X)
    // {
    //     cout << (X*2) << (Y*2) << (Z*2) << endl;
    // }
    // else if(X<0 || Y<0 || Z<0){
    //     cout << -X << -Y << -Z <<endl;
    // }

    // 33---------------------
    // float  A;
    // float  B;
    // cin >> A >> B;
    //  if (A>B){
    //     cout << A << endl;
    //  }else {
    //     cout<< A << " " << B << endl;
    //  }

    // 34--------------------
    // float X;
    // float Y;

    // cin >> X >> Y;

    // if (X<Y){
    //     X = ((X/2) +  (Y/2));
    //     Y=(Y*2);
    //     cout << X << " " << Y << endl;
    // }else if(Y<X){
    //     Y = ((X/2) +  (Y/2));
    //     X=(X*2);
    //     cout << X << " " << Y << endl;
    // }

    // 35-------------------
    // float X;
    // float Y;
    // cin >> X >> Y;

    // if (X<= Y){
    //     cout << 0 << " " << Y <<endl;
    // }else {
    //     cout << X << " " << Y << endl;
    // }

    // // 36--------------------
    // float A;
    // float B;
    // float C;
    // cin >> A >> B >> C;

    // if ((1 < A && A < 3))
    // {
    //     cout << A << endl;
    // }
    //  if ((1 < B && B < 3))
    // {
    //     cout << B << endl;
    // }
    // if ((1 < C && C < 3))
    // {
    //     cout << C << endl;
    // }
   
    // else
    // {
    //     cout << "No Numbers Found" << endl;
    // }


    // 37-----------------------
    // float A,B,C,D;
    // cin >>A >>B >>C >>D;
    // if (D<=C && C<=B && B<=A){
    //     cout << A << " " << A << " " << A << " " <<A;

    // }else if (A<B && B<C && C<D ){
    //     cout << A << " " << B << " " << C << " " <<D;
    // }else{
    //     cout << (pow(A,2)) << " " << (pow(B,2)) << " "<<(pow(C,2)) << " " << (pow(D,2)) ;
    // }

    // 38-----------------
    float X,Y;
    cin >> X >> Y;

    if (X<0 && Y<0){
        cout << -X << " " << -Y <<endl;
    }else if (X<0 || Y<0){
        cout << X+0.5 << " " << Y+0.5 << endl;
    }else if (X>0  && Y >0 && X<0.5 || X>2 && Y<0.5 || Y>2) {
        cout << X/10 << " " << Y/10 <<endl;

    }else {
        cout <<X << " " << Y << endl;
    }
}