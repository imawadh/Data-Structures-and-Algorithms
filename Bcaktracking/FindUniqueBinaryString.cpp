# include <bits/stdc++.h>
using namespace std;
 
// // Define
// #define  loop(j) for(int i =0; i<j; i++) ;
 
// // Typedef
// typedef long long  ll;
// void solve(int n,int i, string &s){
//     if(i>=n){
//         cout<<s<<'\n';
//         return;
//     }
//     s.push_back('1');
//     solve(n,i+1,s);
//     s.pop_back();
//     s.push_back('0');
//     solve(n,i+1,s);
//     s.pop_back();
// }
 
// void awadh_solution(){

//     string s="";
//     int n = 3;
//     solve(n,0,s);


 
 
// }
 
// int main(){
 
//     ios::sync_with_stdio(false);
//     cin.tie(NULL);
 
//     int test=1;
//     while(test--){
//        awadh_solution();
//     }

// }

class Solution {
    public:
        set<string> st;
        void solve(int n,int i, string &s){
            if(i>=n){
               st.insert(s);
                return;
            }
            s.push_back('1');
            solve(n,i+1,s);
            s.pop_back();
            s.push_back('0');
            solve(n,i+1,s);
            s.pop_back();
        }
        string findDifferentBinaryString(vector<string>& nums) {
            int n = nums[0].size();
            string s = "";
            solve(n,0,s);
            for(int i = 0; i<n; i++){
                st.erase(nums[i]);
            }
            return *st.begin();
    
        }
    };
    int main(){
        
    }