# include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[5]={56,87,90,45,34};
    int max = INT_MIN;
    cout<<INT_MIN<<endl;
    cout<<INT_MAX<<endl;
    for(int i =0;i<5; i++)
    {
        if(arr[i]>max)
        {
            max = arr[i];
        }
    }
    cout<<max;
}