# include <iostream>
# include <vector>
using namespace std;
int BinarySearch(vector<int> v,int target,int low, int high)
{
    if(low<=high)
    {
        int mid = low + (high-low)/2;
        if(v[mid]==target)
        {
            return mid;
        }
        else if(v[mid]>target)
        {
            return BinarySearch(v,target,low,mid-1);
        }
        else{
            return BinarySearch(v,target,mid+1,high);
        }
    }
    return -1;
    
    
}
int main(){
    vector <int> v = {1,2,3,5,6,9,16,89,890};
    int low = 0;
    int high = v.size()-1;
    cout<<BinarySearch(v,890,low,high);
}