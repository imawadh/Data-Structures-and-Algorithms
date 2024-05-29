# include <bits/stdc++.h>
using namespace std;
// done
int main()
{
    
    int arr[3][3] ={{1,-45,3},{4,89,6},{7,8,9}};
    int arr1[3][3] ={{1,-45,3},{4,89,6},{7,8,9}};
    
    for(int i = 0; i<3; i++)
    {
        for (int j =0; j<3; j++)
        {
            arr[i][j]+=arr1[i][j];
        }
        
    }
    for(int i = 0; i<3; i++)
    {
        for (int j =0; j<3; j++)
        {
            cout<<arr[i][j]<<' ';
        }
        cout<<endl;
    }
        
}