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

// Displaying a Linked List
void display(Node* temp){
    if(temp==NULL){
        return;
    }
    cout<<(*temp).val<<' ';
    display(temp->next);
}

// Size of Linked List
int size(Node* temp){
    if(temp==NULL){
        return 0;
    }
    
    return 1 + size(temp->next);
}

//Display all the element except Last one 
void displayExceptLast(Node* temp){
    if(temp==NULL || temp->next==NULL){
        return;
    }
    cout<<temp->val<<' ';
    displayExceptLast(temp->next);
}

// Display alternate node of linked list
void displayAlternate(Node* temp){
    if(temp==NULL ){
        return;
    }
    cout<<temp->val<<' ';
    if(temp->next!=NULL){
        displayAlternate(temp->next->next);
    }
    
}

// Display List in Reverse Order
void displayReverse(Node* temp){
    if(temp==NULL){
        return;
    }
    displayReverse(temp->next);
    cout<<(*temp).val<<' ';
}

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
    cout<<"Printing all the nodes :: ";
    display(temp);


    cout<<"\nSize of list is :: ";
    cout<<size(temp);

    cout<<"\nPrinting all the nodes except last :: ";
    displayExceptLast(temp);

    cout<<"\nAlternate Node Printing :: ";
    displayAlternate(temp);

    cout<<"\nReverse of linked list is :: ";
    displayReverse(temp);


    
}