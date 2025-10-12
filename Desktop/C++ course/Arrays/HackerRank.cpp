#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;

int main(){

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
   

    // 70--------------------------------------
    int size;
    cin>>size;

    int sequnece[size];

    for(int i=0;i<size;++i){
        cin>>sequnece[i];
    }

    bool isArithmetic=true;
    int diffrence=sequnece[1]-sequnece[0];

    for(int i=2;i<size;++i){
        int currentDiffrence=sequnece[i]-sequnece[i-1];

        if(currentDiffrence != diffrence){
            isArithmetic=false;
            break;

        }
    }
    if(isArithmetic){
        cout<<"Yes"<<endl;
    }else{
        cout<<"No"<<endl;
    }

}