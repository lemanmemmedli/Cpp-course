#include <iostream>
#include <string>

using namespace std;

void f(int n,string side=""){
    if(n>0){
        cout<<n<<" , "<<side<<endl;
        f(n-1,"Left");
        f(n-1,"Right");
    }

}



int main(){
    f(3);

}