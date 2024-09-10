# include <bits/stdc++.h>
using namespace std;
// Itearative solution is faster than recursive bacause 0(2* n) and 0(n)


int power(int a, int b)
{
    if(b==0) return 1;
    return a*power(a,b-1);

    
}
int main(){
    
    cout<<power(2,5);
    
}