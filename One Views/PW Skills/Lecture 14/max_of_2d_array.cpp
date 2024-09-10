# include <bits/stdc++.h>
using namespace std;
// done
int main()
{
    
    int arr[3][3] ={{1,-45,3},{4,89,6},{7,8,9}};
    int max = INT_MIN;
    int min = INT_MAX;
    int sum = 0;
    for(int i = 0; i<3; i++)
    {
        for (int j =0; j<3; j++)
        {
            sum+=arr[i][j];
            if(arr[i][j]>max)
            {
                max = arr[i][j];
            }
            if(arr[i][j]<min)
            {
                min = arr[i][j];
            }
        }
        
    }
    cout<<"Min = "<<min << "   Max = "<<max<<"\nSum of all element : "<<sum;    
}