#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;

int main(){

    // -----------Arrays--------

    // int scores[10];
    // scores[0]=2;
    // scores[2]=15;

    // for (int i=0;i<10;++i){
    //     scores[i]=i*i;
    // }

    //     for (int i=0;i<10;++i){
    //     cout<<scores[i]<<" ";
    // }

    // char text[]={'h','e','l','l','o'};

    // for(int i=0;i<8;++i){
    //     cout<<text[i];
    // }
    // cout<<endl;



    // bool logic[]={true,false,true,true,false};

    // cout<<std::boolalpha;

    // for(int i=0;i<5;++i){
    //     cout<<logic[i]<<" ";
    // }
    // cout<<endl;


    // double temperature[]={2.5,36.6,35.324434};

    // for(int i=0;i<4;++i){
    //     cout<<temperature[i]<<" ";
    // }

    // cout<<endl;


    // long double scores[]={1,2,34};

    // cout<<sizeof(scores)<<endl;
    // cout<<sizeof(scores[2])<<endl;
    // cout<<sizeof(scores)/sizeof(scores[0])<<endl;


    // size_t nums[]={1,2,3,4,5};

    // cout<<sizeof(nums[0])<<endl;
    // cout << sizeof(size_t) << endl;

    // double salaries[5]={12.4,23.56,56.45};

    // for (size_t i(0);i<sizeof(salaries)/sizeof(double);++i){
    //     cout<<"[salaries"<<i<<"]:"<<salaries[i]<<endl;
    // }


    // char classes[]={3,3,3,3,3};

    // for(auto value : classes){
    //     cout<<value<<" ";
    // }


    // for (int N:{1,2,3,6,7}){
    //     cout<<N<<" ";
    // }


    // char birds[]={12,3,45,35,95};

    // int sum(0);


    // for(auto element : birds){
    //     sum+=element;
    // }

    // cout<<sum<<endl;

    // int scores[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10,23,4,5,4,5};    

    // int count =sizeof(scores)/sizeof(scores[0]);

    // cout<<count;


    char message[]={'L','e','m','a','n','\0'};

    for(auto c:message){
        cout<<c<<" ";
    }

    message[1]='i';

    cout<<message<<endl;


    char message2[]={"Memmedli Leman!"};

    cout<<message2<<endl;

    cout<<"size_of:"<<sizeof(message2)<<endl;

    int numbers[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};

    numbers[-1505]=15;

    cout<<numbers[-1505]<<endl;





    
    
}