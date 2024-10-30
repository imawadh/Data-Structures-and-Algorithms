# include <bits/stdc++.h>
using namespace std;
 
// Define
#define  loop(j) for(int i =0; i<j; i++) ;
 
// Typedef
typedef long long  ll;

void insertionSort(int arr[], int size)
{
    cout<<endl;
    for(int i =1; i<size; i++)
    {
        int j = i;
        while(j>=1 && arr[j]<arr[j-1])
        {
            swap(arr[j],arr[j-1]);
            j--;

        } 
    }
    cout<<endl;
}
 
void awadh_solution(){
  int arr[] = {-10,2,3,4,5,6,7,8,9919,-3,8,7,6,5,4,3,21};
  int size =  sizeof(arr)/sizeof(arr[0]);

  cout<<"Original Array :: ";
  for(int ele: arr)
  {
    cout<<ele<<' ';
  }

  insertionSort(arr,size);

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