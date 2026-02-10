#include <iostream>
#include <iomanip>
#include <cmath>
#include <cstring>

using namespace std;

int main()
{
  // // 96-----------------------
  // int a,b;
  // cin>>a;
  // cin>>b;

  // int *ptrA=&a;
  // int *ptrB=&b;

  // cout<<"Value of ptrA: "<<*ptrA<<endl;
  // cout<<"Value of ptrB: "<<*ptrA<<endl;

  // // 99--------------------
  // int num1,num2;

  // cin>>num1;
  // cin>>num2;

  // int *ptr1=&num1;
  // int *ptr2=&num2;

  // int sum=(*ptr1)+(*ptr2);
  // cout<<"Sum of 5 and 7 is: "<<sum<<endl;

  // // 100--------------------
  // int length=5;
  // int arr[]={10,15,5,7,8};
  // int *ptr;
  // ptr = arr;
  // int sum=0;
  // for (int i=0;i<length;++i){
  //     sum+=*(ptr+i);

  // }

  // cout<<"Sum of array elements: "<<sum<<endl;

  // // 101-----------------------------
  // char arr[100];
  // int *ptr;

  // for (int i=0;i<100;i++){
  //     cin.getline(str, sizeof(str));
  // }

  // // 103--------------------------
  // int arr[5]={10, 20, 30, 40, 50};
  // int *ptr;
  // ptr=arr;

  // int right=4;
  // int left=0;

  // while(right>left){
  //     swap(*(ptr+right),*(ptr+left));
  //     left++;
  //     right--;
  // }

  // for(int i=0;i<5;i++){
  //     cout<<arr[i]<<endl;
  // }

  // // 101--------------------------
  // char text[100];
  // char *ptr;
  // cin.getline(text,sizeof(text));
  // ptr=text;

  // int length=0;

  // while(*ptr != '\0'){
  //     length++;
  //     ptr++;

  // }
  // cout<<"Length of the string: "<<length<<endl;

  // // 102--------------------------------
  // char source[100];
  // char destination[100];
  // char *ptrSource;
  // char *ptrDestination;

  // cin.getline(source,sizeof(source));
  // ptrSource=source;
  // ptrDestination=destination;

  // while(*ptrSource != '\0'){
  //       *ptrDestination=*ptrSource;

  //       ptrSource++;
  //       ptrDestination++;
  // }
  // *ptrDestination='\0';
  // cout<<"Copied string: "<<destination<<endl;

  // 104---------------------------------
  char str1[100];
  char str2[100];

  char *pointerS1;
  char *pointerS2;

  cin.getline(str1,sizeof(str1));
  cin.getline(str2,sizeof(str2));

  
  pointerS1 = str1;
  pointerS2 = str2;


  int len1=strlen(str1);
  pointerS1=str1+len1;

  



  while (*pointerS1 == '\0')
  {
    *pointerS1=*pointerS2;
    pointerS1++;
    pointerS2++;
  }
  pointerS1='\0';
  
  

  cout << "Concatenated string: " << str1<< endl;
}