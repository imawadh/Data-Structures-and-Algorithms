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

class doublyLinkedList{

public:
    Node* head;
    Node* tail;
    int size;
    doublyLinkedList(){
        head = tail = nullptr;
        size = 0;
    }


    //Insertion Methods in Doubly Linked List ---- 
    void insertAtHead(int val){
        Node* temp = new Node(val);
        if(size==0){
            head = tail = temp;
        }
        else{
            temp->next = head;
            head->pre = temp;
            head = temp;
        }
        size++;
    }

    void insertAtTail(int val){
        Node* temp = new Node(val);
        if(size==0){
            head = tail = temp;
        }
        else{
            tail->next = temp;
            temp->pre = tail;
            tail = temp;
        }
        size++;
    }

    void insertAtIndex(int val, int idx){
        
        if(idx==0){
            insertAtHead(val);
            return;  
        } 
        if(idx>=size){
            insertAtTail(val);
            return;
        }

        Node* temp = new Node(val);
        Node* t = head;
        
        for(int i = 0; i<idx-1; i++){
            t = t->next;
        }

        t->next->pre = temp;
        temp->next = t->next;
        temp->pre = t;
        t->next = temp;
        size++;
    }

    // Display Doubly Linked List

    void displayHead(){
        cout<<"\nDisplaying from Head ::: ";
        Node* temp  = head;
        while (temp)
        {
            cout<<temp->val<<' ';
            temp = temp->next;
        }
    }
    
    void DisplayTail(){
        cout<<"\nDisplaying from Tail ::: ";
        Node* temp = tail;
        while (temp)
        {
            cout<<temp->val<<' ';
            temp = temp->pre;
        }
    }

    // Deletion of elements 
    void deleteHead(){
        if(size == 0){
            cout<<"NO Element Present ....\n ";
        }
        else if(size==1){
            head = tail = nullptr;
            size --;
        }
        else{
            head =  head->next;
            head->pre = nullptr;
            size --;
        }
    }

    void deleteTail(){
        if(size == 0){
            cout<<"NO Element Present .... \n";
        }
        else if(size==1){
            head = tail = nullptr;
            size --;
        }
        else{
            tail = tail->pre;
            tail->next = nullptr;
            size--;
        }
        
    }

    void deleteAtInx(int idx){
        if(idx<0 || idx>=size){
            cout<<"No such Index -- Invalid Index ...\n";
        }
        else if(idx==0){
            deleteHead();
        }
        else if(idx==size-1){
            deleteTail();
        }
        else{
            Node* temp = head;
            for(int i =0; i<idx; i++){
                temp = temp->next;
            }
            temp->pre->next = temp->next;
            temp->next->pre = temp->pre;
            size--;
        }

    }

    int getAtIndex(int idx){
        if(size==0){
            cout<<"No Element Present\n ";
            return -1;
        }
        else{
            if(idx<0 || idx>=size){
                cout<<"Invalid Index \n";
                return -1;
            }
            else if(idx==0){
                return head->val;
            }
            else if(idx==size-1){
                return  tail->val;
            }
            else{
                Node* temp = head;
                for(int i =0; i<idx; i++){
                    temp = temp->next;
                }
                return temp->val;
            }
        }
    }








    
    /*

    Required Functions ::: 

        Insertion --- > Tail head index 
        Display from ---> Head Tail
        Deletion --- > tail haed index 
        get --- > tail head index

        size of Linked list... 

        
    */
};

int main(){
    doublyLinkedList d1;
    d1.insertAtHead(10);    // List: 10
    d1.insertAtTail(20);    // List: 10 → 20
    d1.insertAtHead(5);     // List: 5 → 10 → 20
    d1.insertAtIndex(15, 2);// List: 5 → 10 → 15 → 20
    d1.insertAtIndex(25, 10);// List: 5 → 10 → 15 → 20 → 25 (idx out of bounds, added at tail)
    
    d1.displayHead();   // Expected: 5 10 15 20 25
    d1.DisplayTail();   // Expected: 25 20 15 10 5
    

    doublyLinkedList d2;
    d2.insertAtTail(1);
    d2.insertAtTail(2);
    d2.insertAtTail(3);
    d2.insertAtTail(4);
    d2.insertAtTail(5); // List: 1 → 2 → 3 → 4 → 5

    d2.deleteHead();     // List: 2 → 3 → 4 → 5
    d2.deleteTail();     // List: 2 → 3 → 4
    d2.deleteAtInx(1);   // List: 2 → 4
    d2.deleteAtInx(10);  // Invalid index

    d2.displayHead();    // Expected: 2 4
    d2.DisplayTail();    // Expected: 4 2

    doublyLinkedList d3;
    d3.insertAtTail(100);
    d3.insertAtTail(200);
    d3.insertAtTail(300); // List: 100 → 200 → 300

    cout << "\nGet index 0: " << d3.getAtIndex(0);  // Expected: 100
    cout << "\nGet index 1: " << d3.getAtIndex(1);  // Expected: 200
    cout << "\nGet index 2: " << d3.getAtIndex(2);  // Expected: 300
    cout << "\nGet index 5: " << d3.getAtIndex(5);  // Expected: Invalid Index

    doublyLinkedList d4;
    d4.insertAtTail(7);
    d4.insertAtTail(8);

    d4.deleteTail();     // List: 7
    d4.deleteHead();     // List empty
    d4.deleteHead();     // Should print: NO Element Present
    d4.deleteTail();     // Should print: NO Element Present

    d4.displayHead();    // Expected: (nothing)


    doublyLinkedList d5;
    d5.insertAtTail(1);
    d5.insertAtTail(2);
    d5.insertAtTail(3);
    d5.insertAtTail(4);

    d5.deleteAtInx(2);      // Remove 3 → List: 1 2 4
    d5.insertAtIndex(99, 1);// Insert 99 → List: 1 99 2 4
    d5.insertAtIndex(100, 4);// Add at tail → 1 99 2 4 100

    d5.displayHead();       // Expected: 1 99 2 4 100
    d5.DisplayTail();       // Expected: 100 4 2 99 1


    doublyLinkedList d6;
    cout << d6.getAtIndex(0); // Expected: No Element Present
    d6.deleteHead();          // Expected: NO Element Present
    d6.deleteTail();          // Expected: NO Element Present


}
