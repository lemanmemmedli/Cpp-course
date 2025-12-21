#include <iostream>
using namespace std;
// Exercise:1

struct Node{
    int Data;
    Node *next;

    Node(int val){
        Data=val;
        next=nullptr;
    }
};

// Exercise:2

class LinkedList{
    private:
    Node *head;
    Node *tail;


    public:
    LinkedList(){
        head=nullptr;
    }
    Node* getHead() {
    return head;
    
    }

    LinkedList& insert(int val){
        Node* newNode=new Node(val);
        newNode->next=head;
        head=newNode;
        return *this;

    }
    void insertAtTail(int val){
        Node* newnode=new Node(val);
        if(!head){
            head=tail=newnode;
        }else{
            tail->next=newnode;
            tail=newnode;
        }
    }
    LinkedList& append(int val){
        Node* newNode=new Node(val);
           if (head == nullptr) {
            head = newNode;
            return *this;;
        }
        Node* temp = head;
        while (temp->next != nullptr) {
            temp = temp->next;
        }
        temp->next=newNode;
        return *this;
    }


    LinkedList& display(){
         Node *temp=head;
         while(temp != nullptr){
            cout<<temp->Data<<"->";
            temp=temp->next;
         }
         cout<<"Null"<<endl;
         return *this;
    }

    bool search(int val){
        Node *temp=head;

        while(temp != nullptr){
            if(temp->Data==val){
               return true;
            }
            temp=temp->next;
        }
        return false;
    }
    LinkedList& remove(int val) {
        if (head == nullptr)
            return *this;

        if (head->Data == val) {
            Node* temp = head;
            head = head->next;
            delete temp;
            return *this;
        }

        Node* current = head;

        while (current->next != nullptr &&
               current->next->Data != val) {
            current = current->next;
        }
        if (current->next != nullptr) {
            Node* temp = current->next;
            current->next = temp->next;
            delete temp;
        }
        return *this;

        
    }
  
        ~LinkedList() {
        while (head != nullptr) {
            Node* temp = head;
            head = head->next;
            delete temp;
        }
    }
};

