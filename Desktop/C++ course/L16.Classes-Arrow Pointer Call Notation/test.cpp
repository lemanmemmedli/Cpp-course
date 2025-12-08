#include <iostream>

using namespace std;

class  Point{
    private:
    int x;
    int y;
    int z;

    public:
    Point(int X,int Y,int Z=0){            //parametric constructor
        x=X;
        y=Y;
        z=Z;
    }


};


int main(){
    Point fisrt(1,2);

    cout<<sizeof(fisrt)<<endl;

}


