# include <bits/stdc++.h>
using namespace std;
// done
int main()
{
    int arr[] = {1,2,3,4}; // One dimensional array
    int arr1[3][3]; // 2D array declaration  
    arr1[0][0] = 4;
    arr1[0][2] = 14;
    arr1[1][2] = 8;
    cout<<arr1[0][0]<<endl;
    int arr2[3][3] ={{1,2,3},{4,5,6},{7,8,9}};
    // int size1 = arr2.size();
    for(int i = 0; i<3; i++)
    {
        for (int j =0; j<3; j++)
        {
            cout<<arr2[i][j]<<' ';
        }
        cout<<endl;
    }
    int arr3[3][3] ={1,2,3,4,5,6,7,8,9};
    for(int i = 0; i<3; i++)
    {
        for (int j =0; j<3; j++)
        {
            cout<<arr3[i][j]<<' ';
        }
        cout<<endl;
    }

}