#include<iostream>
#include<vector>
using namespace std;
void sortArray(vector<int>&v1,vector<int>&v2){
    int i =0; 
    int j = 0;
    while(i<v1.size() && j<v2.size()){
        if(v1[i]<v2[j]){
            cout<<v1[i]<<' ';
            i++;
        }else{
            cout<<v2[j]<<' ';
            j++;
        }
    }
    while(i<v1.size()){
        cout<<v1[i]<<' ';
        i++;
    }

    while(j<v2.size()){
        cout<<v2[j]<<' ';
        j++;
    }
}
int main(){
    vector<int> v1{-100,-1,1,2,4,5,6,7,9,10,12,88,900};
    vector<int> v2{-11,10,2,3,4,5,7,9,89,100};
    sortArray(v1,v2);
    
}