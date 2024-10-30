# include <bits/stdc++.h>
using namespace std;
 
// Define
#define  loop(j) for(int i =0; i<j; i++) ;
 
// Typedef
typedef long long  ll;
int fibonacci(int n)
{
    if(n<=2) return 1;
    return fibonacci(n-1)+fibonacci(n-2);
}
 
void awadh_solution(){
 
    int num;
    cout<<"Nimber of Fibobnacci Sequence :: ";
    cin>>num;
    int ans = fibonacci(num);
    cout<<ans<<'\n';

 
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