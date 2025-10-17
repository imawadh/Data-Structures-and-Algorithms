# include <bits/stdc++.h>
using namespace std;
 
// Define
#define  loop(j) for(int i =0; i<j; i++) ;
 
// Typedef
typedef long long  ll;

void change(int arr[], int size){
    arr[0]=100;
}
void print(int arr[], int size){
    for(int i = 0; i<size; i++){
        cout<<arr[i]<<' ';
    }
    cout<<'\n';
}
void awadh_solution(){
    int arr[5] = {1,2,3,4,5};
    cout<<"Before Change ::: "<<' ';
    print(arr,5);
    change(arr,5);
    cout<<"After Change ::: "<<' ';
    print(arr,5);
}
 
int main(){
 
    ios::sync_with_stdio(false);
    cin.tie(NULL);
 
    int test=1;
    while(test--){
       awadh_solution();
    }
}