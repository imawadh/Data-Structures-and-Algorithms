#include <bits/stdc++.h>
using namespace std;
class Node{
    public:
        int val;
        Node* next;
    Node(int val){
        (*this).val = val;
        // this->val = val;
    }

};
int main(){
    // 10 20 30 40
    Node a(10);
    // a.val = 10;
    Node b(20);
    // b.val = 20;
    Node c(30);
    // c.val = 30;
    Node d(40);
    // d.val = 40;

    // Forming Linked List
    a.next = &b;
    b.next = &c;
    c.next = &d;
    d.next = nullptr;
    
    Node temp = a;// This make a shallow copy of current node 
    while(true){
        cout<<temp.val<<'\n';
        if(temp.next == nullptr) break;
        temp = *(temp.next);
        // since temp.next is an address and temp is Node type object so need to deference node.next to a node type and assign it to temp variable of node type .... 
    }
    
    Node* t = &a;
    // Here t is storing the address of node a so it always need a address to store not the node i.e; it will always store the address of the node type object not the node object ...
    while(true){
        if(t==nullptr) break;
        cout<<t->val<<' '<<(*t).val<<'\n';
        // t = (*t).next; 
        t = t->next;

    }
    
}