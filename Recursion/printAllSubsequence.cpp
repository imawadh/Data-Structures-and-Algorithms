# include <bits/stdc++.h>
using namespace std;
 
// Define
#define  loop(j) for(int i =0; i<j; i++) ;
 
// Typedef
typedef long long  ll;
void print(int idx, vector <int> subSequence, vector <int> original, int size)
{
    if(idx==size)
    {
        for(auto it : subSequence)
        {
            cout<<it<<' ';
        }
        if(subSequence.size()==0)
        {
            cout<<"{}";
        }
        cout<<'\n';
        return;
    }
    /*We have to options to pick an element or not 
    1. pickit 
    2. not pickit
    */

    // Code for including the elements 
    subSequence.push_back(original[idx]);
    print(idx+1,subSequence,original,size);

    // Removing the elements
    // Code for excluding the elements
    subSequence.pop_back();
    print(idx+1,subSequence,original,size);
    
    
}
 
void awadh_solution(){
    vector <int> original = {1,2,3};
    int size =  original.size();
    vector <int> subSequence;
    int idx = 0;
    print(idx,subSequence,original,size);
 
 
}
 
int main(){
 
    ios::sync_with_stdio(false);
    cin.tie(NULL);
 
    int test=1;
    while(test--){
       awadh_solution();
    }
}