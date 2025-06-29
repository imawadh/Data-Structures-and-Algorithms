// NOt Done 
// Think Logically and do it ..... 

#include<iostream>
#include<vector>

using namespace std;

class Queue{
    public:
        vector<int> v;
        int idx;
        int maxSize;

        Queue(int size=100){
            maxSize = size;
            idx = 0; // Ye hameasha Wahi Position de raha hai jaha Inserion insertion of element posssible hai  .... 
            v.resize(maxSize);
        }

        // Pushing Element in the Queue 
        void push(int val){
            if(idx>=maxSize){
                cout<<"QUEUE IS FULL\n";
                return;
            }
            v[idx] = val;
            idx++;
            return;
        }
        

        // Pop elements from the Queue 
        void pop(){
            // 0(n) time
            if(idx<=0){
                cout<<"QUEUE IS EMPTY\n";
                return;
            }
            for(int i = 1; i<idx;i++ ){
                v[i-1] = v[i];
            }
            idx--;
            return;
        }

        // Displying all elements from Queue 
        void display() {
            cout << "Queue: ";
            for (int i = 0; i < idx; i++) {
                cout << v[i] << " ";
            }
            cout << "\n";
        }

        bool isEmpty(){
            return idx==0;
        }

        
};

int main() {
    Queue q(3);

    // Test 1: Initially empty
    cout << "Test 1 - isEmpty (should be 1): " << q.isEmpty() << "\n";

    // Test 2: Push elements
    q.push(5);
    q.push(10);
    cout << "Test 2 - isEmpty (should be 0): " << q.isEmpty() << "\n";

    // Test 3: Push until full
    q.push(15);
    q.push(20);  // Should print "QUEUE IS FULL"

    // Test 4: Pop one element
    q.pop();
    cout << "Test 4 - isEmpty (should be 0): " << q.isEmpty() << "\n";

    // Test 5: Pop remaining elements
    q.pop();
    q.pop();
    cout << "Test 5 - isEmpty (should be 1): " << q.isEmpty() << "\n";

    // Test 6: Pop from empty queue
    q.pop();  // Should print "QUEUE IS EMPTY"

    return 0;
}
