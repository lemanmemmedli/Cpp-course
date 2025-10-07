#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;

int main()
{

    // 48----------------------
    // int N;
    // int counter=0;
    // cin >> N;

    // while(N>0){
    //     counter++;
    //     N=N/10;
    // }
    // cout << counter <<endl;

    // // 50-------------------------

    // int N;
    // int odd=0;
    // cin >> N;

    // while(N>0){
    //     int tail=N%10;
    //     if(tail%2 !=0){
    //         odd++;
    //     }
    //     N=N/10;
    // }
    // cout << odd <<endl;

    // // 54--------------------
    // int N;
    // cin >> N;

    // for (int i = 1; i <= N; ++i){

    //     int number=i;
    //     bool print =true;

    //     while (number>0){
    //         int tail= number %10;

    //         if(tail==0){
    //             print =false;
    //             break;

    //         }
    //         else{
    //             if(i%tail !=0){
    //                 print=false;
    //                 break;
    //             }
    //         }
    //         number=number/10;

    //     }
    //     if(print ==true){
    //         cout << i << " ";
    //     }

    // }
    // cout << endl;

    // 49----------------
    // int N;
    // cin>>N;
    // int sum=0;

    //     while (N>0)
    //     {
    //     int tail=N%10;
    //     sum=sum+tail;
    //     N=N/10;
    //     }

    //     cout<<sum<<endl;

    // // 50-----------------------
    // int N;
    // cin>>N;

    // while (N>0)
    // {
    //     int tail=N%10;
    //     if(tail)

    //     N=N/10;
    // }

    // 52------------------
    // int N;
    // cin >> N;
    // int max=0;
    // if (N == 0)
    // {
    //     max = 0;
    // }
    // else
    // {
    //     while (N > 0)
    //     {
    //         int tail = N % 10;
    //         if (tail>max)
    //         {
    //             max = tail ;
    //         }
    //         N = N / 10;
    //     }
    // }

    // cout << max << endl;

    // // 53-----------1ci usul-----------------
    // int N;
    // cin >> N;
    // int max = 0;
    // int temp=N;

    //     while (temp > 0)
    //     {
    //         int tail = temp % 10;
    //         if (tail > max)
    //         {
    //             max = tail;
    //         }
    //         temp = temp / 10;
    //     }

    //     int count=0;
    //     while(N>0){
    //         int tail = N % 10;
    //         if (tail == max)
    //         {
    //             count++;
    //         }
    //         N = N / 10;
    //     }
    // cout << count << endl;
    // // ----------------2ci usul-------------------
    //     int N;
    //     cin>> N;
    //     int maxdigit=0;
    //     int count=0;

    //     while(N>0){
    //         int tail=N%10;
    //         if(tail>maxdigit){
    //            maxdigit=tail;
    //            count=1;

    //         }
    //         else if(tail==maxdigit){
    //             count++;
    //         }
    //         N=N/10;
    //     }
    //     cout << count << endl;

    // 55------------------------------------
    // int N;
    // cin >> N;
    // bool found = false;

    // for (int i = 1; i * i <= N; i++)
    // {
    //     for (int j = 1; j * j <= N; j++)
    //     {
    //         if (i != j && i * i + j * j == N)
    //         {
    //             found = true;
    //             break;
    //         }
    //         if (found)
    //         {
    //             break;
    //         }
    //     }
    // }
    // if (found)
    // {
    //     cout << "YES" << endl;
    // }
    // else
    // {
    //     cout << "NO" << endl;
    // }

    // 56-----------------------
    // int N;
    // cin >> N;

    // for (int i=1;i*i<=N;i++){
    //     for(int j=i+1;j*j<=N;j++){
    //         if(i != j && i*i + j*j<=N){
    //            int result=i*i+j*j;
    //            cout<<i <<"^2 "<<"+ "<<j << "^2"<<" "<<"="<<" "<<result<<endl;
    //         }
    //     }
    // }

    // // 57------------------------
    // int A, B;
    // cin >> A >> B;

    // while (A > 0 && B > 0)
    // {
    //     if (B % A == 0)
    //     {
    //         cout << A << endl;
    //         break;
    //     }
    //     else
    //     {
    //         int res = B-A;
    //         cout << res << endl;
    //         break;
    //     }
    // }

    // // 58---------------------
    // int A,B,lcm;
    // cin >> A>>B;

    // for(int i=A*B; i>0;i--){
    //     if(i%A==0 && i%B==0 ){
    //         lcm=i;
    //     }
    // }
    // cout << lcm <<endl;

    // 59----------------------------
    int a, b,m=0, N, lcm;
    cin >> N;

    for (int i = 1; i <= N;i++)
    {
        for (int j = 2; j <= N; j++)
        {
            m=(i*j)*m;
            if(m%i==0 && m%j==0){
                lcm=m;
            }

        }
    }
    cout<<lcm<<endl;

    // // 60-----------------------
    // int N;
    // cin >> N;
    // bool found=false;
    // for (int i=1;i<=N;i++){
    //     if(N%i==0){
    //         cout << i <<" ";
    //     }else if(N%i !=0){
    //         found=false;

    //     }
    // }

    // 51-----------------------------
    // int NN,N,M = 0;
    // cin >> N;
    // NN = N;

    // while (N != 0)
    // {
    //     M = M * 10 + N % 10;
    //     N /= 10;
    // }
    // if (NN == M)
    // {
    //     cout << "YES" << endl;
    // }else
    // {
    //     cout << "NO" << endl;
    // }
}