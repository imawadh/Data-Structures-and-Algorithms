# include <bits/stdc++.h>
using namespace std;
//done
int main(){
    string s = "aaaagaag";
    int ans = 0;
    int ct = 0;
    for(int i =0; i<s.size(); i++)
    {
        if(s[i]=='g')
        {
            ans+=ct;
        }
        else if(s[i]=='a')
        {
            ct++;
        }
    }
    cout<<ans<<'\n';
}