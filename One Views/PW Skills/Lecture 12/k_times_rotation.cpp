# include <bits/stdc++.h>
using namespace std;

// Solved 

vector<int> reverse(vector<int> &arr,int reverse_start,int reverse_end)
{
    while(reverse_start<reverse_end)
    {
        int temp = arr[reverse_end];
        arr[reverse_end]=arr[reverse_start];
        arr[reverse_start]=temp;
        reverse_end--;
        reverse_start++;
        
    }
    return arr;
}


int main()
{
    vector <int> arr; 
    arr.push_back(7);
    arr.push_back(79);
    arr.push_back(54);
    arr.push_back(73);
    arr.push_back(799);
    arr.push_back(544);
    for (int i = 0; i<arr.size();i++)
    {
        cout<<arr[i]<<' ';
    }
    cout<<endl;

    int reverse_start,reverse_end = arr.size();
    cout<<"Enter Number of Rotation  :  ";
    cin>>reverse_start;
    // vector <int> answer = reverse(arr,reverse_start-1,reverse_end-1);

    reverse(arr,arr.size()-reverse_start,reverse_end-1);


    cout<<"Last k reverse... \n";
    for (int i = 0; i<arr.size();i++)
    {
        cout<<arr[i]<<' ';
    }
    cout<<endl;
    reverse(arr,0,reverse_start-1);
    cout<<"First k reverse... \n";
    for (int i = 0; i<arr.size();i++)
    {
        cout<<arr[i]<<' ';
    }
    cout<<endl;
    cout<<"Now Total Reverse gives final output :  \n";
    reverse(arr,0,reverse_end-1);
    
    for (int i = 0; i<arr.size();i++)
    {
        cout<<arr[i]<<' ';
    }
    cout<<endl;
    

}