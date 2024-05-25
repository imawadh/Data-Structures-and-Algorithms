# include <bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    cin>>str;
    sort(str.begin(),str.end());
    
    for (int i = 0; i < str.size() - 1; i++) 

   {

        if (str[i] == str[i + 1]) 
        {
            cout<<"NO , not unique"<<endl;
            return 0;  
        }

   }

    cout<<"Yes, It is unique"<<endl;
    return 0;  
        
} 

