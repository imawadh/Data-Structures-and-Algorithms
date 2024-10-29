# include <bits/stdc++.h>
using namespace std;
 
// Define
#define  loop(j) for(int i =0; i<j; i++) ;
 
// Typedef
typedef long long  ll;
void insertionSort(int arr[],int size)
{
    for(int i =1; i<size; i++)
    {
        int val = arr[i];
        for(int j=i-1; j>=0; j--)
        {
            if(arr[j]>arr[j+1])// if we compare with we would always get same index of i to swap
            {
                swap(arr[j],arr[j+1]);
            }
            else{
                break;
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

    insertionSort(arr,size);

    cout<<"\nSorted Array :: ";
    for(int element : arr)
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