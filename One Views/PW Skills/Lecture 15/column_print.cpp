# include <bits/stdc++.h>
using namespace std;
// done    
int main()
{
    int row,col;
    cout<<"Enter rows and column respectively  : ";
    cin>>row>>col;
    int arr[row][col];
    int val = 1;
    for(int i = 0; i<row; i++)
    {
        for(int j = 0; j<col; j++ )
        {
            arr[i][j]=val;
            val++;
        }
    }
    for(int i = 0; i<row; i++)
    {
        
        for(int j = 0; j<col; j++ )
        {
           cout<<arr[i][j]<<' ';
        }
        cout<<endl;
    }
    cout<<"Column Print \n";
    for(int i = 0; i<col; i++)
    {
        
        for(int j = 0; j<row; j++ )
        {
           cout<<arr[j][i]<<' ';
        }
    }
        
        
        
        
        
}
