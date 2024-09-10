# include <bits/stdc++.h>
using namespace std;
// done
int main()
{
    cout<<"Enter no of Student : ";
    int n;
    cin>>n;
    cout<<"Enter marks in the patten roll no. and marks : \n";
    int arr[n][2];
    for(int i = 0; i<n; i++)
    {
        for (int j =0; j<2; j++)
        {
            cin>>arr[i][j];
        }
        
    }
    cout<<"Roll No. Marks \n";
    int arr3[3][3] ={1,2,3,4,5,6,7,8,9};
    for(int i = 0; i<n; i++)
    {
        for (int j =0; j<2; j++)
        {
            cout<<arr[i][j]<<"        ";
        }
        cout<<endl;
    }

}