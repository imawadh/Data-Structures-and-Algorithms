# include <bits/stdc++.h>
using namespace std;
int main(){
    
    int size;
    cin >>size;
    vector <int> v(size);
    for (int i =0; i<size ; i++){
        cin>>v[i];
    }
    
    for(int i =0; i<size; i++)
    {
        for(int j =i; j<size; j++)
        {
            int sum = 0;
            for(int k =i; k<=j; k++)
            {
                sum+=v[k];
                
            }
            cout<<sum<<' ';
        }
    }

}