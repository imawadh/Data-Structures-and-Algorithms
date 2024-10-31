# include <bits/stdc++.h>
using namespace std;
 
// Define
#define  loop(j) for(int i =0; i<j; i++) ;
 
// Typedef
typedef long long  ll;
 
void awadh_solution(){
    string str;
    getline(cin,str);
    cout<<"Enetr the string :: "<<str<<'\n';
   
    stringstream s(str);
    string temp;
    int ct = 0;
    while(s>>temp)
    {
        cout<<temp<<'\n';
        ct++;
    }
    cout<<"Number of word in the sentence is "<< ct<<'\n';
 
 
}
 
int main(){
 
    ios::sync_with_stdio(false);
    cin.tie(NULL);
 
    int test=1;
    while(test--){
       awadh_solution();
    }
}