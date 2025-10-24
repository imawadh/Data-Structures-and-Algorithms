# include <bits/stdc++.h>
using namespace std;
 
// Define
#define  loop(j) for(int i =0; i<j; i++) ;
 
// Typedef
typedef long long  ll;
int minimumCost = INT_MAX;
void minCost(vector<int>&v, int currentCost,int idx,int n){
    if(idx>=n){
        minimumCost = min(minimumCost,currentCost);
    }
    minCost(v,v[idx]+currentCost,idx+2,n);
    minCost(v,v[idx]+currentCost,idx+1,n);
}
void awadh_solution(){
    cout<<"Hello"<<'\n';
    vector <int> v = {10,15,20};
    int currentCost = 0;
    minCost(v,0,0,v.size());

    cout<<minimumCost<<'\n';
}


int main(){

    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int test=1;
    while(test--){
        cout<<"Hello"<<'\n';
        awadh_solution();
    }
}
