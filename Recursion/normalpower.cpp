# include <bits/stdc++.h>
using namespace std;
 
// Define
#define  loop(j) for(int i =0; i<j; i++) ;
 
// Typedef
typedef long long  ll;
int power(int base,int exp){
    if (exp == 0) return 1;
    return base * power(base,exp-1);

}
 
void awadh_solution(){
    int base;
    int exp;
    
    cin>>base;
    cin>>exp;
    
    cout<<"Base :: "<<base<<'\n';
    cout<<"Exponent :: "<<exp<<'\n';

    cout<<"The answer is :: "<<power( base,exp)<<'\n';
}
 
int main(){
 
    ios::sync_with_stdio(false);
    cin.tie(NULL);
 
    int test=1;
    
    while(test--){
       awadh_solution();
    }
}
