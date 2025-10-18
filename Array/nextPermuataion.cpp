#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
void nextPermutation(vector<int>&v){
    int pivot = -1;
    for(int i = v.size()-2;i>=0; i--){
        if(v[i]<v[i+1]){
            pivot = i;
            break;
        }
    }
    if(pivot==-1){
        reverse(v.begin(),v.end());
        return;
    }
    // Yaha jo swapping karni hai wo karni jsut next greater element than pivot 
    // mujhe lagata hai ki wo element lst index pe hi hoga 
    reverse(v.begin()+pivot+1,v.end());
    swap(v[pivot],v[v.size()-1]);

}
int main(){
    vector<int> v{2,3,1};
    nextPermutation(v);
    for(int i =0; i<v.size(); i++){
        cout<<v[i]<<' ';
    }
    
}