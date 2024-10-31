# include <bits/stdc++.h>
using namespace std;
 
// Define
#define  loop(j) for(int i =0; i<j; i++) ;
 
// Typedef
typedef long long  ll;
 
void awadh_solution(){
    string s = "Awadh Kishor Singh";
    cout<<s.substr(3)<<'\n';// it will take all after 3rd index
    int x = 9876543;
    string sn = to_string(x);
    cout<<sn<<'\n';
 
}
 
int main(){
 
    ios::sync_with_stdio(false);
    cin.tie(NULL);
 
    int test=1;
    while(test--){
       awadh_solution();
    }
}