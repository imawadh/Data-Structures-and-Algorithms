# include <bits/stdc++.h>
using namespace std;
int sum(int n)
{
    if(n==1) return 1;
    return n+sum(n-1);
}
int main(){
    int test;
    cin>>test;
    cout<<sum(test);
    
}