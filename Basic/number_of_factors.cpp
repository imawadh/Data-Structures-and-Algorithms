# include <iostream>
# include <cmath>
using namespace std;
int main(){
    int n =17;
    int ct = 0;
    for(int i=2; i<=sqrt(n); i++)
    {
        if(n%i==0)
        ct+=2;
    }
    cout<<int(sqrt(n))<<'\n';
    if(sqrt(n)*sqrt(n)==n)
    {
        cout<<ct+1<<'\n';
    }
    else{
        cout<<ct+2<<'\n';
    }
}