#include <iostream>
#include <string>

using namespace std;


void  max_num(double input1,double input2,double *output){
    if(input1>input2){
        *output=input1;
    }else{
        *output=input2;
    }

}
int sum(int a,int b){
    int res=a+b;
    cout<<&res<<endl;
}

string add_string(string s1,string s2){
    string res=s1+s2;

    cout<<(long int)(&res)<<endl;

    return res;
}
int main()
{
    // int x=20;
    // const int &rX=x;
    // x=30;
    // cout<<rX<<endl;
    // cout<<x<<endl;

    // double output;
    // double input1=20.5;
    // double input2=30.8;

    // max_num(input1,input2,&output);
    // cout<<output<<endl;


    // int x(5);
    // int y(6);

    // int result=sum(x,y);

    // cout<<&result<<endl;


    string s1="Hello";
    string s2("World");

    string result=add_string(s1,s2);

    cout<<(long long int)(&result)<<endl;
    cout<<result<<endl;

}