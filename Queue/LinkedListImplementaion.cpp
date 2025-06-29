#include<iostream>
#include<vector>

using namespace std;

class Node{
    public:
        int val;
        Node* next;

        Node(int val){
            this->val = val;
            next = nullptr;
        }
};

class Queue{
    public:
        Node* front;
        Node* back;
        int size;

        Queue(){
            front = back = nullptr;
            size = 0;
        }

        void push(int val){
            Node* newNode = new Node(val);
            if(size==0){
                front = back = newNode;
            }else{
                back->next= newNode;
                back = newNode;
            }
            size++;
        }

        void pop(){
            if(size==0){
                cout<<"Queue is empty !\n";
                return;
            }
            Node* temp = front;
            front = front->next;
            size--;
            delete temp;
        }
        
        void display(){
            if(size==0){
                cout<<"Nothing to display ::: \n";
            }

            Node* t = front;
            while(t!=nullptr){
                cout<<t->val<<' ';
                t = t->next;
            }
            cout<<'\n';
        }
        int peek(){
            if(size==0){
                cout<<"QUEUE Is Empty !\n";
                return -1;
            }
            return front->val;
            
        }
        int getSize(){
            return size;
        }

};
int main() {
    Queue q;

    // Test Case 1: Basic Operations
    cout << "Test Case 1: Basic Operations\n";
    q.push(10);
    q.push(20);
    q.push(30);
    q.display();
    q.pop();
    q.display();
    q.pop();
    q.pop();
    q.pop(); // Attempt to pop from empty queue

    // Test Case 2: Peek Operation
    cout << "\nTest Case 2: Peek Operation\n";
    q.push(100);
    q.push(200);
    q.push(300);
    cout << "Front element: " << q.peek() << endl;
    q.display();
    q.pop();
    cout << "Front element after deletion: " << q.peek() << endl;

    // Test Case 3: Empty Queue Operations
    cout << "\nTest Case 3: Empty Queue Operations\n";
    q.pop(); // Attempt to pop from empty queue
    cout << "Front element: " << q.peek() << endl;

    // Test Case 4: Size Method
    cout << "\nTest Case 4: Size Method\n";
    q.push(5);
    q.push(10);
    q.push(15);
    cout << "Queue size: " << q.getSize() << endl;
    q.pop();
    cout << "Queue size after deletion: " << q.getSize() << endl;

    // Test Case 5: Multiple Enqueues and Dequeues
    cout << "\nTest Case 5: Multiple Enqueues and Dequeues\n";
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
    q.display();
    q.pop();
    q.pop();
    q.push(6);
    q.push(7);
    q.display();
    q.pop();
    q.pop();
    q.pop();
    q.pop();
    q.pop();
    q.pop();
    q.pop(); // Attempt to pop from empty queue

    return 0;
}
