# include <bits/stdc++.h>
using namespace std;
 
// Define
#define  loop(j) for(int i =0; i<j; i++) ;
 
// Typedef
typedef long long  ll;
void preInPost(int n)
{
    if(n==0) return;
    cout<<n;
    preInPost(n-1);
    cout<<n;
    preInPost(n-1);
    cout<<n;
    


}
void awadh_solution(){
    int x;
    cin>>x;
    preInPost(x);
 
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