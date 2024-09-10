# include <bits/stdc++.h>
using namespace std;
long long factorial(int n)
{
    if (n == 0) return 1 ;// why zero and why return 1 ?
    return n*factorial(n-1);
}
int main(){
    int test;
    cin>>test;
    cout<<factorial(test);
}