# include <bits/stdc++.h>
using namespace std;
 
// Define
#define  loop(j) for(int i =0; i<j; i++) ;
 
// Typedef
typedef long long  ll;
void hanoi(int size, char source, char helper, char destination)
{
    if(size == 0 ) return;
    hanoi(size-1,source,destination,helper);
    cout<<source<<' '<<destination<<'\n';
    hanoi(size-1,helper,source,destination);

}
 
void awadh_solution(){
 
    int size;
    cin>>size;
    hanoi(size,'A','B','C');
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