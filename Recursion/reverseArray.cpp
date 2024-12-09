# include <bits/stdc++.h>
using namespace std;
 
// Define
#define  loop(j) for(int i =0; i<j; i++) ;
 
// Typedef
typedef long long  ll;
void print(int arr[],int size, int start=0)
{
    
    if(start==size) return;
    
    cout<<arr[start++]<<' ';
    print(arr,size,start);
    
}
void reverse(int arr[],int end, int start=0){
    if(start>=end) return;
    swap(arr[start],arr[end]);
    reverse(arr,end-1,start+1);
}
void awadh_solution(){

    int arr[]{1,2,3,7,676567,97,-234,1,2,-1};
    int size = sizeof(arr)/sizeof(arr[0]);
    cout<<"Original Array :: ";
    print(arr,size);
    reverse(arr,size-1);
    cout<<'\n'<<"Reverse Array :: ";
    print(arr,size);


 
 
}
 
int main(){
 
    ios::sync_with_stdio(false);
    cin.tie(NULL);
 
    int test=1;
    while(test--){
       awadh_solution();
    }
}