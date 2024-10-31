# include <bits/stdc++.h>
using namespace std;
 
// Define
#define  loop(j) for(int i =0; i<j; i++) ;
 
// Typedef
typedef long long  ll;
void skipped(string s, int size, int idx = 0)
{
    if(idx==size) return ;
    if(s[idx]!='a') {
        cout<<s[idx];
    }
    skipped(s,size,idx+1);

}

 
void awadh_solution(){
    string s = "My name is lakhan";
    cout<<s<<'\n';
    int size = s.size();
    skipped(s,size);
 
 
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