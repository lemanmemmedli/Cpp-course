#include <iostream>
#include <cstring>
#include <math.h>
#include <iomanip>

using namespace std;
// ---------128------------
double volume(double r)
{
    double p = 3.14172;
    double result = (4.0 / 3.0) * p * pow(r, 3);

    return result;
}
// -----129-----------
int ncube(int n)
{
    int cube = n * n * n;
    return cube;
}
// ------130--------------
int area(int a, int b)
{
    int area = a * b;
    return area;
}

int perimeter(int a, int b)
{
    int perimeter = a + b;
    return perimeter;
}
// ------------------131--------
double miles(double n)
{
    double miles = n * 0.621371;

    return miles;
}

// -------------132----------
double total(double a, double b, double c, double d)
{
    double total = a + b + c + d;
    return total;
}

double average(double a, double b, double c, double d)
{
    double average = (a + b + c + d) / 4;
    return average;
}
// 133------------------------
int ascii(char n)
{
    char ascii = int(n);
    return ascii;
}

// 134-------------------------
double meter(double N)
{
    double meter = N / 100;
    return meter;
}
double kilometer(double N)
{
    double kilometer = N / 100000;
    return kilometer;
}
// ----135----------------------
void oddeven(int N)
{
    if (N % 2 == 0)
    {
        cout << "The entered number is even" << endl;
    }
    else
    {
        cout << "The entered number is odd" << endl;
    }
}

// 136----------------------------
int ress = 0;
int f(int N)
{
    int res = 1;
    for (int i = 1; i <= N; i++)
    {
        res *= i;
    }
    return res;
}

int sum(int N)
{
    for (int i = 1; i <= N; i++)
    {
        ress += f(i) / i;
    }
    return ress;
}
// 137-------------------------
void binary(int N)
{

    int binary[32];
    int i = 0;
    while (N > 0)
    {
        binary[i] = N % 2;
        N = N / 2;
        i++;
    }

    for (int j = i - 1; j >= 0; j--)
    {
        cout << binary[j];
    }
}
// -----------138----------------
void prime(int N)
{
    if (N % 2 != 0)
    {
        cout << "The number " << N << " is a prime number" << endl;
    }
    else
    {
        cout << "The number " << N << " is not a prime number" << endl;
    }
}
// 139-------------------------
void maxnum(int size, int arr[])
{
    int maxnum = arr[0];
    for (int i = 1; i < size; i++)
    {
        if (maxnum < arr[i])
        {
            maxnum = arr[i];
        }
    }
    cout << maxnum;
}
//
// 140---------------------------------
void armstrong(int N)
{
    int count = 0;
    int sum = 0;
    int original = N;

    int temp = N;
    while (temp != 0)
    {
        count++;
        temp /= 10;
    }

    temp = N;
    while (temp != 0)
    {

        int digit = temp % 10;
        sum += pow(digit, count);
        temp /= 10;
    }
    if (sum != original)
    {
        cout << "The " << N << " is not an Armstrong number." << endl;
    }
    else
    {
        cout << "The " << N << " is an Armstrong number." << endl;
    }
}
int perfectN(int N)
{
    int sum = 0;
    for (int i = 1; i < N; i++)
    {
        if (N % i == 0)
        {
            sum += i;
        }
    }

    if (sum != N)
    {
        cout << "The " << N << " is not a Perfect number." << endl;
    }
    else
    {
        cout << "The " << N << " is a Perfect number." << endl;
    }
}

// 141--------------------------------
int PerfectNums(int start, int end)
{
    cout << "The perfect numbers between " << start << " to " << end << " are: ";

    for (int i = start; i <= end; i++)
    {
        int sum = 0;
        for (int j = 1; j <= i / 2; j++)
        {
            if (i % j == 0)
            {
                sum += j;
            }
        }
        if (sum == i)
        {
            cout << i << " ";
        }
    }
}

// 143------------------------------
int NumSum(int a, int b, int c = 0, int d = 0)
{
    return a + b + c + d;
}

// 144-------------------------
string convertToHex(int num)
{
    if (num == 0)
    {
        return "0";
    }
    string Hexdigits = "0123456789ABCDEF";
    string result = "";

    while (num > 0)
    {
        int remainder = num % 16;
        result = Hexdigits[remainder] + result;
        num = num / 16;
    }
    return result;
}
string convertToBinary(int num)
{
    if (num == 0)
    {
        return "0";
    }
    string result = "";
    while (num > 0)
    {
        result = char('0' + (num % 2)) + result;
        num /= 2;
    }
    return result;
}
string convertToOctal(int num)
{
    if (num == 0)
    {
        return "0";
    }
    string result = "";
    while (num > 0)
    {
        result = char('0' + (num % 8)) + result;
        num /= 8;
    }
    return result;
}
// 145--------------------------
string convertTo(int n, const string &format = "dec")
{
    if (format == "hex")
    {
        string hexdigits = "0123456789ABCDEF";
        string result = "";
        int remainder;
        while (n > 0)
        {
            remainder = n % 16;
            result = hexdigits[remainder] + result;
            n /= 16;
        }
        return result;
    }
    if (format == "bin")
    {
        string result = "";

        while (n > 0)
        {
            result = char('0' + (n % 2)) + result;
            n /= 2;
        }
        return result;
    }
    if (format == "oct")
    {
        string result = "";
        while (n > 0)
        {
            result = char('0' + (n % 8)) + result;
            n /= 8;
        }
        return result;
    }
}

// 142--------------------------------
bool foundanagram(string anagram1, string anagram2)
{
    if(anagram1.length() != anagram2.length()){
        return false;
    }
   
    for (int i = 0; i < anagram1.length(); i++)
    {
        bool found=false;
        for (int j = 0; j < anagram2.length(); j++)
        {
            if (anagram1[i] == anagram2[j])
            {
               anagram2[j]='#';
               found=true;
               break;
            }
            
        }
        if(!found){
            return false;
        }
    }
    return true;

}

int main()
{

    // // 128-----------------------
    // double r;
    // cin>>r;

    // cout<<"The volume of a sphere is: "<<volume(r)<<endl;

    // // 129---------------------------
    // double n;
    // cin>>n;

    // cout<<ncube(n)<<endl;

    // // 130-----------------
    // int a,b;
    // cin>>a>>b;

    // cout<<"The area of the rectangle is: "<<area(a,b)<<endl;
    // cout<<"The perimeter of the rectangle is: "<<perimeter(a,b)<<endl;

    // // 131-------------------------------
    // double n;
    // cin>>n;

    // cout<<fixed<<setprecision(4);
    // cout<<miles(n)<<"Miles/hr"<<endl;

    // // 132---------------------------
    // double a,b,c,d;
    // cin>>a>>b;
    // cin>>c>>d;

    // cout<<"The total of four numbers is : "<<total(a,b,c,d)<<endl;
    // cout<<"The average of four numbers is : "<<average(a,b,c,d)<<endl;

    // 133-----------------
    // char n;
    // cin>>n;

    // cout << "The ASCII value of " << n << " is: " << ascii(n) << endl;
    // cout << "The character for the ASCII value " << ascii(n) << " is: " << n << endl;

    // // 134--------------------------
    // double N;
    // cin>>N;

    // cout<<"The distance in meter is: "<<meter(N)<<endl;
    // cout<<"The distance in kilometer is: "<<kilometer(N);

    // // 135--------------------------
    // int N;
    // cin>>N;

    // oddeven(N);

    // // 136--------------------------
    // int N;
    // cin>>N;

    // cout<<sum(N)<<endl;

    // // 137-----------------------------
    // int N;
    // cin >> N;

    // binary(N);
    // cout << endl;

    // // 138--------------------------
    // int N;
    // cin>>N;

    // prime(N);

    // // 139--------------------
    // int size;
    // cin>>size;

    // int arr[size];
    // for(int i=0;i<size;i++){
    //     cin>>arr[i];
    // }

    // maxnum(size,arr);

    // // 140----------------------
    // int N;
    // cin >> N;
    // armstrong(N);
    // perfectN(N);

    // // 141--------------------------
    // int start, end;
    // cin >> start >> end;

    // PerfectNums(start, end);

    // // 143------------------------
    // int a, b, c=0, d=0;
    // int count = 0;

    // if (cin >> a >> b) count = 2;
    // if (cin >> c) count = 3;
    // if (cin >> d) count = 4;

    // if (count == 2)
    //     cout << NumSum(a, b);
    // else if (count == 3)
    //     cout << NumSum(a, b, c);
    // else
    //     cout << NumSum(a, b, c, d);

    // // 144---------------------
    // int num;
    // cin >> num;

    // cout << "Bin: " << convertToBinary(num) << endl;
    // cout << "Hex: " << convertToHex(num) << endl;
    // cout << "Oct: " << convertToOctal(num) << endl;

    // // 145---------------------------------
    // int n;
    // string format;
    // cin>>n;
    // cin.ignore();
    // getline(cin,format);

    // cout<<convertTo(n,format)<<endl;

    // 142---------------------------
    string anagram1;
    string anagram2;

    getline(cin, anagram1);
    getline(cin, anagram2);

    if(foundanagram(anagram1, anagram2)){
        cout<<"Anagram"<<endl;

    }else{
        cout<<"Not Anagram"<<endl;
    }
}
