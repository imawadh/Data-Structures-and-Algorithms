# include <bits/stdc++.h>
using namespace std;
 
// Define
#define  loop(j) for(int i =0; i<j; i++) ;
 
// Typedef
typedef long long  ll;
 
void awadh_solution(){
    int arr[5][5]= {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25};
    int n = 5;
    int i = 0;
    int j = 0;
    while(n>1){
        for(int k = 1; k<n; k++){
            cout<<arr[i][j]<<' ';
            j++;
        }
        for(int k = 1; k<n; k++){
            cout<<arr[i][j]<<' ';
            i++;
        }
        for(int k = 1; k<n; k++){
            cout<<arr[i][j]<<' ';
            j--;
        }
        for(int k = 1; k<n; k++){
            cout<<arr[i][j]<<' ';
            i--;
        }
        n-=2;
        i+=1;
        j+=1;
    }
    if(n==1){
        cout<<arr[i][j]<<'\n';
    }
    

 
}
 
int main(){
 
    ios::sync_with_stdio(false);
    cin.tie(NULL);
 
    int test=1;
    while(test--){
       awadh_solution();
    }
}