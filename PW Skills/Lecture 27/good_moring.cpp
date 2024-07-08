# include <bits/stdc++.h>
using namespace std;
void good_morning(int n)
{
    if (n==0) return ;// Base condition
    // If we try to write return 0 in the void function it will throw an error 
    cout<<"Good Morning"<<'\n';
    good_morning(n-1);
}
int main(){
    int times;
    cin>>times;
    good_morning(times);
    
}