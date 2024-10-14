# include <bits/stdc++.h>
using namespace std;
//done
int main(){
    string s = "axyaagaaa";
    int ans = 0;
    int cta = 0;
    int ct = 0;
    for(int i =0; i<s.size(); i++)
    {
        if(s[i]=='a')
        {
            cta++;
        }
    }
    for(int i = 0; i<s.size()-1;i++)
    {
        if(s[i]=='a')
        {
            ct++;
        }
        else if(s[i]=='g')
        {
            ans = ans + (ct*(cta-ct));
        }
    }
    cout<<ans<<'\n';
}