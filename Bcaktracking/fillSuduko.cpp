#include<bits/stdc++.h>
using namespace std;

void fillSuduko(vector<vector<int>>&matrix,int n, int i, int j){

    if(i==n-1 && j==n){
        cout<<"Sudoko Filled\n";
        return;
    }

    if(matrix[i][j]!=0){
        fillSuduko(matrix,n,i,j+1);
        return;
    }else{
        for(int i = 1; i<=6; i++){
            
        }
    }






}
int main(){
    vector<vector<int>> matrix = {{1,2,0,0},{0,0,0,0},{0,0,4,3},{4,0,0,0}};


}