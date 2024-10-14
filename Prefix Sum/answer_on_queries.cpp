# include <bits/stdc++.h>
using namespace std;
int main(){
    
    vector <int> v{1,2,3,4,76,3,90};
    for(int i =1; i<v.size(); i++)
    {
        v[i]+=v[i-1];
    }
    for(int i =0; i<v.size(); i++)
    {
        cout<<v[i]<<' ';
    }
    int queries;
    cout<<"\nEnter number of queries :: ";
    cin>>queries;
    vector <vector <int>> q(queries,vector<int>(2));
    
    for(int i=0; i<queries; i++ )
    {
        for(int j =0; j<2; j++)
        {
            cin>>q[i][j];
        }
        cout<<"Answer for this is :: ";
        if(q[i][0]==0)
        {
            cout<<v[q[i][1]];
        }
        else{
            cout<<v[q[i][1]]-v[q[i][0]-1];
        }
        cout<<endl;
    }

    
    
}