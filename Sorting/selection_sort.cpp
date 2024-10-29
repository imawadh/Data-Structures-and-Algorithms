# include <bits/stdc++.h>
using namespace std;
 
// Define
#define  loop(j) for(int i =0; i<j; i++) ;
 
// Typedef
typedef long long  ll;
void selection_sort(int arr[],int size)
{
    
   
    for(int i =0; i<size-1; i++)
    {
        int idx = i;
        for(int j =i; j<size; j++)
        {
            if(arr[idx]>arr[j])
            {
                idx = j;
            }
        }
        swap(arr[i],arr[idx]);
    }
   
}
void awadh_solution(){
 
    int arr[] = {1,2,3 ,9,4,-8,2,0,-1,98};
    cout<<"Original Array :: ";
    int size = sizeof(arr)/sizeof(arr[0]);
    for(int element : arr)
    {
        cout<<element<<' ';
    }
    cout<<"\nSorted array :: ";
    selection_sort(arr,size);
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