#include <iostream>
#include <unordered_map>


using namespace std;

static int cache[100]={0}; // Static cache for Fibonacci numbers

int fibonacci(int n) {
    cache[0]=0;
    cache[1]=1;

    for(int i=2;i<=n;++i){
        if(cache[i] != 0){
            continue;
        };
        cache[i]=cache[i-1]+cache[i-2];
    }
    return cache[n];
}


int main() {
    int n = 10;
    int result = fibonacci(n);
    cout << "Fibonacci(" << n << ") = " << result << endl;
    return 0;
}
