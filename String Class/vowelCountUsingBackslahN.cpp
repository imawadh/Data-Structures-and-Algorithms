# include <bits/stdc++.h>
using namespace std;
 
// Define
#define  loop(j) for(int i =0; i<j; i++) ;
 
// Typedef
typedef long long  ll;
 
void awadh_solution(){
    string s = "Awadh Kishor \0Singh";// if bsckslash zero is written in between the string terminates over there 
    cout<<s;
    int ans = 0;
    s = "Awadh Kishor Singh";// Reinitialistaion
    int idx = 0;
    while(s[idx]!='\0')
    {
        
        if(s[idx]=='a'||s[idx]=='e'||s[idx]=='i'||s[idx]=='o'||s[idx]=='u') ans++;
        idx++;
    }
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