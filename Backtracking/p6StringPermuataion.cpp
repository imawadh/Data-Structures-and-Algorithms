#include<iostream>
#include<string>
#include<unordered_set>
using namespace std;

void permutation(string str,int idx){
    if(idx==str.size()){
        cout<<str<<'\n';
        return;
    }
    unordered_set<char> st;

    for(int i = idx; i<str.size(); i++){
        if(st.find(str[i])!=st.end()) continue;
        st.insert(str[i]);
        swap(str[i],str[idx]);    
        permutation(str,idx+1);
        swap(str[i],str[idx]);    
        
    }
}
int main(){
    string str = "abad";
    permutation(str,0);
}
