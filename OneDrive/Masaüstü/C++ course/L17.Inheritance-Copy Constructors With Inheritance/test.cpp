#include <iostream>


using namespace std;

struct Point{
    int x;
    int y;

    Point(int x,int y){
        this->x=x;
        this->y=y;

        cout<<"Parametric constructor..."<<endl;
    }

    Point (const Point& source){
        this->x=source.x;
        this->y=source.y;

        cout<<"Copy constructor"<<endl;
    }
};




int main(){
    system("cls");
    Point p1(3,4);
    Point p2=p1;

    cout<<p2.x<<p2.y<<endl;
    cout<<p1.x<<p1.y<<endl;

}