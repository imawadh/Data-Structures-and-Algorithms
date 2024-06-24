# include <bits/stdc++.h>
using namespace std;
int main()
{
    vector <int> v1 = {1,2,3,-4,4,0,5,6};
    int prod = 1;
    for(int i = 0; i < v1.size(); i++)
    {
        if(v1[i])
        {
            prod *= v1[i];
        }
    }
    cout<<prod;
}