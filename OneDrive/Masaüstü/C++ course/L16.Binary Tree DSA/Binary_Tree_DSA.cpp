#include <iostream>
#include <iomanip>
#include <math.h>
#include <vector>
using namespace std;

/*
    1. Preorder, Inorder, Postorder traversals using numbers
    2. Tree common operations (insert, search, traverse, delete node)
    3. Tree traversals (preorder, inorder, postorder, level order)
    4. Identify mistakes in using recursion where it can be avoided (no need for insertion, no need for node deletion).
    5. Tree Complexity
    6. Applications
    7. What about Heap Data Structure (DSA)?

    Tree Traversal Source:    https://www.geeksforgeeks.org/tree-traversals-inorder-preorder-and-postorder/
    Insert Node Source:       https://www.javatpoint.com/insertion-in-binary-search-tree
    Delete Node Source:       https://www.interviewbit.com/blog/delete-node-from-binary-search-tree/
    Binary Tree Applications: https://www.geeksforgeeks.org/applications-advantages-and-disadvantages-of-binary-tree/
*/


struct Node {
    int data;
    Node *left;
    Node *right;
};


class BinaryTree {
    private:
        int height;
        Node *root;

         void preorder(const Node * node) const{// Root -> Left -> Right
             if(!node)return;
             cout<<node->data<<"->";
             preorder(node->left);
             preorder(node->right);
             
        }

            
        void inorder(const Node * node) const{// Left -> Root -> Right
            if(!node)return;
            inorder(node->left);
            cout<< node->data <<"->";
            inorder(node->right);

        };     
        void postorder(const Node * node) const{// Left -> Right -> Root
            if(!node)return;
            postorder(node->left);
            postorder(node->right);
            cout<<node->data<<"->";

        };   

        // method utilities
        void printTree(const vector<const Node*> &level) const{
            vector<const Node* >next;
            for(const Node* node : level){
                if(node){
                cout<<setw(10)<<node->data;
                next.push_back(node->left);
                next.push_back(node->right);
                }
            }
            cout<<endl<<endl;
            
            bool hasNext=false;
            for(const Node* n : next){
                if(n){
                    hasNext=true;
                    break;
                }
            }
            if(hasNext){
                printTree(next);
            }

        };

        void destroyTree(const Node *const node){
            if(!node)return;
            destroyTree(node->left);
            destroyTree(node->right);
            cout<<"Delete: "<<node->data<<endl;
            delete node;


        }

    public:
        BinaryTree(){
            root=nullptr;
            height=-1;
        }
        ~BinaryTree(){
            destroyTree(root);
        }

        BinaryTree& insert(const int &value){
            Node *newnode= new Node{value,nullptr,nullptr};

            if(!root){
                root=newnode;
                height=0;
                return *this;
            }
            
            Node *curr=root;

            while(true){
                if(value < curr -> data){
                    if(!curr->left){
                        curr->left=newnode;
                        break;
                    }
                    curr=curr->left;

                }else{
                    if(!curr->right){
                        curr->right=newnode;
                        break;
                    }
                    curr=curr->right;
                }
            }
            return *this;
        }


        void display() const{
            if(!root){
                cout<<"This tree is empty"<<endl;
                return;
            }
            cout<<" Tree height: "<<height<<endl;
            vector<const Node*>level={root};
            printTree(level);

        }

        void levelorder() const{
            if(!root){
                cout<<"This tree is empty"<<endl;
                return;
            }
            cout<<" Tree height: "<<height<<endl;
            vector<const Node*>level={root};
            printTree(level);

        }

        void preorder(){// Root -> Left -> Right
            preorder(root);            
        }

            
        void inorder(){// Left -> Root -> Right
           inorder(root);
        };     
        void postorder(){// Left -> Right -> Root
           postorder(root);
        };   



        bool search(const int &value) const{
            Node *curr=root;
            while(curr){
                if(value==curr->data){
                    return true;
                }else if(value<curr->data){
                    curr=curr->left;
                }else{
                    curr=curr->right;
                }
                return false;
            }
        }
        
        void deleteNode(const int &value) {
        Node *parent = nullptr;
        Node *curr = root;

        
        while (curr && curr->data != value) {
            parent = curr;
            if (value < curr->data)
                curr = curr->left;
            else
                curr = curr->right;
        }

        if (!curr) return; 

        if (!curr->left && !curr->right) {
            cout << "Leaf Node: " << curr->data << endl;

            if (!parent)
                root = nullptr;
            else if (parent->left == curr)
                parent->left = nullptr;
            else
                parent->right = nullptr;

            delete curr;
        }
    }
};





int main() {

    BinaryTree tree = BinaryTree();

    cout << endl;
    tree.display();  

    // Ex-1: tree.insert(5).insert(3).insert(8).insert(6).insert(2).insert(4).insert(9).insert(7);
    // Ex-2: https://www.javatpoint.com/insertion-in-binary-search-tree
    tree.insert(50).insert(25).insert(75).insert(12).insert(30).insert(60).insert(85).insert(52).insert(70);
    // Ex-3: tree.insert(2).insert(1).insert(33).insert(0).insert(25).insert(40).insert(11).insert(34).insert(7).insert(12).insert(36).insert(13);

    cout << endl;
    tree.display();  
    cout << endl;

    cout << (tree.search(13) ? "[13 found]" : "[13 not found]") << endl << endl;

    tree.deleteNode(52);
    tree.deleteNode(70);

    cout << endl;
    tree.display();  
    cout << endl;

    // Tree traversals (preorder, inorder, postorder, levelorder)
    cout << "Preorder:   ";
    tree.preorder();
    cout << endl;

    cout << "Inorder:    ";
    tree.inorder();
    cout << endl;

    cout << "Postorder:  ";
    tree.postorder();
    cout << endl;

    cout << "Levelorder: " << endl;
    tree.levelorder();
    cout << endl;
  
  
  	/*
    	------------------------ Output	------------------------
        
        Tree is empty

        Tree height: 3

                            50

                     25             75

               12       30       60       85

                               52   70          

        [13 not found]

        Leaf Node: 52
        Leaf Node: 70

        Tree height: 2

                       50

                 25         75

             12     30     60     85

        Preorder:   50 -> 25 -> 12 -> 30 -> 75 -> 60 -> 85
        Inorder:    12 -> 25 -> 30 -> 50 -> 60 -> 75 -> 85
        Postorder:  12 -> 30 -> 25 -> 60 -> 85 -> 75 -> 50
        Levelorder: 
        Tree height: 2

                       50

                 25         75

             12     30     60     85

        [call of destructor]
         Delete: 12
         Delete: 30
         Delete: 25
         Delete: 60
         Delete: 85
         Delete: 75
         Delete: 50
    */

    return 0;
}