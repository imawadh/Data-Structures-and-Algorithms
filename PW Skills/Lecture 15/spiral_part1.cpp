# include <bits/stdc++.h>
using namespace std;
int main()
{
    int row,col;
    cout<<"Enter number of row and number of column : ";
    cin>>row>>col; 
    int arr[row][col];
    int a = row;
    int b = col;
    for(int i = 0; i<row; i++)
    {
        for(int j = 0; j<col ; j++)
        {
            arr[i][j]=0;
        }
    }
    int val = 1;
    for(int i = 0; i<a; i++)
    {
        for(int j = 0; j<b ; j++)
        {
            arr[i][j]=val;
            val++;
        }
        row--;
        col--;
    }
    for(int i = 0; i<row; i++)
    {
        for(int j = 0; j<col ; j++)
        {
            cout<<arr[i][j]<<' ';
        }
        cout<<endl;
    }
}