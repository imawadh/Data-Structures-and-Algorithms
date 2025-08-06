#include<bits/stdc++.h>
using namespace std;

void permuations(vector<int> origininal, vector<int> curr){
    if(origininal.size()==0){
        for(int i =0; i<curr.size(); i++)
        {
            cout<<curr[i]<<' ';
        }
        cout<<'\n';
        return;
    }

    for(int i = 0; i<origininal.size(); i++){
        vector<int> newOriginal;
        for(int j = 0; j<origininal.size(); j++){
            if(origininal[i]!=origininal[j]) newOriginal.push_back(origininal[j]);
        }
        curr.push_back(origininal[i]);
        permuations(newOriginal,curr);
        curr.pop_back();
    }
   

}

int main(){
    vector<int> original{1,2,3};
    vector<int> v;
    permuations(original,v);

}