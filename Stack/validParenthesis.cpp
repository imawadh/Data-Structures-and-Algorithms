# include <bits/stdc++.h>
using namespace std;
 
// Define
#define  loop(j) for(int i =0; i<j; i++) ;
 
// Typedef
typedef long long  ll;

bool valid(string &s){

    stack<char> st;
    int i = 0;
    int n = s.size();
    while(i<n){
        if(st.empty()){
            st.push(s[i]);
        }else if(st.top()=='(' && s[i]==')'){
            st.pop();
        }else{
            st.push(s[i]);
        }
        i++;
    }

    if(st.size()) return false;
    return true;
}

void awadh_solution(){
    string s = "((())())";
    cout<<valid(s)<<'\n';
 
}
 
int main(){
 
    ios::sync_with_stdio(false);
    cin.tie(NULL);
 
    int test=1;
    while(test--){
       awadh_solution();
    }
}