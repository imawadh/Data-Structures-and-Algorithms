# include <bits/stdc++.h>
using namespace std;
 
// Define
#define  loop(j) for(int i =0; i<j; i++) ;
 
// Typedef
typedef long long  ll;
 
void awadh_solution(){
    int n1 = 1;
    int n2 = 1;
    int sum = n1+n2;
    int num;
    cout<<"Nimber of Fibobnacci Sequence :: ";
    cin>>num;
    int start = 0;
    while(start!=num)
    {
        cout<<n1<<' ';
        sum = n1+n2;
        n1 =  n2;
        n2 = sum;
        start++;
    }

 
 
}
 
int main(){
 
    ios::sync_with_stdio(false);
    cin.tie(NULL);
 
    int test;
    cin>>test;
    while(test--){
       awadh_solution();
    }
}