# include <bits/stdc++.h>
using namespace std;
 
// Define
#define  loop(j) for(int i =0; i<j; i++) ;
 
// Typedef
typedef long long  ll;

void bubbleSort(int arr[],int size)
{
    for(int i =0; i<size-1; i++)// Kitni baar chalega
    {
        for(int j = 0; j<size-i-1; j++)
        {
            if(arr[j]>arr[j+1])
            {
                swap(arr[j],arr[j+1]);
            }
        }
    }
}

void awadh_solution(){
  int arr[] = {1,2,3,4,5,6,7,8,9,-3,8,7,6,5,4,3,21};
  int size =  sizeof(arr)/sizeof(arr[0]);

  cout<<"Original Array :: ";
  for(int ele: arr)
  {
    cout<<ele<<' ';
  }

  bubbleSort(arr,size);

  cout<<"\nSorted Array :: ";
  for(int ele: arr)
  {
    cout<<ele<<' ';
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