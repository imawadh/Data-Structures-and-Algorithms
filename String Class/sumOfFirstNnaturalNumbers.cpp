# include <bits/stdc++.h>
using namespace std;
 
// Define
#define  loop(j) for(int i =0; i<j; i++) ;
 
// Typedef
typedef long long  ll;
void sum1(int n,int sum)
{
    if(n==0) {
        cout<<sum<<'\n';
        return;
    }
    sum+=n;
    sum1(n-1,sum);
}
 
void awadh_solution(){
    int n;
    cin>>n;
    int ans = 0;
    sum1(n,0);
    // cout<<ans<<'\n';
 
 
}
 
int main(){
 
    ios::sync_with_stdio(false);
    cin.tie(NULL);
 
    int test=1;
    while(test--){
       awadh_solution();
    }
}