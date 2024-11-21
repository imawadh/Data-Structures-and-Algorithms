# include <bits/stdc++.h>
using namespace std;
 
// Define
#define  loop(j) for(int i =0; i<j; i++) ;
 
// Typedef
typedef long long  ll;
 
void awadh_solution(){
    vector <int> v{100,2,3,4000,5,6,7,8,55,4,3,21,3000};
    int largest = v[0];
    for(int i =0; i<v.size(); i++)
    {
        largest = max(v[i],largest);
    }
    cout<<largest<<'\n';
 
 
}
 
int main(){
 
    ios::sync_with_stdio(false);
    cin.tie(NULL);
 
    int test=1;
    while(test--){
       awadh_solution();
    }
}