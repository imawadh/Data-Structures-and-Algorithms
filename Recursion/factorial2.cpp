#include<bits/stdc++.h>
using namespace std;
int fact(int a){
    if(a<=1) return 1; 
    int ans = a * fact(a-1);
    return ans;
}
int main(){
    cout<<fact(10)<<' ';
}