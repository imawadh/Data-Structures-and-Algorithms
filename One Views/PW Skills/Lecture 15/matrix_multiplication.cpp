# include <bits/stdc++.h>
using namespace std;
// done has to be re done with rectangle 
int main()
{
    int arr1[2][2]= {1,2,3,4};
    int arr2[2][2] = {1,2,3,4};
    int ans[2][2];
    for(int i=0; i<2; i++)
    {
        for(int j =0; j<2; j++)
        {
            int temp = 0;
            for(int k= 0; k<2; k++)
            {
                temp = temp + arr1[i][k]*arr2[k][j];
               
               
            }
            ans[i][j]=temp;
        }
    }
    for(int i=0; i<2; i++)
    {
        for(int j =0; j<2; j++)
        {
            cout<<ans[i][j]<<' ';
        }
        cout<<endl;
    }
}