#include <bits/stdc++.h>
using namespace std;

int main() {

    // Array 1: Not initialized (contains garbage values)
    cout << "\n\nStarting with array 1 (not initialized)" << '\n';
    int arr1[7];  // Garbage values
    for (int i = 0; i < 7; ++i)
        cout << "Element at index " << i << " is :: " << arr1[i] << '\n';

    // Vector 1: Default initialized to 0
    cout << "\n\nStarting with vector 1 (default initialized to 0)" << '\n';
    vector<int> v1(7);
    for (int i = 0; i < 7; ++i)
        cout << "Element at index " << i << " is :: " << v1[i] << '\n';

    // Array 2: Partially initialized
    cout << "\n\nStarting with array 2 (partially initialized: int arr2[7] = {10})" << '\n';
    int arr2[7] = {10};  // arr2[0] = 10, rest = 0
    for (int i = 0; i < 7; ++i)
        cout << "Element at index " << i << " is :: " << arr2[i] << '\n';

    // Vector 2: Fully initialized to 10
    cout << "\n\nStarting with vector 2 (initialized with value 10)" << '\n';
    vector<int> v2(7, 10);  // all 7 elements = 10
    for (int i = 0; i < 7; ++i)
        cout << "Element at index " << i << " is :: " << v2[i] << '\n';

    // Array 3: Fully initialized
    cout << "\n\nStarting with array 3 (fully initialized)" << '\n';
    int arr3[7] = {1, 2, 3, 4, 5, 6, 7};
    for (int i = 0; i < 7; ++i)
        cout << "Element at index " << i << " is :: " << arr3[i] << '\n';

    // Static Array: Automatically zero-initialized if not fully initialized
    cout << "\n\nStarting with static array (partial initialization)" << '\n';
    static int arr4[7] = {50};  // arr4[0] = 50, rest = 0 (due to static)
    for (int i = 0; i < 7; ++i)
        cout << "Element at index " << i << " is :: " << arr4[i] << '\n';

    return 0;
}
