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
int sumOfNodes(Node* root, int sum){

    if(root==NULL){
        return 0;
    }

    int leftSum = sumOfNodes(root->left,sum);
    int rightSum = sumOfNodes(root->right,sum);
    

    return root->val+leftSum +rightSum;

};
// int sumOfNodes(Node* root, int sum){

//     if(root==NULL){
//         return sum;
//     }

//     sum += root->val;

//     sumOfNodes(root->left,sum);
//     sumOfNodes(root->right,sum);

//     return sum;

// };  why is this wrong ? 

int sumOfNodes(Node* root){
    if(root==NULL){
        return 0;
    }

    int sum = root->val + sumOfNodes(root->left) + sumOfNodes(root->right);
    return sum;
};


// Display all the nodes data in a tree 

void displayTree(Node* root){

    Node* temp =  root;

    if(temp==NULL){
        return;
    }
    cout<<"Data  = "<<temp->val<<'\n';
    displayTree(temp->left);
    displayTree(temp->right);

}

// Size of the tree
int ct  = 0;
int sizeOfTree(Node* root){
    // if(root==NULL){
    //     return ct;
    // }
    // ct++;
    // sizeOfTree(root->left);
    // sizeOfTree(root->right);

    // return ct;    


    // or 
    if(root==NULL){
        return 0;
    }
    return 1 + sizeOfTree(root->left)+sizeOfTree(root->right);
}


int maxV =  INT_MIN;
int maxValueOfNode(Node* root){
    // if(root==NULL){
    //     return maxV;
    // }
    // int leftMax = max(maxValueOfNode(root->left),maxV);
    // int rightMax = max(maxValueOfNode(root->right),maxV);

    // return max(max(leftMax,rightMax),root->val);

    // Or 

    if(root==NULL){
        return INT_MIN;// Why not 0 ? --->  if all numbers are in negative 
    }
    return max(root->val,max(maxValueOfNode(root->left),maxValueOfNode(root->right)));
}

 
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
   
    displayTree(root);

    cout<<"Sum :: "<<sumOfNodes(root)<<'\n';

    int sum  = 0;
    cout<<"Sum  Using Method Overloading :: "<<sumOfNodes(root,sum)<<'\n';


    cout<<"Size of Tree is :: "<<sizeOfTree(root)<<'\n';


    cout<<"Max Value in the Tree is :: "<<maxValueOfNode(root)<<'\n'; 
 
}
 
int main(){
 
    ios::sync_with_stdio(false);
    cin.tie(NULL);
 
    int test=1;
    while(test--){
       awadh_solution();
    }
}