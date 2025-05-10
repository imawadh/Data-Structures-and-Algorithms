#include <bits/stdc++.h>
using namespace std;

class Node{ // User Defined Data Type
    public:
        int val;
        Node* next;
        Node(int val){
            (*this).val = val;
            // this->val = val;
            next = nullptr;
        }

};

class LinkedList{ // User Defined Data Structure
    public:
        Node* head;
        Node* tail;
        int size;
        LinkedList(){
            head = NULL;
            tail = NULL;
            size = 0;
        }

        // Insertion at tail of Linked List
        void insertAtTail(int val){
            Node* temp = new Node(val);
            if(size>0){
                tail->next = temp;
                tail = tail->next;
            }
            if(size==0){
                head =  tail = temp;
            }
            size++;
        }

        int sizeOfLinkedList(){
            return size;
        }

        void display(){
            Node* temp = head;
            while(temp!=NULL){
                cout<<temp->val<<' ';
                temp = temp->next;
            }
        }

        void insertAtHead(int val){
            Node* temp  = new Node(val);
            if(size==0){
                head = tail = temp;
            }
            else{
                temp->next = head;
                head = temp;
            }
            size++;
        }

        void insert(int idx, int val){
            if(idx<0 || idx>size){
                cout<<"\nInvalid Index \n";
            }
            else if(idx==0){
                insertAtHead(val);
            }
            else if(idx==size){
                insertAtTail(val);
            }
            else{
                Node* temp = new Node(val);

                Node* t1 = head;
                for(int i = 1; i<idx; i++){
                    t1 = t1->next;
                }
                // Node* t2 = t1->next;
                // t1->next = temp;
                // temp->next = t2;

                //OR

                temp->next = t1->next;
                t1->next = temp;
                size++;
            }
            
        }

        int getElement(int idx){
            if(size==0){
                cout<<"No Element Present\n ";
                return -1;
            }
            else{
                if(idx<0 || idx>=size){
                    cout<<"Invalid Index ";
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

        void deleteHead(){
            if(size == 0){
                cout<<"NO Element Present .... ";
            }
            else if(size==1){
                head = tail = NULL;
                size --;
            }
            else{
                head =  head->next;
                size --;
            }
            
            
        }

        void deleteTail(){
            if(size == 0){
                cout<<"NO Element Present .... ";
            }
            else if(size==1){
                head = tail = NULL;
                size --;
            }
            else{
                Node* temp = head;
                while(temp->next!=tail){
                    temp = temp->next;
                }
                temp->next = NULL;
                tail = temp;
                size--;
            }
            
        }

        void deleteAtInx(int idx){
            if(idx<0 || idx>=size){
                cout<<"No such Index -- Invalid Index ...";
            }
            else if(idx==0){
                deleteHead();
            }
            else if(idx==size-1){
                deleteTail();
            }
            else{
                Node* temp = head;
                for(int i =0; i<idx-1; i++){
                    temp = temp->next;
                }
                temp->next = temp->next->next;
                size--;
            }

        }




};
int main() {
    LinkedList ll;

    cout << "Testing LinkedList implementation:\n";

    // Test 1: Initial state
    cout << "\nTest 1: Initial state";
    cout << "\nSize: " << ll.sizeOfLinkedList(); // Expected: 0
    cout << "\nDisplay: "; ll.display();         // Expected: (nothing)

    // Test 2: Insert at tail
    ll.insertAtTail(10);
    ll.insertAtTail(20);
    ll.insertAtTail(30);
    cout << "\n\nTest 2: After insertAtTail(10,20,30)";
    cout << "\nSize: " << ll.sizeOfLinkedList(); // Expected: 3
    cout << "\nDisplay: "; ll.display();         // Expected: 10 20 30

    // Test 3: Insert at head
    ll.insertAtHead(5);
    ll.insertAtHead(1);
    cout << "\n\nTest 3: After insertAtHead(5,1)";
    cout << "\nSize: " << ll.sizeOfLinkedList(); // Expected: 5
    cout << "\nDisplay: "; ll.display();         // Expected: 1 5 10 20 30

    // Test 4: Insert at index
    ll.insert(2, 7);
    ll.insert(0, 0);    // Insert at head
    ll.insert(7, 40);    // Insert at tail (size=7 before insertion)
    cout << "\n\nTest 4: After insert(2,7), insert(0,0), insert(7,40)";
    cout << "\nSize: " << ll.sizeOfLinkedList(); // Expected: 8
    cout << "\nDisplay: "; ll.display();         // Expected: 0 1 5 7 10 20 30 40

    // Test 5: Get element
    cout << "\n\nTest 5: Get element at index";
    cout << "\nIndex 0: " << ll.getElement(0);   // Expected: 0
    cout << "\nIndex 3: " << ll.getElement(3);   // Expected: 7
    cout << "\nIndex 7: " << ll.getElement(7);   // Expected: 40
    cout << "\nIndex -1: " << ll.getElement(-1); // Expected: Invalid Index -1
    cout << "\nIndex 8: " << ll.getElement(8);   // Expected: Invalid Index -1

    // Test 6: Delete head
    ll.deleteHead();
    cout << "\n\nTest 6: After deleteHead()";
    cout << "\nSize: " << ll.sizeOfLinkedList(); // Expected: 7
    cout << "\nDisplay: "; ll.display();         // Expected: 1 5 7 10 20 30 40

    // Test 7: Delete tail
    ll.deleteTail();
    cout << "\n\nTest 7: After deleteTail()";
    cout << "\nSize: " << ll.sizeOfLinkedList(); // Expected: 6
    cout << "\nDisplay: "; ll.display();         // Expected: 1 5 7 10 20 30

    // Test 8: Delete at index
    ll.deleteAtInx(2);   // Delete 7
    ll.deleteAtInx(0);   // Delete head (1)
    ll.deleteAtInx(3);   // Delete tail (30) (size=4 before deletion)
    cout << "\n\nTest 8: After deleteAtInx(2), deleteAtInx(0), deleteAtInx(3)";
    cout << "\nSize: " << ll.sizeOfLinkedList(); // Expected: 3
    cout << "\nDisplay: "; ll.display();         // Expected: 5 10 20

    // Test 9: Edge cases
    cout << "\n\nTest 9: Edge cases";
    LinkedList emptyList;
    cout << "\nEmpty list deleteHead(): "; emptyList.deleteHead();
    cout << "\nEmpty list deleteTail(): "; emptyList.deleteTail();
    cout << "\nEmpty list deleteAtInx(0): "; emptyList.deleteAtInx(0);
    cout << "\nEmpty list size: " << emptyList.sizeOfLinkedList(); // Expected: 0
    
    return 0;
}