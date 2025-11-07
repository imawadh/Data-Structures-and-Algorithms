# include <bits/stdc++.h>
using namespace std;
 
// Define
#define  loop(j) for(int i =0; i<j; i++) ;
 
// Typedef
typedef long long  ll;


class Node{
    public:
        int val;
        Node* left;
        Node* right;

    Node(int val){
        this->val =val;
        this->left =NULL;
        this->right=NULL;
    }
        
};


 
void awadh_solution(){

    Node* root = new Node(1);
    Node* a = new Node(2);
    Node* b = new Node(3);
    Node* c = new Node(4);
    Node* d = new Node(5);
    Node* e = new Node(6);
    Node* f = new Node(7);

    root->left = a;
    root->right = b;
    a->left = c;
    a->right = d;
    b->left = e;
    b->right = f;


    cout<<"root->val :: "<<root->val<<'\n';
    cout<<"root->left->val :: "<<root->left->val<<'\n';
    cout<<"root->right->val :: "<<root->right->val<<'\n';
    cout<<"a->left->val :: "<<a->left->val<<'\n';
    cout<<"a->right->val :: "<<a->right->val<<'\n';
    cout<<"b->left->val :: "<<b->left->val<<'\n';
    cout<<"b->right->val :: "<<b->right->val<<'\n';
    cout<<"c->left :: "<<c->left<<'\n';
    cout<<"c->right :: "<<c->right<<'\n';
    cout<<"d->left  :: "<<d->left<<'\n';
    cout<<"d->right :: "<<d->right<<'\n';
    cout<<"e->left  :: "<<e->left<<'\n';
    cout<<"e->right :: "<<e->right<<'\n';
    cout<<"f->left  :: "<<f->left<<'\n';
    cout<<"f->right :: "<<f->right<<'\n';
   

 
 
}
 
int main(){
 
    ios::sync_with_stdio(false);
    cin.tie(NULL);
 
    int test=1;
    while(test--){
       awadh_solution();
    }
}