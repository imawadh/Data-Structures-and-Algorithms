#include<iostream>
#include<algorithm>
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

int size(Node* root){
    if(root==nullptr){
        return 0;
    }
    return 1 + size(root->left) + size(root->right);
}

int mxVal(Node* root){
    if(root==nullptr){
        return 0;
    }
    int left = mxVal(root->left);
    int right = mxVal(root->right);
    return max(root->val, max(left , right));
}


int level(Node* root){
    if(root==nullptr){
        return 0;
    }
    return 1+  max(level(root->left),level(root->right));
}

int height(Node* root){
    if(root==nullptr){
        return -1;
    }
    return 1+  max(height(root->left),height(root->right));
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
    cout<<"\n Size of the Tree is "<<size(a);
    cout<<"\n Maximum of the Tree is "<<mxVal(a);
    cout<<"\n Number of levels of  Tree is "<<level(a);
    cout<<"\n Height of  Tree is "<<height(a);
}