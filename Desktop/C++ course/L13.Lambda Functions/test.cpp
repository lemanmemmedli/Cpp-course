#include <iostream>
#include <string>

using namespace std;

int main()
{

    //    auto func = [](){
    //         cout<<"Hello World"<<endl;
    //     };

    //     func();

    //     auto func1=[](){
    //         for(int i=0;i<10;i++){
    //             cout<<"Hello World: "<<i<<endl;
    //         }
    //     };

    //     func1();

    //     auto sum=[](int a,int b){
    //         return a+b;
    //     };

    //     auto divide=[](float a,float b) -> float {
    //         return a / b;
    //     };
    //     cout<<"divide "<<divide(5,3)<<endl;

    //     auto divide2=[](int a,int b) ->double {
    //         return a%b;
    //     };
    //     cout<<divide2(10,3)<<endl;

    //     int result=sum(5,4);
    //     cout<<result<<endl;
    //     cout<<sum(5,7)<<endl;

    [](int a, double b)
    {
        cout << a / b << endl;
    }(4.5, 5.2);

    auto result_1 = [](double a, double b)
    {
        double ress = a / b;
        return ress;
    }(5.1, 3.2);

    cout << result_1 << endl;

    auto result_2 = [](int a, int b) -> int
    {
        return a + b;
    }(5, 6);

    cout << result_2 << endl;

    cout << [](float a, float b)
    { return a + b; }(5.3, 5.6) << endl;


    auto result_3=[](float a,float b) ->int {
        return a+b;
    }(4.0,5.0);

    cout<<result_3<<endl;
    cout<<sizeof(result_3)<<endl;

    // ------capture list []
    double a=5.4;
    double b=6.5;

    auto result_5=[a,b](){
        return a+b;

    };
    cout<<result_5()<<endl;


    double c(5.4);
    double d(6);

    auto result_4=[c,d](){
        cout<< c+d<<endl;

    };

    result_4();


    int z=99;

    auto func_2=[z](){
        cout<<"inner: "<<z<<endl;
    };

    for(int i(0);i<5;i++){
        cout<<"outer: "<<z<<endl;
        func_2();
        ++z;
    };

    int g=99;

    auto gfunc=[&g](){
        ++g;
        cout<<g<<endl;
    };
    gfunc();
    cout<<g<<endl;


    int f=5;
    int h=6;
    int k=7;

    auto ress_1=[=](){
          return f+h+k;
    };

    cout << ress_1()<<endl;



}