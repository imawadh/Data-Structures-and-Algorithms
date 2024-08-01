# include <bits/stdc++.h>
using namespace std;
int main(){
    int arr[5][5];
    int ans = 1;
    for(int i = 0; i <5; i++){
        for(int j = i; j <5; j++){
            arr[j][i] = ans++;
        }
        i++;
        for(int j = 4; j >=i; j--){
            arr[j][i]=ans++;
        }   
    }
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}