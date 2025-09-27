#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{

    cout<< 123/1 <<endl;
    cout<< 123/10 <<endl;
    cout<< 123/100 <<endl;

    cout << 123%1 <<endl;
    cout << 123% 10 <<endl;
    cout << 123%100 <<endl;

    int a=2,b=3,c=5,d=15;
    a+=2;
    b*=5;
    c=c*(b+a);
    d++;

    // Division & Modules

    cout << a <<endl;
    cout << b <<endl;
    cout << c <<endl;
    cout << d <<endl;
    d--;
    cout << d <<endl;
    d=d%3;
    cout << d <<endl;
    d=d/5;
    cout << d <<endl;
    int l=15;
    l/=4;
    cout<<l;
    int m=2;
    m=m%0;
    cout<<m;

       int a=1;
       int b=4;
       b += a -= 6;

    int value = 5;
    value = value + 1;
    value = value - 1;
    value = 5;
    value++;
    value--;
    cout << value << endl;

    int value = 5;
    // Postfix
    cout << value++ << endl;
    cout << value << endl;
    // Prefix
    cout << ++value << endl;
    cout << value << endl;
    cout << --value << endl;

    int v=15;
    v++;
    --v;
    cout<< v <<endl;

    int m=5;
    int result=++m;
    cout<< result << endl;
    cout<< m <<endl;

    int z=5;
    int y=--z + z--;
    cout << y <<endl;
    cout << z <<endl;

    int w = 10;
    int e = 15;

    cout << "w: " << w << endl;
    cout << "e: " << e << endl;
    cout << "(w<e):" << (w < e) << endl;
    cout << "(w>e):" << (w > e) << endl;
    cout << "(w==e)" << (w == e) << endl;
    cout << "(w!=e)" << (w != e) << endl;
    cout << "(w<=e)" << (w <= e) << endl;
    cout << "(w>=e)" << (w >= e) << endl;

    int a=10;
    int b=15;

    cout <<"a= " <<a <<",b= "<<b<<endl;

    bool result=(a==b);
    cout << std::boolalpha;

    bool a = true;
    bool b = false;
    bool c = true;

    cout << "a: " << a << endl;
    cout << "b: " << b << endl;
    cout << "c: " << c << endl;

    cout << "!a: " << !a << endl;
    cout << "!b: " << !b << endl;
    cout << "!c: " << !c << endl;

    cout << (!!true) << endl;

    cout << "  a && b: " << (a && b) << endl;
    cout << "  a && c: " << (a && c) << endl;
    cout << "  a && b && c: " << (a && b && c) << endl;

    int x = 10;
    int y = 15;

    cout << "x <= y: " << (x <= y) << endl;
    cout << (x < y || x == y) << endl;

    int d = 12;
    int e = 23;
    int f = 11;

    cout << "(d>e && e<f)" << ((d > e) && (e < f)) << endl;
    cout << "(d<f || d>e || e==f): " << ((d < f) || (d > e) || (e == f)) << endl;

    int width = 10;
    cout << std::setfill('_');
    cout << " Hello " << std::setw(20) << "World" << endl;
    cout << " Hello " << std::setw(width) << "World" << endl;

    int number = 12345;

    cout << "number in hex: " << std::hex << number << endl;
    cout << "number in dec: " << std::dec << number << endl;
    cout << "number in oct: " << std::oct << number << endl;

    double pi = 3.123455675768675756;

    cout << "pi: " << pi << endl;

    cout << std::scientific;
    cout << "pi: " << pi << endl;

    cout << std::setprecision(20);
    cout << "pi: " << pi << endl;

    short int g = 10;
    short int h = 20;

    char c1 = 'c';
    char c2 = 42;

    cout << sizeof(g) << endl;
    cout << sizeof(h) << endl;
    cout << sizeof(c1) << endl;
    cout << sizeof(c2) << endl;
    cout <<"c1:" <<c1<<endl;
    cout<<"c2:"<<c2<<endl;

    auto result1 = g + h;
    auto result2 = c1 + c2;

    cout << "result1: " << result1 << endl;
    cout << "result2: " << result2 << endl;
}