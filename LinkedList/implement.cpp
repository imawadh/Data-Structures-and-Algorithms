#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int data;
    Node* next;  

    // Constructor 
    Node(int val) {
        this->data = val;
        this->next = nullptr;  
    }
};

class LinkedList {
private:
    Node* head;

public:
    LinkedList() {
        head = nullptr;  
    }

    
    void insert(int val) {
        Node* newNode = new Node(val);  
        if (head == nullptr) {  
            head = newNode;  
        } else {
            Node* temp = head; 
            while (temp->next != nullptr) {  
                temp = temp->next;  
            }
            temp->next = newNode;  
        }
    }

    // Display the entire linked list
    void display() {
        if (head == nullptr) {
            cout << "Empty Linked List\n";  
        } 
        else {
            Node* temp = head;  
            while (temp != nullptr) {  
                cout << temp->data << ' '; 
                temp = temp->next; 
            }
            cout<<'\n';
        }
    }

   // Deleting an Element from a linked List
   void deleteNode(int val){
        if(head==nullptr){
            cout<<"The List is empty !"<<'\n';
            return;
        }
        if(head->data==val){
            Node* temp = head;
            head = head->next;
            delete temp;
            return;
        }
        else{
            Node* temp = head;
            while(temp->next != nullptr && temp->next->next->data != val){
                temp = temp->next;
            }
            
        }

    
   }
};

void awadh_solution() {
    LinkedList List;

    List.insert(10);
    List.display();
    List.insert(29);
    List.display();
    List.insert(567);
    List.display();
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int test = 1; 
    while (test--) {  
        awadh_solution();  
    }
}
