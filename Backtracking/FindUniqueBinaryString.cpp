# include <bits/stdc++.h>
using namespace std;
 


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