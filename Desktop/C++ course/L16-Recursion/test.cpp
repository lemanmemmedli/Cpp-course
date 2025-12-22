#include <iostream>


using namespace std;

void print(int n) {
    if(n>0){
        
        print(n-1);
        cout<<n<<" ";
        print(n-1);
        
    }

}

int sum(int n){
    if(n==0){
        return n;
    }
    int result=n+sum(n-1);
    return result;
}


int main(){

    // recursion n-e esasen   (2^n)-1 iterasiya olur 

    print(5);

    // for(int i=1;i<=5;++i){
    //     cout<<i<<endl;
    // }

    // int n=5;
    // cout<<sum(n)<<endl;

}