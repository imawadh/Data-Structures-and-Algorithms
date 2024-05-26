# include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[5]={23,109,87,456,67};
    int first=INT_MIN;
    int second =INT_MIN;
    for(int i = 0; i<5;i++)
    {
        if(arr[i]>first)
        {
            second=first;
            first=arr[i];
            
        }
        else{
            if(arr[i]>second)
            {
                second=arr[i];
            }
        }
    }
    cout<<first<<' '<<second;
   
}