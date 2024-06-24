# include <bits/stdc++.h>
using namespace std;
int main() {
    vector <int> arr = {1, 2, 3, 4, 5,6,7,8,9,10};
    int low = 0;
    int high = arr.size() - 1;
    int target = 6;
    while(low < high) {
        int mid = low + (high - low) / 2;
        if(arr[mid]==target)
        {
            cout<<"Present";
            return 0;
        }
        else if(arr[mid]<target)
        {
            low = mid+1;
        }
        else{
            high = mid -1;
        }
    }
    cout<<"Absent";
    return 0;
    

}