# include <bits/stdc++.h>
using namespace std;
 
// Define
#define  loop(j) for(int i =0; i<j; i++) ;
 
// Typedef
typedef long long  ll;
void repalceElement(int arr[],int size){
    vector <bool> v(size,false);
    for(int i =0; i<size; i++)
    {   int m = INT_MAX;
        int idx = i;
        for(int j=0; j<size; j++)
        {
            if(arr[j]<m && v[j]==false)
            {
                m = arr[j];
                idx = j;
            }
        }
        v[idx]=true;
        arr[idx]=i;
    }

}
void awadh_solution(){
    int arr[]   {1,2,0,4,0,7,-100,0,-7,-6,-88,89,10000};

    int size = sizeof(arr)/sizeof(arr[0]);

    cout<<"Original Array  :: ";
    for(int element : arr)
    {
        cout<<element<<' ';
    }

    repalceElement(arr,size);

    cout<<"\nSorted Array ::    ";
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