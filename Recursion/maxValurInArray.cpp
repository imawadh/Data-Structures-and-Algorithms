# include <bits/stdc++.h>
using namespace std;
 
// Define
#define  loop(j) for(int i =0; i<j; i++) ;
 
// Typedef
typedef long long  ll;
int maxValue(int arr[],int size,int start=0,int val=INT_MIN)
{
    if (size==start) return val;
    if(val<arr[start]) {
        val = arr[start];
    }
    start++;
    return maxValue(arr,size,start,val);
    
}
 
void awadh_solution(){
    int arr[]{1,2,3,7,676567,876543435,-234,1,2,-1};
    int size = sizeof(arr)/sizeof(arr[0]);
    cout<<maxValue(arr,size)<<'\n'; 
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