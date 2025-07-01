#include <iostream>
#include <deque>

using namespace std;

int main() {
    // Create a deque of integers
    deque<int> dq = {10, 20, 30, 40, 50};

    // Add elements to the front and back
    dq.push_front(5);  // Adds 5 to the front
    dq.push_back(60);  // Adds 60 to the back

    // Access and display elements
    cout << "First element: " << dq.front() << endl;
    cout << "Last element: " << dq.back() << endl;

    // Remove elements from the front and back
    dq.pop_front();  // Removes the front element
    dq.pop_back();   // Removes the back element

    // Display the remaining elements
    cout << "Remaining elements: ";
    for (int n : dq) {
        cout << n << " ";
    }
    cout << endl;

    // Display the size of the deque
    cout << "Size of deque: " << dq.size() << endl;

    return 0;
}
