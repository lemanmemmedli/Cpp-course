#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;


int main(){

    // 48----------------------
    int N;
    int counter=0;
    cin >> N;

    while(N>0){
        counter++;
        N=N/10;
    }
    cout << counter <<endl;
}