#include <iostream>
#include <string>
#include <cstring>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{

    // // 117-------------------------
    // string text;
    // getline(cin,text);

    // for(size_t i=0;i<text.length();++i){
    //     if(isalpha(text[i])){
    //        if(text[i]=='Z'){
    //           text[i]='A';
    //        }else if(text[i]=='z'){
    //           text[i]='a';
    //        }
    //         else{
    //            text[i]=text[i]+1;            }
    //     }
    // }
    // cout<<text<<endl;

    // // 118-------------------------
    // string text;
    // getline(cin,text);

    // for(size_t i=0;i<text.length();++i){
    //     if(isalpha(text[i])){
    //         if(i==0 || !isalpha(text[i-1])){
    //            text[i]=toupper(text[i]);
    //         }else{
    //             text[i]=tolower(text[i]);
    //         }

    //     }

    // }

    // cout<<text<<endl;

    // // 119--------------------------
    // string text;
    // getline(cin, text);

    // int maxcount = 0;
    // int count = 0;
    // string word = "";
    // string longword = "";

    // for (size_t i = 0; i < text.length(); ++i)
    // {
    //     if (isalpha(text[i]))
    //     {
    //         count++;
    //         word += text[i];
    //         if (maxcount < count)
    //         {
    //             longword = word;
    //         }
    //     }
    //     else
    //     {

    //         count = 0;
    //         word = "";
    //     }
    // }
    // cout << longword << endl;

    // // 120-------------------------------
    // string text;
    // getline(cin,text);

    // string letters="";

    // for(size_t i=0;i<text.length();++i){
    //     if(isalpha(text[i])){

    //         letters+=text[i];
    //     }
    // }

    // for(size_t i=0;i<letters.length();++i){
    //      for(size_t j=i+1;j<letters.length();++j){
    //          if(isalpha(letters[i]) && isalpha(letters[j])){
    //             if(letters[i] > letters[j]) {
    //                 swap(letters[i],letters[j]);
    //             }
    //          }
    //      }

    // }

    // cout<<letters<<endl;

    // 121-----------------------------
    // string text;
    // getline(cin,text);

    // char vowels[]={'a', 'e', 'i', 'o', 'u'};
    // int count=0;

    // for(size_t i=0;i<text.length();++i){
    //     for(size_t j=0;j<5;++j){
    //     if(text[i] == vowels[j]){
    //         count++;
    //     }
    //     }
    // }
    // cout<<"number of vowels -> "<<count<<endl;

    // 122-------------------------------
    // string text;
    // getline(cin, text);
    // string reverse = "";

    // bool found = false;

    // for (int i = text.length() - 1; i >= 0; i--)
    // {
    //     reverse += text[i];
    // }
    // if (reverse == text)
    // {
    //     found = true;

    // }

    // cout << (found ? "True" : "False") << endl;

    // // 123-------------------------------
    // string numbers;
    // getline(cin,numbers);
    // string result="";

    // for(int i=0;i<numbers.length();++i){
    //     result+=numbers[i];
    //     if((numbers[i]-'0') % 2 !=0 && (numbers[i+1]-'0') % 2 !=0){
    //         result+='-';

    //     }
    // }
    // cout<<result<<endl;

    // // 124---------------------------------
    // string text;
    // getline(cin,text);
    // string newtext="";

    // for(size_t i=0;i<text.length();++i){
    //     newtext+=text[i];

    //     if(isalnum(text[i])){
    //         newtext+=" ";

    //     }
    // }
    // cout<<newtext<<endl;

    // // 125------------------------------
    // string text1,text2;
    // getline(cin,text1);
    // getline(cin,text2);
    // bool allfound=true;

    // for(size_t i=0;i<text1.length();++i){
    //     bool found=false;
    //     for(size_t j=0;j<text2.length();++j){
    //         if(text1[i]==text2[j]){
    //             found=true;
    //             break;
    //         }
    //     }
    //     if(!found){
    //         allfound=false;
    //         break;

    //     }
    // }
    // cout<<boolalpha<<allfound<<endl;

    // // 126-----------------------
    // string text;
    // getline(cin,text);
     
    // int i,n=text.length();

    // for(size_t i=0;i<n;i++){
    //     int count=0;
    //     char ch=text[i];

    //     while(text[i] == ch and i<n){
    //         i++;
    //         count++;

    //     }
    //     i--;

    //     cout<< ch <<count;


    // }
    

    // 127---------------------------------
    string text1, text2;
    getline(cin, text1);
    getline(cin, text2);
    string word = "";
    string longword = "";
    
    int maxcount = 0;

    for (size_t i = 0; i < text1.length(); i++)
    {
        for (size_t j = 0; j < text2.length(); j++)
        {
            int count = 0;
            size_t newi=i;
            size_t newj=j;

            while(text1[newi] == text2[newj]  and newi<text1.length() and newj<text2.length()){
                word+=text1[newi];
                count++;
                newi++;
                newj++;
                

            }

            if(count>maxcount){
                maxcount=count;
                longword=word;
            }
            
        }
    }
    cout<<"Longest Common Substring: "<<longword<<endl;


}