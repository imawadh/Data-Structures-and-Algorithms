#include<iostream>
#include<vector>
using namespace std;
void sortArray(vector<int>&v){
    int i = 0;
    int j = v.size()-1;
    int k = 0;
    while(k<=j){
        if(v[k]==0){
            swap(v[i],v[k]);
            i++;
            k++; 
            // kabhi bhi mid wala pointer jo hai wo start pointer ke baad hi rehna chahiye pahle nhi hona chahiye 
        }else if(v[k]==2){
            swap(v[k],v[j]);
            j--;
        }else{
            k++;
        }
    }
}
int main(){
    vector<int> v{0,1,1,1,1,2,2,2,0,1,2,0,1,2,1,2,1,1,1,1,2,1,2,1,1,2,2,2};
    sortArray(v);
    for(int i = 0; i<v.size();i++){
        cout<<v[i]<<' ';
    }
}