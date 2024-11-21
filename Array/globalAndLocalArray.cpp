# include <bits/stdc++.h>
using namespace std;
 
// Define
#define  loop(j) for(int i =0; i<j; i++) ;
 
// Typedef
typedef long long  ll;
int globalarr[100];
void awadh_solution(){
    
    int localarr[100];

    // Global here means outside any of the function 
    cout<<"Global Array :: "<<'\n'; 
    for(auto it : globalarr)
    {
        cout<<it<<' ';
    }
    cout<<'\n';

    
    cout<<"Local Array :: "<<'\n';
    for(int element : localarr)
    {
        cout<<element<<' ';
    }
    
    cout<<'\n'<<&localarr<<'\n';
    cout<<localarr<<'\n';
    cout<<&localarr[0]<<'\n';
    // Above three statements will show same address .... 

    // int arr[]; throws error 
 
 
}
 
int main(){
 
    ios::sync_with_stdio(false);
    cin.tie(NULL);
 
    int test = 1;
    while(test--){
       awadh_solution();
    }
}