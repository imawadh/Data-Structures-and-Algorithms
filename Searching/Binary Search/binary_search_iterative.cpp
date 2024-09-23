# include <iostream>
# include <vector>
using namespace std;
int BinarySearch(vector<int> v,int target)
{
    int low = 0;
    int high = v.size()-1;
 
    while ( low<=high)
    {
        int mid = (high-low)/2 + low;
        if(v[mid]==target)
        {
            return mid;
        }
        else if(v[mid]>target)
        {
            high = mid-1;
        }
        else{
            low = mid+1;
        }
    }
    return -1;
    
    
}
int main(){
    vector <int> v = {1,2,3,5,6,9,16,89,890};
    cout<<BinarySearch(v,1);
}