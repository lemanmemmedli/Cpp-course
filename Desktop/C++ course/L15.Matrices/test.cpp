#include <iostream>

using namespace std;


int main(){

    int x[3][4]={
        {1,2,3,8},
        {4,5,6,9},
        {7,8,9,10}
    };
    cout<<x[1][3]<<endl;

    int y[2][3]={
        {1,2,3},
        {4,5,6}
    };

    cout<<y[1][1]<<endl;

    int a[3]={1,2,3};

    cout<<a[2]<<endl;

    int b[3][3]={1,2,3,4,5,6,7,8,9};
    cout<<b[1][2]<<endl;

    int d[3][4]={};

    d[0][0]=3;
    d[0][1]=4;

    cout<<d[1][3]<<endl;

    int f[3][4]={
        {1,2,3,4},
        {5,6,7,8},
        {9,10,11,12}
    };

    for(int i=0;i<3;++i){
        for(int j=0;j<4;++j){
            cout<<f[i][j]<<" ";
        }
        cout<<endl;
        
    }

    for(int i=0;i<3;++i){
        for(int j=0;j<4;++j){
            cout<<x[i][j]<<" ";
        }
        cout<<endl;
    }

    // 3D matrices

    int k[2][3][4]={
        {
            {1,2,3,4},
            {5,6,7,8},
            {9,10,11,12}
        },
        {
            {1,2,3,4},
            {5,6,7,8},
            {9,10,11,12}
        }

    };
    cout<<k[1][2][2]<<endl;

    int matrix_3[2][3][4] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23};
    cout<<matrix_3<<endl;

    for(int i=0;i<2;++i){
        for(int j=0;j<3;++j){
            for(int z=0;z<4;++z){
                cout<<k[i][j][z]<<" ";
            }
            cout<<endl;
        }
        cout<<endl;
    }
    

   



}