#include <iostream>
#include <iomanip>
#include <math.h>
#include <cmath>


using namespace std;

int main()
{

    // // 71----------------------
    // int size;
    // cin>>size;
    // int sequence[size];

    // for(int i=0;i<size;++i){
    //     cin>>sequence[i];
    // }

    // float ratio=(float(sequence[1]) / (float(sequence[0])));
    // bool isGeometric=true;

    // for(int i=2;i<size;++i){
    //     float currentRatio=float(sequence[i]) / (float(sequence[i-1]));
    //     if(currentRatio != ratio){
    //         isGeometric=false;
    //         break;
    //     }
    // }
    // if(isGeometric){
    //     cout<<"Yes"<<endl;
    // }else{
    //     cout<<"No"<<endl;
    // }

    // // 70--------------------------------------
    // int size;
    // cin>>size;

    // int sequnece[size];

    // for(int i=0;i<size;++i){
    //     cin>>sequnece[i];
    // }

    // bool isArithmetic=true;
    // int diffrence=sequnece[1]-sequnece[0];

    // for(int i=2;i<size;++i){
    //     int currentDiffrence=sequnece[i]-sequnece[i-1];

    //     if(currentDiffrence != diffrence){
    //         isArithmetic=false;
    //         break;

    //     }
    // }
    // if(isArithmetic){
    //     cout<<"Yes"<<endl;
    // }else{
    //     cout<<"No"<<endl;
    // }

    // // 72--------------------------------
    // int size;
    // cin >> size;
    // int sequence[size];

    // for (int i = 0; i < size; ++i)
    // {
    //     cin >> sequence[i];
    // }

    // int difference = sequence[1] - sequence[0]; //2
    // int desc=sequence[0]-sequence[1];  //2

    // for (int i = 2; i < size; ++i)
    // {
    //     int Currentdiff = sequence[i] - sequence[i - 1];
    //     int currentdesc=sequence[i - 1]-sequence[i];
    //     if (Currentdiff == difference && difference>0)
    //     {
    //         cout << "Ascending" << endl;
    //         break;
    //     }
    //     else if (Currentdiff == difference && difference<0)
    //     {
    //         cout << "Descending" << endl;
    //         break;
    //     }
    //     else
    //     {
    //         cout << "Neither" << endl;
    //         break;
    //     }
    // }

    // 73------------------------------
    // int size;
    // cin >> size;

    // int sequence[size];

    // for (int i = 0; i < size; ++i)
    // {
    //     cin >> sequence[i];
    // }
    // int askNumber;
    // cin >> askNumber;
    // bool found = false;
    // int lastindex = -1;

    // for (int i = size - 1; i >= 0; --i)
    // {

    //     if (sequence[i] == askNumber)
    //     {
    //         found = true;
    //         lastindex=i;
    //         break;
    //     }
    // }
    // if (found)
    //     {
    //         cout << "Last Occurrence Index:" << lastindex << endl;
    //     }
    //     else
    //     {
    //         cout << "Not Found" << endl;
    //     }

    // // 74-----------------------------
    // int size;
    // cin>>size;

    // int sequence[size];

    // for(int i=0;i<size;++i){
    //     cin>>sequence[i];
    // }

    // bool found=false;
    // int count=0;

    // for(int i=1;i<size;++i){
    //     if(sequence[i] % 2 ==0 && i % 2==0){
    //         count++;
    //         found=true;
    //     }
    // }
    // if(found){
    //     cout<<count<<endl;
    // }else{
    //     cout<<0<<endl;
    // }

    // // 75-----------------------
    // int size;
    // cin>> size;

    // int sequence[size];

    // for(int i=0;i<size;++i){
    //     cin>>sequence[i];
    // }

    // int max=sequence[0];
    // int min=sequence[0];

    // for(int i=1;i<size;++i){
    //     if(sequence[i]>max){

    //         max=sequence[i];
    //     }
    //     if(sequence[i]<min){
    //         min=sequence[i];
    //     }

    // }
    // cout<<"minimum = "<<min<<", "<<"maximum = "<<max<<endl;

    // // 76----------------------------
    // int size;
    // cin >> size;

    // int sequnece[size];

    // for (int i = 0; i < size; ++i)
    // {
    //     cin >> sequnece[i];
    // }

    // int max = sequnece[0];
    // int count = 0;
    // int FirstIndex = -1;
    // int LastIndex = -1;

    // for(int i=0;i<size;++i){
    //     if(sequnece[i]>max){
    //         max=sequnece[i];
    //     }
    // }

    // for(int i=0;i<size;++i){
    //     if(max==sequnece[i]){
    //         count++;
    //         LastIndex=i;

    //     }
    // }
    // for(int i=0;i<size;++i){
    //     if(max==sequnece[i]){
    //         FirstIndex=i;
    //         break;

    //     }
    // }

    // cout << "The maximum element is: " << max << endl;
    // cout << "The number of occurrences of the maximum element is: " << count << endl;
    // cout << "The position of the first maximum element is: " << FirstIndex << endl;
    // cout << "The position of the last maximum element is: " << LastIndex << endl;

    // // 78-----------------------------
    // int size;
    // cin>>size;

    // int arr[size];

    // for(int i=0;i<size;++i){
    //     cin>>arr[i];
    // }

    // int maxcount=0;
    // int mincount=0;

    // for(int i=1;i<size-1;++i){
    //     if(arr[i]<arr[i-1] && arr[i]<arr[i+1]){
    //         mincount++;

    //     }
    //     if(arr[i]>arr[i-1] && arr[i]>arr[i+1]){
    //         maxcount++;
    //     }
    // }

    // cout<<"Local Minima: "<<mincount<<endl;
    // cout<<"Local Maxima: "<<maxcount<<endl;

    // 79------------------------------------
    // int size;
    // cin>>size;

    // int arr[size];

    // for(int i=0;i<size;++i){
    //     cin>>arr[i];
    // }

    // int count=1;

    // for(int i=1;i<size;++i){
    //     if(arr[i] !=arr[i-1]){
    //         count++;

    //     }
    // }
    // cout<<"Distinct Elements: "<<count<<endl;

    // // 80--------------------------
    // int size;
    // cin >> size;

    // int arr[size];

    // for (int i = 0; i < size; ++i)
    // {
    //     cin >> arr[i];
    // }

    // int count = 1;

    // for (int i = 0; i < size; ++i)
    // {
    //     bool found = false;
    //     for (int j = 0; j < i; ++j)
    //     {
    //         if (arr[i] == arr[j])
    //         {
    //             found = true;
    //             break;
    //         }
    //     }
    //     if (!found)
    //     {
    //         count++;
    //     }
    // }

    // cout <<"Distinct Elements: "<<count;

    // // 81-------------------------------
    // int size;
    // cin >> size;
    // int i, k, ans = 0;

    // int arr[size];
    // for (int i = 0; i < size; ++i)
    // {
    //     cin >> arr[i];
    // }

    // i = 1;
    // k = 1;

    // while (i <= size)
    // {
    //     if (arr[i] == k)
    //     {
    //         k++;
    //     }
    //     else
    //     {
    //         k = 1;
    //     }
    //     if (k == 11)
    //     {
    //         ans++;
    //         k = 1;
    //     }
    //     i++;
    // }
    // cout << ans;

    // // 82-----------------------------------
    // int size;
    // cin >> size;

    // int arr[size];

    // for (int i = 0; i < size; ++i)
    // {
    //     cin >> arr[i];
    // }

    // int count = 0;
    // int maxcount = 0;

    // for (int i = 0; i < size; ++i)
    // {
    //     if (arr[i] == 0)
    //     {
    //         count++;
    //         if (count > maxcount)
    //         {
    //             maxcount = count;
    //         }
    //     }
    //     else
    //     {
    //         count = 0;
    //     }
    // }

    // cout << "Length of Maximum Consecutive Zeros: " << maxcount;

    // // 83----------------------------
    // int size;
    // cin>>size;

    // int arr[size];
    // for(int i=0;i<size;++i){
    //     cin>>arr[i];
    // }

    // int length=0;
    // int maxlength=0;

    // for(int i=0;i<size;++i){
    //     if(arr[i]>arr[i-1]){
    //         length++;
    //         if(length>maxlength){
    //             maxlength=length;
    //         }
    //     }else{
    //         length=0;
    //     }
    // }
    // cout<<"Length of Largest Ascending Portion: "<<maxlength;


    // // 86--------------------------
    // int size;
    // cin>>size;

    // int arr[size];

    // for(int i=0;i<size;++i){
    //     cin>>arr[i];
    // }
    // bool found=false;

    // for(int i=0;i<size;++i){
    //     if(arr[i]==arr[size-1-i]){
    //         found=true;
    //     }else{
    //         found=false;
    //     }
    // }
    // if(found){
    //     cout<<"Symmetrical";
    // }else{
    //     cout<<"Not Symmetrical";
    // }


    // // 87-----------------------
    // int size;
    // cin>>size;

    // int arr[size];

    // for(int i=0;i<size;++i){
    //     cin>>arr[i];
    // }
    // int x;
    // cin>>x;
    // int max=arr[0];
    // int min=arr[0];
    // int sum=0;
   

    // for(int i=0;i<size;++i){
    //     if(arr[i]>max){
    //         max=arr[i];
    //     }
    //     if(arr[i]<min){
    //         min=arr[i];
    //     }
    //     sum+=arr[i];
        

    // }
    // double ave = (double)sum / size;


    // int a=abs(x-min);
    // int b=abs(x-max);
    // int c=abs(x-ave);

    // if(a<b && a<c){
    //     cout<<"Minimum";
    // }
    // if(b<a && b<c){
    //     cout<<"Maximum";
    // }
    // if(c<a && c<b){
    //     cout<<"Mean";
    // }



    // // 91------------------------------
    // int size,temp;
    // cin>>size;

    // int arr[size];

    // for(int i=0;i<size;++i){
    //     cin>>arr[i];
    // }

    // temp=arr[size-1];

    // for(int i=size-1;i>0;i--){
    //     arr[i]=arr[i-1];
    // }
    // arr[0]=temp;

    // for(int i=0;i<size;i++){
    //     cout<<arr[i]<<" ";
    // }

    // // 89-----------------------------
    // int N;
    // cin>>N;

    // int arr[N];

    // for(int i=0;i<N;++i){
    //     cin>>arr[i];
    // }
    // int k;
    // cin>>k;


    // for(int i=0;i<N;++i){
    //     if(i==k){
          
    //     }
    // }


    // for(int i=N;i>0;i--){
    //     cout<<arr[i]<<" ";
    // }



    // 92-------------------------
    int N;
    cin>>N;

    double arr[N];

    for(int i=0;i<N;++i){
        cin>>arr[i];
    }
    
    double newarr[100];
    newarr[0]=arr[0];
    newarr[N-1]=arr[N-1];
    
    for(int i=0;i<N-1;++i){
        double sum=arr[i-1]+arr[i+1];
        newarr[i]=sum/2;

    }

    for(int i=0;i<N;++i){
        cout<<newarr[i]<<" ";
    }
    


}