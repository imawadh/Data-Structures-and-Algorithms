# include <bits/stdc++.h>
using namespace std;
int main()
{
    vector <int> v = {73,82,68,58,43,36,24,12,7,-2};
    int low = 0;
    int high = v.size()-1;
    int target = 73;
    while(low<=high)
    {
        int mid = low + (low+high)/2;
        if (v[mid]== target)
        {
            cout<<"Present";
            return 0;
        }
        else if(v[mid]>target)
        {
            high = mid - 1;
        }
        else{
            low = mid +1;
        }
        cout<<"Absent";
        return 0;

    }
}