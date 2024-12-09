# include <bits/stdc++.h>
using namespace std;
 
// Define
#define  loop(j) for(int i =0; i<j; i++) ;
 
// Typedef
typedef long long  ll;
 
void awadh_solution(){

    stack <int> s;
    s.push(17);
    s.push(10);
    s.push(17);
    s.push(21);
    s.push(56);

    while (!s.empty())
    {
        cout<<s.top()<<'\n';
        s.pop();
    }
    
    // cout<<s.top(); 
 
 
}
 
int main(){
 
    ios::sync_with_stdio(false);
    cin.tie(NULL);
 
    int test=1;
    while(test--){
       awadh_solution();
    }
}