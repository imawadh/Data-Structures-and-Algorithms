# include <bits/stdc++.h>
using namespace std;
 
// Define
#define  loop(j) for(int i =0; i<j; i++) ;
 
// Typedef
typedef long long  ll;

void selectionSort(int arr[], int size)
{
    for(int i =0; i<size; i++)
    {
        int m = INT_MAX;
        int idx = i;
        for(int j =i; j<size; j++)
        {
            if(arr[j]<m)
            {
                m =  arr[j];
                idx =  j;
            }
        }
        swap(arr[i],arr[idx]);
    }
}
 
void awadh_solution(){

  int arr[] = {1,2,3,4,5,6,7,8,9,-3,67,7,6,5,4,3,21};
  int size =  sizeof(arr)/sizeof(arr[0]);

  cout<<"Original Array :: ";
  for(int ele: arr)
  {
    cout<<ele<<' ';
  }

  selectionSort(arr,size);

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