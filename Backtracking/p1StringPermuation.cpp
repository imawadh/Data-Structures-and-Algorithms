// pass by value and concat
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
        permutation(newOriginal,ans+originial[i]);
    }
    return;
}
int main(){
    string s = "abcd";
    // abc,acb,bac,bca,cab,cba --> all the permuations of string "abc"
    permutation(s,"");
}