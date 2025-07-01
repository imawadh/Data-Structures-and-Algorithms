#include<iostream>
using namespace std;

class Node{
    public: 
        int val;
        Node* left;
        Node* right;

        Node(int val){
            this->val = val;
            this->left = nullptr;
            this->right = nullptr;

        }
};

void display(Node* root){
    if(root==nullptr){
        return;
    }

    // Pre Order Traversal
    // cout<<root->val<<' ';
    // display(root->left);
    // display(root->right);


    //In Order Traversal
    // display(root->left);
    // cout<<root->val<<' ';
    // display(root->right);


    // Post Order Traversal
    display(root->left);
    display(root->right);
    cout<<root->val<<' ';


}

int sum(Node* root){
    if(root==nullptr){
        return 0;
    }
    return root->val + sum(root->left) + sum(root->right);
}

int main(){
    Node* a = new Node(1);
    Node* b = new Node(2);
    Node* c = new Node(3);
    Node* d = new Node(4);
    Node* e = new Node(5);
    Node* f = new Node(6);
    Node* g = new Node(7);

    a->left = b;
    a->right = c;
    b->left = d;
    b->right = e;
    c->left = f;
    c->right = g;
    
    // a is root node 
    display(a);
    cout<<"\n Sum of all the Nodes is "<<sum(a);
}