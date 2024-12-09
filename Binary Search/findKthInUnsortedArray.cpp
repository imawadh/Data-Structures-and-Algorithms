# include <bits/stdc++.h>
using namespace std;
 
// Define
#define  loop(j) for(int i =0; i<j; i++) ;
 
// Typedef
typedef long long  ll;
int minElement(vector <int>  v){
    int ans = v[0];
    for(int i =1; i<v.size(); i++)
    {
        if(ans>v[i]){
            ans = v[i];
        }
    }
    return ans;
}


// MaxElement Function
int maxElement(vector <int>  v){
    int ans = v[0];
    for(int i =1; i<v.size(); i++)
    {
        if(ans<v[i]){
            ans = v[i];
        }
    }
    return ans;
}



//Find Kth elelment 
void findKth(vector <int>  v){
    int minNumber = minElement(v);
    int maxNumber =  maxElement(v);
    cout<<"Max Number :: "<<maxElement<<" Max Element :: "<<minElement<<'\n';
    
}

 
void awadh_solution(){

    vector <int> v{12,34,1,35,13,12,4,6,7,99};
    findKth(v);
 
 
}
 
int main(){
 
    ios::sync_with_stdio(false);
    cin.tie(NULL);
 
    int test=1;
    while(test--){
       awadh_solution();
    }
}