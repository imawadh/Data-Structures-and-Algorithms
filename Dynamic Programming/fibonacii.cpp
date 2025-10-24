# include <bits/stdc++.h>
using namespace std;
 
// Define
#define  loop(j) for(int i =0; i<j; i++) ;
 
// Typedef
typedef long long  ll;

int fib(vector<long long>&v, int n){
    if(n<=1) return n;
    if(v[n]!=-1) return v[n];
    v[n] = fib(v,n-1) + fib(v,n-2);
    return v[n]; 
}
void awadh_solution(){
    int n;
    cin>>n;
    if(n<=1) {
        cout<<n<<'\n';
        return;
    }
    vector<long long> v(n+1,-1);
    fib(v,n);
    cout<<v[n];
}

// Time complexity = 0(n) 
// Normal recursion Time complexity = 2 ^ n

// 1 +  2 +  4 + 8  + 16 + 32 + 64 + ....  
// 2^0 + 2^1 + 2^3 + 2^4 + .... 2^n 
// Think it as sum of first n term of G.P 


int main(){
 
    ios::sync_with_stdio(false);
    cin.tie(NULL);
 
    int test=1;
    while(test--){
       awadh_solution();
    }
}