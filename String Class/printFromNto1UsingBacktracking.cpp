# include <bits/stdc++.h>
using namespace std;
 
// Define
#define  loop(j) for(int i =0; i<j; i++) ;
 
// Typedef
typedef long long  ll;
void print(int n,int i=1)
{
    if(n<1)
    {
        return;
    }
    print(n-1,i+1);
    cout<<i<<'\n';
}
 
void awadh_solution(){
    int n = 5;
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