# include <bits/stdc++.h>
using namespace std;
 
// Define
#define  loop(j) for(int i =0; i<j; i++) ;
 
// Typedef
typedef long long  ll;
void preInPost(int n)
{
    if(n==0) return;
    cout<<"Pre :: "<<n<<'\n';
    preInPost(n-1);
    cout<<"In :: "<<n<<'\n';
    preInPost(n-1);
    cout<<"Post :: "<<n<<'\n';
    


}
void awadh_solution(){
    int x;
    cin>>x;
    preInPost(x);
 
}
 
int main(){
 
    ios::sync_with_stdio(false);
    cin.tie(NULL);
 
    int test=1;
    while(test--){
       awadh_solution();
    }
}