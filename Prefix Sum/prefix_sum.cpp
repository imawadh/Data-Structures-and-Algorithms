# include <bits/stdc++.h>
using namespace std;
int main(){
    
    vector <int> v{1,2,3,4,76,3,90};
    for(int i =1; i<v.size(); i++)
    {
        v[i]+=v[i-1];
    }
    for(int i =0; i<v.size(); i++)
    {
        cout<<v[i]<<' ';
    }
    
    
    
}