#include <iostream>
#include <vector>

using namespace std;

struct Node{
    int data;
    vector<Node *>neighobours;

    Node(int data=0){
        this->data=data;

    }
};



int main(){

    Node *begin=new Node(4);
    begin->neighobours.push_back(new Node(2));

    cout<<begin->data<<endl;

    cout<<begin->neighobours[0]->data<<endl;

    begin->neighobours[0]->neighobours[0]=new Node(3);
    begin->neighobours[0]->neighobours[1]=new Node(5);

    begin->neighobours[0]->neighobours[0]->neighobours.push_back(begin->neighobours[0]);
    begin->neighobours[0]->neighobours[0]->neighobours.push_back(begin->neighobours[1]);



}