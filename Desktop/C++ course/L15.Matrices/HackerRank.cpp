#include <iostream>

using namespace std;

int main()
{

    // 146----------------------------
    /*int m,n;
    cin>>m>>n;

    int x[m][n];
    int maxnum=-1;
    int maxi=-1;
    int maxj=-1;

    for(int i=0;i<m;++i){
        for(int j=0;j<n;++j){
            cin>>x[i][j];
        }
    }

        for(int i=0;i<m;++i){
        for(int j=0;j<n;++j){
            if((i+j)==0) continue;
            if(x[i][j] % (i+j) ==0){
                if(maxnum<x[i][j]){
                    maxnum=x[i][j];
                    maxi=i;
                    maxj=j;
                }
            }
        }

    }
    cout<<"Value: "<<maxnum <<" "<<maxi<<" "<<maxj<<endl;
    */

    // // 147----------------------------
    // int m,n;
    // cin>>m>>n;
    // int x[m][n];
    // int count=0;

    // for(int i=0;i<m;++i){
    //     for(int j=0;j<n;++j){
    //         cin>>x[i][j];
    //     }
    // }

    //     for(int i=0;i<m;++i){

    //     for(int j=0;j<n;++j){
    //      int b= x[i][j];
    //         if(b != x[i][j+i]){
    //             count=count+1;
    //             break;
    //         }
    //     }

    // }
    // cout<<count<<endl;

    // // 148----------------------------
    // int n;
    // cin >> n;

    // int x[n][n];

    // for (int i = 0; i < n; ++i)
    // {
    //     for (int j = 0; j < n; ++j)
    //     {
    //         cin >> x[i][j];
    //     }
    // }

    // for (int i = 0; i < n; ++i){
    //     for (int j = 0; j < n; ++j){
    //         if(j>=i){
    //             x[i][j]=0;
    //         }
    //     }
    // }
    //     for (int i = 0; i < n; ++i)
    // {
    //     for (int j = 0; j < n; ++j)
    //     {
    //         cout<<x[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }

    // 149-------------------------------
    int n;
    cin>>n;

    int x[n][n];
    int Msum=0;
    int Ssum=0;

    for(int i=0;i<n;++i){
        for(int j=0;j<n;++j){
            cin>>x[i][j];
        }
    }

        for(int i=0;i<n;++i){
            Msum+=x[i][i];
        }

        for(int i=0;i<n;++i){
        Ssum+=x[0][n-1-i];           
        
    }



}