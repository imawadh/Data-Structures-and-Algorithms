#include<iostream>
#include<string>
using namespace std;

void permutation(string str,int idx){
    if(idx==str.size()){
        cout<<str<<'\n';
        return;
    }
    for(int i = idx; i<str.size(); i++){
        swap(str[i],str[idx]);
        permutation(str,idx+1);
        // swap(str[i],str[idx]); --> it can be ommitted as well because of pass by value  ... 

    }
}
int main(){
    string str = "abc";
    permutation(str,0);
}
