# include <bits/stdc++.h>
using namespace std;
 
// Define
#define  loop(j) for(int i =0; i<j; i++) ;
 
// Typedef
typedef long long  ll;
int stairCount(int x){
    if(x<=3) return x;
    return stairCount(x-1)+stairCount(x-2);

} 
 
void awadh_solution(){

    int stair;
    cin>>stair;
    cout<<"Enter number of stiars :: "<<stair<<'\n';
    cout<<"Number of ways = "<<stairCount(stair)<<'\n';
 
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