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


    // 120-------------------------------
    string text;
    getline(cin,text);

    string letters="";


    for(size_t i=0;i<text.length();++i){
        if(isalpha(text[i])){

            letters+=text[i];
        }
    }

    for(size_t i=0;i<letters.length();++i){
         for(size_t j=i+1;j<letters.length();++j){
             if(isalpha(letters[i]) && isalpha(letters[j])){
                if(letters[i] > letters[j]) {
                    swap(letters[i],letters[j]);
                }
             }
         }

    }

    cout<<letters<<endl;

}