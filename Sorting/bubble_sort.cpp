# include <bits/stdc++.h>
using namespace std;
 
// Define
#define  loop(j) for(int i =0; i<j; i++) ;
 
// Typedef
typedef long long  ll;
void buubleSort(int arr[],int size)
{
    
    for(int i =0; i<size-1; i++)// Here size-1 because maximum number of passes required is size -1
    {
        bool flag = false;
        for(int j =0; j<size-i-1; j++) // pichhe se kitna chodna hai  
        {
            if(arr[j]>arr[j+1])
            {
                swap(arr[j],arr[j+1]);
                flag = true;
            }
        }
        if(!flag)
        {
            break;
        }
    }
    cout<<"\nSorted Array is :: ";
    for(int i =0; i<size; i++)
    {
        cout<<arr[i]<<' ';
    }

}
void awadh_solution(){
    int arr[]  = {1,2,3,4,6,7,8,9,6,5,3,4};
    int size = sizeof(arr)/sizeof(arr[0]);
    cout<<"Original Array  :: ";
    for(int i =0; i<size; i++)
    {
        cout<<arr[i]<<' ';
    }
    cout<<'\n';
    buubleSort(arr,size);
 
}
 
int main(){
 
    ios::sync_with_stdio(false);
    cin.tie(NULL);
 
    int test=1;
    while(test--){
       awadh_solution();
    }
}