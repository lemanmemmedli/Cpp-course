#include <iostream>
#include <math.h>
#include <cmath>
#include <iomanip>
#include <string>
#include <cstring>

using namespace std;

int main()
{

    // char n='leman';
    // cout<<n<<endl;

    // char message[]={"Leman"};
    // for(int i=0;i<5;i++){
    //     cout<<message[i];
    // }
    // cout<<endl;

    // isalnum

    // cout<<isalnum('x')<<endl;
    // cout<<isalnum(15)<<endl;
    // cout<<isalnum('@');

    // char input = 'b';

    // if(isalnum(input)){
    //     cout<<input <<"is alphanumeric"<<endl;

    // }else{
    //     cout<<input <<"is not alphanumeric"<<endl;
    // }

    // char input;
    // cin>>input;

    // if(isalpha(input)){
    //     cout<<"alfabetik: "<<input<<endl;
    // }else{
    //     cout<<"NO alfabetik: "<<input<<endl;
    // }

    // cout << "C is alphabetic: " << isalpha('C') << endl;
    // cout << "^ is alphabetic: " << isalpha('^') << endl;
    // cout << "7 is alphabetic: " << isalpha('7') << endl;

    // Check if character is blank
    char message[] = "Hello there. How are you doing? the sun is shining.";
    int blankCounter(0);

    for (int i = 0; i < sizeof(message) / sizeof(message[i]); ++i)
    {
        if (isblank(message[i]))
        {
            cout << "blank index: " << i << endl;
            ++blankCounter;
        }
    }
    cout << blankCounter << endl;

    // Check if character is lowercase or uppercase
    // range base for loop

    char thought[]("C++ Programming is the most Powerful in the Solar System");

    size_t lowercaseCount(0);
    size_t uppercaseCount = 0;

    cout << "Original string: " << thought << endl;

    for (auto character : thought)
    {
        if (islower(character))
        {
            ++lowercaseCount;
        }

        if (isupper(character))
        {
            ++uppercaseCount;
        }
    }

    cout << "lowerCase: " << lowercaseCount << "  upperCase: " << uppercaseCount << endl;

    // Check if character is a digit
    char statement[]("Mr Hamilton owns 221 cows.");

    size_t digitCount = 0;

    for (auto digit : statement)
    {
        if (isdigit(digit))
        {
            ++digitCount;
        }
    }

    cout << "digit count: " << digitCount << endl;

    // Turning the characters to lowercase or to uppercase
    char originalText[]("Home. The feeling of belonging");
    char edittext[sizeof(originalText)];
    cout << "originaltext: " << originalText << endl;

    for (int i = 0; i < sizeof(originalText); ++i)
    {
        edittext[i] = tolower(originalText[i]);
    }
    cout << "tolower: " << edittext << endl;

    for (int i = 0; i < sizeof(originalText); ++i)
    {
        edittext[i] = toupper(originalText[i]);
    }

    cout << "toupper" << edittext << endl;

    // strlen : Find the length of a string
    const char message1[] = {"The sky is blue."};

    // array decays into pointer when we use const char *
    const char *message2 = {"The sky is blue."};

    cout << message1 << endl;

    // strlen ignores null character \0
    cout << "strlen(message1): " << strlen(message1) << endl;

    // sizeof includes null character \0
    cout << "sizeof(message1): " << sizeof(message1) << endl;

    // strlen still works with decayed arrays
    cout << "strlen(message2): " << strlen(message2) << endl;

    // Prints the size of pointer
    cout << "sizeof(message2): " << sizeof(message2) << endl;

    // Concatenation
    char dest[50] = "Hello";
    char src[50] = " World!";

    strcat(dest, src);

    cout << dest << endl;

    strcat(dest, " Goodbye world");

    cout << dest << endl;

    char *dest1 = new char[30];
    char *source1 = new char[30];

    dest1[0] = 'H';
    dest1[1] = 'e';
    dest1[2] = 'l';
    dest1[3] = 'l';
    dest1[4] = 'o';
    dest1[5] = '\0';

    source1[0] = ' ';
    source1[1] = 'W';
    source1[2] = 'o';
    source1[3] = 'r';
    source1[4] = 'l';
    source1[5] = 'd';
    source1[6] = '\0';

    cout << "strlen(dest1):   " << strlen(dest1) << endl;
    cout << "strlen(source1): " << strlen(source1) << endl;

    strcat(dest1, source1);

    cout << dest1 << endl;
    cout << "strlen(dest1): " << strlen(dest1) << endl;
    cout << "dest1:         " << dest1 << endl;

    char str1[50] = {"Hello"};
    char str2[50] = {" World is good"};

    cout << strncat(str1, str2, 6) << endl;
    cout<<"===================================="<<endl;


    // strcopy-----------

    char *string3 = "Hello world is good";
    char *str4 = new char[strlen(string3) + 1];

    strcpy(str4,string3);

    cout << "sizeof(dest3): " << sizeof(string3) << endl;
    cout << "strlen(dest3): " << strlen(string3) << endl;
    cout << "dest3: " << string3 << endl;
    
    cout<<"===================================="<<endl;

    // strncpy : Copy n characters from src to dest
    char *source3="Hello";
    char dest3[]={'a','b','c','d','e','f','\0'};

    strncpy(dest3,source3,2);

    cout<<dest3<<endl;

    char txt[]={"Hello"};
    string txt1="World";

    txt1="Hallo";

    cout<<txt<<endl;
    cout<<txt1<<endl;

    string greeting("Hello Worlddd!");
    string saying_hello(greeting, 6, 5);   // assigns characters starting at index 6 and following next 5 characters

    cout << saying_hello << endl;



}