#include<iostream>
#include<vector>
using namespace std;
void sortArray(vector<int>&v){
    int i = 0;
    int j = v.size()-1;
    while(i<=j){
        if(v[j]==0  && v[i]==1 ){
            swap(v[i],v[j]);
            j--;
            i++;
        }else if(v[i]==0){
            i++;
        }else{
            j--;
        }
    }
}
int main(){
    vector<int> v{1,0,0,1,0,1,0,1,1,1,1,0,1,1,1,0};
    sortArray(v);
    for(int i = 0; i<v.size();i++){
        cout<<v[i]<<' ';
    }
}