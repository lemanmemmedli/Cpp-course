#include <iostream>
#include <string>


using namespace std;


struct Node{
    int data;
    Node *next;

    Node (int value=0){       //parametric constructor
        data=value;
        next=nullptr;
    }
};

int main(){

    // Node node1;
    // node1.data=5;

    // Node node2;
    // node2.data=6;

    // Node node3;
    // node3.data=8;

    // node1.next=&node2;  //node1-in next pointinde node2-nin yaddas adresi var

    // Node head;
    // head.data=0;
    // head.next=&node1;

    // node2.next=&node3;
    // node3.next=&head;
  
    // // cout<<((*head.next).data)<<endl;
    // cout<<head.next->data<<endl;
    // cout<<head.next->next->data<<endl;
    // cout<<head.next->next->next->data<<endl;
    // cout<<head.next->next->next->next->next->data<<endl;

    Node *head=new Node();
    
    head->next=new Node(1);
    head->next->next=new Node(2);
    head->next->next->next=new Node(3);

    cout<<head->next->next->next->data<<endl;

    delete  head->next->next;
    head->next->next=nullptr;


   


}

