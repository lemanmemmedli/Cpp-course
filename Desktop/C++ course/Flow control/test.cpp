#include <iostream>
#include <iomanip>

using namespace std;

/*
    Objectives.

    1. Block Structure
    2. If Statements
    3. Else If
    4. Switch
    5. Ternary Operators
*/

int hero()
{

    {
        int a = 1;
        cout << a << endl; // 1

        {
            int a = 2;
            cout << a << endl; // 2

            {
                cout << a << endl; // 2
            }
        }
    }
}

int main()
{

    int a = 13;
    int b = 15;

    bool result = (a < b);

    cout << std::boolalpha;
    cout << "result: " << result << endl;

    if (result == true)
    {
        cout << a << " Less than " << b << endl;
    }

    if (!(result == true))
    {
        cout << a << " is not Less than " << b << endl;
    }
    if (a == b)
    {
        cout << a << " ekvivalent " << b << endl;
    }

    if (result == true)
    {
        cout << a << " Less than " << b << endl;
    }
    else if (!(result == true))
    {
        cout << a << " is not Less than " << b << endl;
    }

    if (result)
    {
        cout << a << " < " << b << endl;
    }
    else
    {
        cout << "wrong" << endl;
    }

    if (a > b)
    {
        cout << a << " > " << b << endl;
    }
    else if (a <= b)
    {
        cout << a << " <= " << b << endl;
    }
    else if (a >= b)
    {
        cout << a << " >= " << b << endl;
    }
    else
    {
        cout << a << " == " << b << endl;
    }

    // nested conditianol statements

    bool red = false;
    bool yellow = false;
    bool green = true;

    bool police_stop = false;

    if (red)
    {
        cout << "stop" << endl;
    }
    if (yellow)
    {
        cout << "Slow down" << endl;
    }

    if (green)
    {
        if (police_stop)
        {
            cout << "stop" << endl;
        }
        else
        {
            cout << "Go" << endl;
        }
    }

    // Else if

    const int Pen = 10;
    const int Marker = 20;
    const int Eraser = 30;
    const int Rectangle = 40;
    const int Circle = 50;
    const int Ellipse = 60;

    int tool = Eraser;

    if (tool == Pen)
    {
        cout << "Active tool is  Pen" << endl;
    }
    else if (tool == Marker)
    {
        cout << "Active tool is Marker" << endl;
    }
    else if (tool == Eraser)
    {
        cout << "Active tool is Eraser" << endl;
    }
    else if (tool == Rectangle)
    {
        cout << "Active tool is Rectangle" << endl;
    }
    else if (tool == Circle)
    {
        cout << "Active tool is Circle" << endl;
    }
    else if (tool == Ellipse)
    {
        cout << "Active tool is Ellipse" << endl;
    }

    cout << "Moving on ..." << endl;

    switch (tool)
    {
    case Pen:
        cout << "Active tool is  Pen" << endl;
        break;
    case Eraser:
        cout << "Active tool is Eraser" << endl;

        break;
    case Circle:
        cout << "Active tool is Circle" << endl;
        break;

    default:
        break;
    }

    char grade = 'C';

    switch (grade)
    {
    case 'A':
        cout << "excellent" << endl;
        break;
    case 'B':
    case 'C':
        cout << "Good" << endl;
        break;

    default:
        cout << "try again" << endl;
        break;
    }
    cout << " Your grade is: " << grade << endl;

    int c = 5;
    int y = 6;
    int max;

    // if (c>y){
    //     max=c;
    // }else{
    //     max=y;
    // }

    // max = (c > y) ? c : y;
    // min = (c < y) ? c : y;

    auto min =(c>y) ? c : 22.5f;
    cout << "min: " << min << endl;

    bool fast=!true;

    int speed=fast ? 300 : 90;
    int velocity=(fast ? 9 : 3);

    cout << "The spped is : " << speed << endl;
    cout << "the velocity is: " << velocity << endl;


    int z;
    // cin >> z;
    
    if (z>5){
        cout << "a is more than "<< 5 <<endl;

    }else if (z<5){
        cout << "a is less than " <<5 << endl;

    }else{
        cout << "a is equal 3" << 5<< endl;
    }

    bool light=false;
    if(light==true){
        cout << "light is on"<<endl;
    }else{
        cout <<"light is off" << endl;
    }
   
    int numbera;
    int numberb;
    
    cin>>numbera>> numberb;
    int numberc;
    numberc=numbera;
    numbera=numberb;
    numberb=numberc;

    cout <<numbera << ' ' << numberb;

    
}
