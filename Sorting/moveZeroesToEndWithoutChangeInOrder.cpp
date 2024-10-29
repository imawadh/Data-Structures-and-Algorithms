# include <bits/stdc++.h>
using namespace std;
 
// Define
#define  loop(j) for(int i =0; i<j; i++) ;
 
// Typedef
typedef long long  ll;

void moveZeroes(int arr[],int size)
{
    for(int i =0; i<size-1; i++)
    {
        for(int j =0; j<size-i-1; j++)
        {
            if(arr[j]==0)
            {
                swap(arr[j],arr[j+1]);
            }
        }
    }
}
 
void awadh_solution(){
    int arr[]   {1,2,0,4,0,7,0,9,0,5,3,4};

    int size = sizeof(arr)/sizeof(arr[0]);

    cout<<"Original Array  :: ";
    for(int element : arr)
    {
        cout<<element<<' ';
    }

    moveZeroes(arr,size);

    cout<<"\nSorted Array :: ";
    for(int element :arr)
    {
        cout<<element<<' ';
    }

 
}
 
int main(){
 
    ios::sync_with_stdio(false);
    cin.tie(NULL);
 
    int test;
    cin>>test;
    while(test--){
       awadh_solution();
    }
}