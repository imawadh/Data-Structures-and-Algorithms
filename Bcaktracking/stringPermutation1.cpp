#include<bits/stdc++.h>
using namespace std;

void permutation(string original, string ans){
    if(original.size()==0){
        cout<<ans<<'\n';
        return;
    }

    // making every element in the string first element and find the permutation of all other elements ...
    for(int i = 0; i<original.size(); i++){
        
        string pre = original.substr(0,i);
        string next = original.substr(i+1);
        string s = pre+next;
        ans.push_back(original[i]);
        permutation(s,ans);
        ans.pop_back();
    }

}

int main(){
    permutation("abc","");

}