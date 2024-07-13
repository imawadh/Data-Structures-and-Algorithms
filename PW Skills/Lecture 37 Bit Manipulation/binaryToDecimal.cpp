# include <bits/stdc++.h>
using namespace std;
void binary_to_decimal(int x){
    int ans = 0;
    int pow = 1;
    while(x!=0)
    {
        ans+=((x%10)*pow);
        pow*=2;
        x/=10;
    }
    cout<<ans;
}
int main(){
    int binary;
    cin>>binary;
    binary_to_decimal(binary);
   
}