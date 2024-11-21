# include <bits/stdc++.h>
using namespace std;
 
// Define
#define  loop(j) for(int i =0; i<j; i++) ;
 
// Typedef
typedef long long  ll;

void print(int idx,vector<int> subsequence,int sum, vector <int> original,int size,int constant){
    if(idx==size ){
        if( sum==constant){
            for(auto element : subsequence)
            {
                cout<<element<<" ";
            }
            cout<<endl;
           // if return is placed here think ? what will happen 
        }
        return;
    }
    
    // Inclucluding the element at index idx
    subsequence.push_back(original[idx]);
    sum+=original[idx];
    print(idx+1,subsequence,sum,original,size,constant);


    // Excluding the element at index idx
    subsequence.pop_back();
    sum-=original[idx];
    print(idx+1,subsequence,sum,original,size,constant);




}
 
void awadh_solution(){
    vector <int> original = {1,2,3,4,2};
    int constant = 4;
    int size = original.size();
    int idx = 0;
    int sum = 0;
    vector<int> subsequence;
    print(idx,subsequence,sum,original,size,constant);
 
 
}
 
int main(){
 
    ios::sync_with_stdio(false);
    cin.tie(NULL);
 
    int test=1;
    while(test--){
       awadh_solution();
    }
}
// if return is placed here think ? what will happen
// It will cause the to check when the program is only to be termited if both the conditions are satisfied