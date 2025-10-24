# include <bits/stdc++.h>
using namespace std;
 
// Define
#define  loop(j) for(int i =0; i<j; i++) ;
 
// Typedef
typedef long long  ll;

string removeDuplicates(string &s){
    string ans = "";
    stack<char> st;
    int i =0;
    int n = s.size();
    while(i<n){
        if(st.empty() || st.top()!=s[i]){
            st.push(s[i]);
            i++;
        }
        else{
            st.pop();
        }
        
    }
    while(st.size()){
        char ch = st.top();
        ans.push_back(ch);
        st.pop();
    }
    reverse(ans.begin(),ans.end());
    return ans;

}

void awadh_solution(){
    
    string s = "assdffghgghfdsaassssssaaaaaaaaaasasdfgfdds";
    cout<<s<<'\n';
    string ans = removeDuplicates(s);
    cout<<ans<<'\n';
 
}
 
int main(){
 
    ios::sync_with_stdio(false);
    cin.tie(NULL);
 
    int test=1;
    while(test--){
       awadh_solution();
    }
}