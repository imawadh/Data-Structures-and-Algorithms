# include<bits/stdc++.h>
using namespace std;
// Done 
vector <int> swap(vector <int> &arr, int index1, int index2)
{
    int temp = arr[index1];
    arr[index1] =arr[index2];
    arr[index2]=temp;
    return arr;
}
vector <int> dutch_flag_algorithm(vector <int> &arr)
{
    int low = 0;
    int mid = 0;
    int high = arr.size()-1;
    while(mid<high)
    {
        if(arr[mid]==2)
        {
            swap(arr,mid,high);
            high--;
        }
        if(arr[mid]==0)
        {
            swap(arr,mid,low);
            mid++;
            low++;
            
        }
        if(arr[mid]==1)
        {
            mid++;
        }
    }
    return arr;

}
int main()
{
    vector <int> v;
    v.push_back(0);
    v.push_back(1);
    v.push_back(1);
    v.push_back(2);
    v.push_back(1);
    v.push_back(0);
    v.push_back(2);
    v.push_back(1);
    v.push_back(1);
    v.push_back(0);
    v.push_back(1);
    v.push_back(2);
    dutch_flag_algorithm(v);
    for(int i =0; i<v.size();i++)
    {
        cout<<v[i]<<' ';
    }
    

}