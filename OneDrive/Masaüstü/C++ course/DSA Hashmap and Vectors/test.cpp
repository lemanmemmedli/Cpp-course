#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>

using namespace std;

int main(){

    int *p=new int [3];

    p[0]=1;
    p[1]=2;
    p[2]=3;

    delete p;

    p=new int[2];
    p[0]=21;
    p[1]=35;

    vector<int>collection;

    collection.push_back(23);
    collection.push_back(40);


    unordered_map<int ,int> hash_map;

    int array[]={1,2,2,5,5,4,8,9,0};

    for(int i=0;i<sizeof(array)/sizeof(array[0]);++i){
        hash_map[array[i]]=true;
    }

    for(const auto &element : hash_map){
        cout<<"["<<element.first<<","<<element.second<<"]"<<endl;
    }
    cout<<hash_map.size()<<endl;

    // umap["People"]=20;
    // umap["Apps"]=30;

    // for(auto x : umap){
    //     cout<<x.first<<" : "<<x.second<<endl;
    // }

    unordered_map <string,int> mp={("Apple",10),("Mango",20)};

    for(const auto x:mp){
        cout<<x.first<<x.second<<endl;

    }







}