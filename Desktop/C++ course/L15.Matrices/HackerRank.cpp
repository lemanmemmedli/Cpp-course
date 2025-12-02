#include <iostream>
#include <iomanip>
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
    // int m, n;
    // cin >> m >> n;
    // int x[m][n];
    // int count = 0;

    // for (int i = 0; i < m; ++i)
    // {
    //     for (int j = 0; j < n; ++j)
    //     {
    //         cin >> x[i][j];
    //     }
    // }

    // for (int i = 0; i < m; ++i)
    // {
    //     for (int j = 0; j < n; ++j)
    //     {
    //         bool flag = true;
    //         for (int i1 = 0; i1 < m; ++i1)
    //         {
    //             for (int j1 = 0; j1 < n; ++j1)
    //             {
    //                 if (i1 < i || (i1 == i && j1 < j))
    //                 {
    //                     if (x[i][j] == x[i1][j1])
    //                     {
    //                         flag = false;
    //                     }
    //                 }
    //             }
    //         }
    //         if (flag)
    //         {
    //             count++;
    //         }
    //     }
    // }
    // cout<<count;

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

    // // 149-------------------------------
    // int n;
    // cin>>n;

    // int x[n][n];
    // int Msum=0;
    // int Ssum=0;

    // for(int i=0;i<n;++i){
    //     for(int j=0;j<n;++j){
    //         cin>>x[i][j];
    //     }
    // }

    //     for(int i=0;i<n;++i){
    //         Msum+=x[i][i];
    //     }

    //     for(int i=0;i<n;++i){
    //     Ssum+=x[0][n-1-i];

    // }

    // // 150-----------------------
    // int n;
    // cin>>n;

    // int x[n][n];

    // for(int i=0;i<n;++i){
    //     for(int j=0;j<n;++j){
    //         cin>>x[i][j];
    //     }
    // }

    //     for(int i=0;i<n;++i){
    //     for(int j=i+1;j<n;++j){
    //         swap(x[i][j],x[j][i]);
    //     }
    // }

    //     for(int i=0;i<n;++i){
    //     for(int j=0;j<n;++j){
    //         cout<<x[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }

    // // 151--------------------------
    // int n,m;
    // cin>>n>>m;

    // int x[n][m];

    // for(int i=0;i<n;++i){
    //     for(int j=0;j<m;++j){
    //         cin>>x[i][j];
    //     }
    // }

    // for(int i=0;i<n;++i){
    //    int sum=0;
    //     for(int j=0;j<m;++j){
    //     sum+=x[i][j];
    //     }
    //     cout<<sum<<" ";
    // }

    // // 152--------------------------
    // int n,m;
    // cin>>n>>m;

    // int x[n][m];

    // for(int i=0;i<n;++i){
    //     for(int j=0;j<m;++j){
    //         cin>>x[i][j];
    //     }
    // }

    // for(int i=0;i<n;++i){
    //     int product=1;
    //     for(int j=0;j<m;++j){
    //        product*=x[i][j];
    //     }
    //     cout<<product<<" ";
    // }

    // // 153---------------------------
    // int n,m;
    // cin>>n>>m;

    // int x[n][m];

    // for(int i=0;i<m;++i){
    //     for(int j=0;j<n;++j){
    //         cin>>x[i][j];
    //     }
    // }

    // for(int i=0;i<m;++i){
    //     int min=x[i][0];
    //     for(int j=1;j<n;++j){
    //        if(x[i][j]<min){
    //            min=x[i][j];
    //        }
    //     }
    //     cout<<min<<" ";
    // }

    // // 154-----------------------
    // int n,m;
    // cin>>n>>m;

    // int x[n][m];

    // for(int i=0;i<n;++i){
    //     for(int j=0;j<m;++j){
    //         cin>>x[i][j];
    //     }
    // }

    // for(int j=0;j<m;++j){
    //     int sum=0;
    //     for(int i=0;i<n;++i){
    //         sum+=x[i][j];
    //     }
    //     cout<<sum<<" ";
    // }

    // // 155---------------------------
    // int n,m;
    // cin>>n>>m;

    // int x[n][m];

    // for(int i=0;i<n;++i){
    //     for(int j=0;j<m;++j){
    //         cin>>x[i][j];
    //     }
    // }

    // for(int j=0;j<m;++j){
    //     int min=x[0][j];
    //     for(int i=0;i<n;++i){
    //         if(min>x[i][j]){
    //             min=x[i][j];
    //         }
    //     }
    //     cout<<min<<" ";
    // }

    // // 156----------------------
    // int n,m;
    // cin>>n>>m;

    // int x[n][m];

    // for(int i=0;i<n;++i){
    //     for(int j=0;j<m;++j){
    //         cin>>x[i][j];
    //     }
    // }

    // for(int j=0;j<m;++j){
    //     int min=x[0][j];
    //     int max=x[0][j];
    //     for(int i=0;i<n;++i){
    //         if(x[i][j]>max){
    //             max=x[i][j];
    //         }
    //         if(x[i][j]<min){
    //             min=x[i][j];
    //         }

    //     }
    //     cout<<(max-min)<<" ";
    // }

    //     // 157-----------------------
    //     int n,m;
    //     cin>>n>>m;

    //     double x[n][m];

    //     for(int i=0;i<n;++i){
    //         for(int j=0;j<m;++j){
    //             cin>>x[i][j];
    //         }
    //     }

    //     double max=x[0][0];
    //     double min=x[0][0];
    //     for(int i=0;i<n;++i){
    //         for(int j=0;j<m;++j){
    //             if(x[i][j]>max){
    //                 max=x[i][j];
    //             }
    //             if(x[i][j]<min){
    //                 min=x[i][j];
    //             }

    //         }

    //     }
    //    double ave=(min+max)/2;
    //     cout<<fixed<<setprecision(2)<<ave<<" ";

    // // 158----------------------------
    // int n, m;
    // cin >> n >> m;

    // int x[n][m];

    // for (int i = 0; i < n; ++i){
    //     for (int j = 0; j < m; ++j){
    //         cin >> x[i][j];
    //     }
    // }
    

    //     int max=x[0][0];
    //     int min=x[0][0];
    //     int maxsetir=0;
    //     int minsetir=0;
    //     for(int i=0;i<n;++i){
    //         for(int j=0;j<m;++j){
    //             if(x[i][j]>max){
    //                 max=x[i][j];
    //                 maxsetir=i;
    //             }
    //             if(x[i][j]<min){
    //                 min=x[i][j];
    //                 minsetir=i;
    //             }

    //         }
    //     }
    //     for (int j = 0; j < m; ++j){
    //          swap(x[maxsetir][j],x[minsetir][j]);
    //     }

    // for (int i = 0; i < n; ++i){
    //     for (int j = 0; j < m; ++j){
    //         cout<< x[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }

    // // 160---------------------------

    // int n;
    // cin>>n;

    // int x[n][n];

    // for(int i=0;i<n;++i){
    //     for(int j=0;j<n;++j){
    //         cin>>x[i][j];
    //     }
    // }
    
    // for(int i=0;i<n;++i){
    //     bool flag=true;
    //     for(int j=0;j<n;++j){
    //         if(x[i][j]!=x[i][0]){
    //             flag=false;
    //             break;
                
    //         }
    //     }
    //     if(flag){
    //         cout<<i+1<<" ";
    //     }
    // }

    // 161-----------------------------------
    int n;
    cin>>n;


    int x[n][n];

    for(int i=0;i<n;++i){
        for(int j=0;j<n;++j){
            cin>>x[i][j];
        }
    }


    for(int i=0;i<n;++i){
            bool increase=true;
            bool decrease=true;
        for(int j=1;j<n;++j){
            if(x[i][j]<=x[i][j-1]){
                increase=false;
            }
            if(x[i][j]>=x[i][j-1]){
                decrease=false;
            }
        }
        if(increase || decrease){
            cout<<i+1;
        }
    }

    




}