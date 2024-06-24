# include <bits/stdc++.h>
using namespace std;
// Done 
int main()
{
    cout<<"Enter a num : ";
    int num;
    cin>>num;
    vector <int> arr;
    while(num!=0)
    {
        arr.push_back(num%2);
        num/=2;
    }
    while(arr.size()!=8)
    {
        arr.push_back(0);
    }
    int i=0;
    int j = arr.size()-1;
    while(i<j)
    {
        int temp= arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
        i++;
        j--;
    }
    cout<<"Binary Representation : ";
    for(int i = 0; i<arr.size(); i++)
    {
        cout<<arr[i]<<' ';
    }

}