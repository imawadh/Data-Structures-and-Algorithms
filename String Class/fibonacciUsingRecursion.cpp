# include <bits/stdc++.h>
using namespace std;
 
// Define
#define  loop(j) for(int i =0; i<j; i++) ;
 
// Typedef
typedef long long  ll;
int fib(int n){
    if(n<=1) return n;
    long left = fib(n-1);
    long right = fib(n-2);
    return left+right;
}
 
void awadh_solution(){
    int n;
    cin>>n;
    cout<<fib(n)<<' ';
 
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