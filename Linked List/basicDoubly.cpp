#include<iostream>
using namespace std;

// Node Class 
class Node{
    public: 
        int val;
        Node* next;
        Node* pre;
        Node(int val){
            this->val = val;
            this->pre = nullptr;
            this->next = nullptr;
        }
};

void displayHead(Node* head){
    Node* temp  = head;
    while (temp)
    {
        cout<<temp->val<<' ';
        temp = temp->next;
    }
}

void DisplayTail(Node* tail){
    Node* temp = tail;
    while (temp)
    {
        cout<<temp->val<<' ';
        temp = temp->pre;
    }

}
int main(){
    // 10 20 30 40 
    Node* a = new Node(10);
    Node* b = new Node(20);
    Node* c = new Node(30);
    Node* d = new Node(40);

    a->next = b;
    b->next = c;
    c->next = d;

    b->pre = a;
    c->pre = b;
    d->pre = c;


    cout<<"\nPriting the doubly linked list using next pointer .... ";
    displayHead(a);

    cout<<"\nPriting the doubly linked list using pre pointer .... ";
    DisplayTail(d);
    


}

// In singly linked list we can not print all the elements if any random node is given from the list ....

// We can print all the nodes value from any random node in the doubly linked list  