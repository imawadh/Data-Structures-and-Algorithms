# include <bits/stdc++.h>
using namespace std;
 
// Define
#define  loop(j) for(int i =0; i<j; i++) ;
 
// Typedef
typedef long long  ll;
void quickSort(vector <int> &v){
    int n = v.size();
    // for(int i = 0; i<n; i++){
        int lstElement = v[n-1];
        int start = 0;
        int end =  n-1;
        for(int j =0; j<n; j++){
            if(v[j]<=lstElement){
                swap(v[j],v[start]);
                start++;
            }
            else{
                swap(v[j],v[end]);
                end--;

            }
        }
    // }
}
 
void awadh_solution(){

    vector<int> v{9,8,1,6,5,11,4,7};
    int n = v.size();
    cout<<"Before Sorting :: ";
    for(int i= 0; i<n; i++){
        cout<<v[i]<<' ';
    }
    cout<<'\n';

    quickSort(v);
    cout<<"After Sorting :: ";
    for(int i= 0; i<n; i++){
        cout<<v[i]<<' ';
    }
    cout<<'\n';
 
}
 
int main(){
 
    ios::sync_with_stdio(false);
    cin.tie(NULL);
 
    int test=1;
    while(test--){
       awadh_solution();
    }
}