# include <bits/stdc++.h>
using namespace std;
 
// Define
#define  loop(j) for(int i =0; i<j; i++) ;
 
// Typedef
typedef long long  ll;
 
void awadh_solution(){
    string s = "Awadh Kishor Singh";
    cout<<"Original String :: "<<s<<'\n';
    reverse(s.begin(),s.end());
    cout<<"Reversed String :: "<<s<<'\n';


    reverse(s.begin(),s.end());// Reversed to original 
    cout<<"Original String :: "<<s<<'\n';
    reverse(s.begin()+2,s.begin()+7);
    cout<<"Reversed String of 5 charcter i.e; adh k:: "<<s<<'\n';
    reverse(s.begin()+2,s.begin()+7);// Reversed to original 
    cout<<"Original String :: "<<s<<'\n';

    // substr function in c++
    cout<<s.substr(2,5);// from wher to start with and number of character to be selected 


 
 
}
 
int main(){
 
    ios::sync_with_stdio(false);
    cin.tie(NULL);
 
    int test=1;
    while(test--){
       awadh_solution();
    }
}