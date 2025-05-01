#include <bits/stdc++.h>
using namespace std;
class Node{
    public:
        int val;
        Node* next;
    Node(int val){
        (*this).val = val;
        // this->val = val;
        next = nullptr;
    }

};
int main(){
    // Now all these  are pointers now 

    Node* a = new Node(70);
    Node* b = new Node(60);
    Node* c = new Node(50);
    Node* d = new Node(40);
    Node* e = new Node(30);
    Node* f = new Node(20);
    Node* g = new Node(10);

    a->next = b;
    // or (*a).next = b;
    b->next = c;
    c->next =d;
    d->next =e;
    e->next = f;
    f->next = g;

    Node *temp  = a;
    while (temp!=nullptr)
    {
        cout<<temp->val<<' ';
        //temp-> means (*temp).
        temp = temp->next;
       
    }
    


    
}