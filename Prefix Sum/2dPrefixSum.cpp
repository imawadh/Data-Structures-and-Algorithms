# include <bits/stdc++.h>
using namespace std;
 
// Define
#define  loop(j) for(int i =0; i<j; i++) ;
 
// Typedef
typedef long long  ll;
 
void awadh_solution(){
    int n,m;
    cin>>n>>m;
    vector <vector<int>> v(n,vector<int>(m));
    for(int i =0; i<n; i++)
    {
        for(int j =0; j<m; j++)
        {
            cin>>v[i][j];
        }
    }

    // Creation of Prefix Sum Vector 
    vector <vector<int>> prefixSum(n,vector<int> (m));
    for(int i =0; i<n; i++)
    {
        for(int j =0; j<m; j++)
        {
        
            int sum = v[i][j];
            if(i>0){
                sum+=prefixSum[i-1][j];
            }
            if(j>0){
                sum+=prefixSum[i][j-1];
            }
            if(i>0 && j>0){
                sum+=prefixSum[i-1][j-1];
            }
            //prefixSum[i-1][j]+prefixSum[i][j-1]-prefixSum[i-1][j-1]+v[i][j];
            prefixSum[i][j]=sum;
        }
    }

    cout<<"Original Array \n";
    for(int i =0; i<n; i++)
    {
        for(int j =0; j<m; j++)
        {
            cout<<v[i][j]<<' ';
        }
        cout<<'\n';
    }

    cout<<"Prefix Array \n";
    for(int i =0; i<n; i++)
    {
        for(int j =0; j<m; j++)
        {
            cout<<prefixSum[i][j]<<' ';
        }
        cout<<'\n';
    }
    int q;
    cin>>q;
    while (q--)
    {
        int l1,r1,l2,r2;
        cin>>l1>>r1>>l2>>r2;

        // if l1,l2,r1,r2 are 1 based indexing then we will do l1--,l2--,r1-- and r2--  to make it possible for ans in 0 based index .... 
        

        int ans = prefixSum[l2][r2];
        // ans = -(prefixSum[l2][r1-1]+prefixSum[l1-1][r2])+prefixSum[l1-1][r1-1];
        if(r1>0){
            ans -= prefixSum[l2][r1-1];
        } 
        if(l1>0){
            ans -= prefixSum[l1-1][r2];
        }
        if(l1>0 && r1>0){
            ans += prefixSum[l1-1][r1-1];
        }
        cout<<ans<<'\n';
    }

    


 
 
}
 
int main(){
 
    ios::sync_with_stdio(false);
    cin.tie(NULL);
 
    int test=1;
    while(test--){
       awadh_solution();
    }
}