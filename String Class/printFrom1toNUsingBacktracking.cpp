# include <bits/stdc++.h>
using namespace std;
 
// Define
#define  loop(j) for(int i =0; i<j; i++) ;
 
// Typedef
typedef long long  ll;
void print(int i, int n)
{
    if(i>n){
        return;
    }
    cout<<i<<'\n';
    print(i+1,n);

}
 
void awadh_solution(){
    int n;
    cin>>n;
    int i =1;
    print(i,n);


 
 
}
 
int main(){
 
    ios::sync_with_stdio(false);
    cin.tie(NULL);
 
    int test=1;
    while(test--){
       awadh_solution();
    }
}