#include <iostream>
#include <string>

using namespace std;

double sum(int x,float y,int z){
    return x+y+z;

}
double sum(int x,float y,float z){
    return x+y+z;

}


double sum(float x,float y,float z){
    return x+y+z;

}

int main(){
    float x=5;
    float y=4.6;
    float z=8.5;
    cout<<sum(x,y,z)<<endl;
}