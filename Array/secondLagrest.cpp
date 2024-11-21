# include <bits/stdc++.h>
using namespace std;
 
// Define
#define  loop(j) for(int i =0; i<j; i++) ;
 
// Typedef
typedef long long  ll;
 
void awadh_solution(){
    vector <int> v{5000,2,3,4000,5,6000,7,8,55,4,3,21,3000};
    int largest = v[0];
    int secondLargest = INT_MIN;
    for(int i =0; i<v.size(); i++)
    {

        if(v[i]>largest)
        {
            secondLargest = largest;
            largest = v[i];
        }
        else if(v[i]>secondLargest)
        {
            secondLargest= v[i];
        }
    }
    cout<<secondLargest<<'\n';
 
 
}
 
int main(){
 
    ios::sync_with_stdio(false);
    cin.tie(NULL);
 
    int test=1;
    while(test--){
       awadh_solution();
    }
}