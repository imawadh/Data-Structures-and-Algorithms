# include <bits/stdc++.h>
using namespace std;
 
// Define
#define  loop(j) for(int i =0; i<j; i++) ;
 
// Typedef
typedef long long  ll;
 
bool awadh_solution(){

    int size;
    cin >>size;
    vector <int> v(size);
    for (int i =0; i<size ; i++){
        cin>>v[i];
    }
    
    for(int i =0; i<size; i++)
    {
        for(int j =i; j<size; j++)
        {
            int sum = 0;
            for(int k =i; k<=j; k++)
            {
                sum+=v[k];
                
            }
            if(sum==0)
            {
                return true;
            }
        }
    }
    return false;


 
}
 
int main(){
 
    ios::sync_with_stdio(false);
    cin.tie(NULL);
 
    int test=1;
    while(test--){
        cout<<awadh_solution();
    }
}