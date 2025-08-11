// pass by value and push_back()
#include<iostream>
#include<string>
using namespace std;
void permutation(string originial, string ans){
    if(originial.size()==0){
        cout<<ans<<'\n';
        return;
    }

    for(int i = 0; i<originial.size(); i++){
        string newOriginal = originial.substr(0,i) + originial.substr(i+1);
        ans.push_back(originial[i]);
        permutation(newOriginal,ans);
        ans.pop_back();
    }
    return;
}
int main(){
    string s = "abcd";
    // abc,acb,bac,bca,cab,cba --> all the permuations of string "abc"
    string ans = "";
    permutation(s,ans);
}