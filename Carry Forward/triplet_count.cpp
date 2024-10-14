# include <bits/stdc++.h>
using namespace std;
//done
int main(){
    vector <int> v{2,6,9,4,10,89};
    int ans = 0;
    for(int i =1; i<v.size()-1; i++)
    {
        int ctl  = 0;
        int ctr = 0;
        for(int j=i-1; j>=0; j--)
        {
            if(v[j]<v[i])
            {
                ctl++;
            }
        }
        for(int j =i+1; j<v.size(); j++)
        {
            if(v[j]>v[i])
            {
                ctr++;
            }
        }
        cout<<ctl*ctr<<'\n';
        ans+=(ctl*ctr);
    }
    cout<<ans<<"\n";
}