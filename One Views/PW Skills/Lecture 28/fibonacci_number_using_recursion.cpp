# include <bits/stdc++.h>
using namespace std;
int fibonacci(int n){
    
    // 1 1 2 3 5 8 13 21
    if(n==1 || n==2) return 1;
    return  fibonacci(n-1) + fibonacci(n-2);




}
int main(){
    int num;
    cin>>num;
    cout<<fibonacci(num);
}