# include <bits/stdc++.h>
using namespace std;
 
// Define
#define  loop(j) for(int i =0; i<j; i++) ;
 
// Typedef
typedef long long  ll;
void print(int n)
{
    if(n==0) return;
    cout<<"Awadh"<<'\n';
    print(n-1);
}
 
void awadh_solution(){
    int n;
    cin>>n;
    print(n);
 
 
}
 
int main(){
 
    ios::sync_with_stdio(false);
    cin.tie(NULL);
 
    int test=1;
    while(test--){
       awadh_solution();
    }
}