# include <bits/stdc++.h>
using namespace std;
 
// Define
#define  loop(j) for(int i =0; i<j; i++) ;
 
// Typedef
typedef long long  ll;
 
void awadh_solution(){
    vector <int> v{8000,2,3,4000,5,60000,70000,8,55,4,3,21,3000};
    int largest = v[0];
    int secondLargest = INT_MIN;
    int thirdlargest = INT_MIN;
    for(int i =1; i<v.size(); i++)
    {

        if(v[i]>=largest)
        {
            thirdlargest = secondLargest;
            secondLargest = largest;
            largest = v[i];
        }
        else if(v[i]>=secondLargest)
        {
            thirdlargest = secondLargest;
            secondLargest= v[i];
        }
        else if(v[i]>=thirdlargest)
        {
            thirdlargest= v[i];
        }
    }
    cout<<largest<<" "<<secondLargest<<" "<<thirdlargest<<'\n';
 
 
}
 
int main(){
 
    ios::sync_with_stdio(false);
    cin.tie(NULL);
 
    int test=1;
    while(test--){
       awadh_solution();
    }
}