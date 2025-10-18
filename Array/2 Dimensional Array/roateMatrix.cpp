# include <bits/stdc++.h>
using namespace std;
 
// Define
#define  loop(j) for(int i =0; i<j; i++) ;
 
// Typedef
typedef long long  ll;

 
void awadh_solution(){
    int arr[3][3]={1,2,3,4,5,6,7,8,9};
    for(int i=0;i<3; i++){
        for(int k =0; k<3; k++)
        {
            cout<<arr[i][k]<<' ';
        }
        cout<<endl;
    }
    for(int i=0;i<3; i++){
        for(int k =i+1; k<3; k++)
        {
            swap(arr[i][k],arr[k][i]);
        }
    }
    for(int i =0; i<3; i++)
    {
        swap(arr[i].begin(),arr[i].end());
    }
    cout<<endl;
    for(int i=0;i<3; i++){
        for(int k =0; k<3; k++)
        {
            cout<<arr[i][k]<<' ';
        }
        cout<<endl;
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
 

 
