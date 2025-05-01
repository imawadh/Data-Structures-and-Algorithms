#include <iostream>
using namespace std;
class Node{
    public:
        int val;
        Node* next;
        Node(int val){
            this->val = val;
            (*this).next = NULL;
        }
};

void display(Node* temp){
    if(temp==NULL){
        return;
    }
    cout<<(*temp).val<<' ';
    display(temp->next);
}

int main(){
    cout<<"Hello World\n";
    Node* n1 = new Node(10);
    Node* n2 = new Node(20);
    Node* n3 = new Node(30);
    Node* n4 = new Node(40);
    Node* n5 = new Node(50);
    Node* n6 = new Node(60);

    n1->next = n2;
    n2->next = n3;
    n3->next = n4;
    n4->next = n5;
    n5->next = n6;

    Node* temp = n1;
    // Printing all the node using simple loop
    // while (temp!=NULL)
    // {
    //     cout<<temp->val<<' ';
    //     temp = temp->next;
    // }

    // Using Recursive Function Printing of all the node val
    display(temp);
    
    


}