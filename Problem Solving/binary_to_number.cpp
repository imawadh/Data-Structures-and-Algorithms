# include <bits/stdc++.h>
using namespace std;
// Done 
int main()
{
    cout<<"Enter Binary : ";
    int binary;
    cin>>binary;
    int count= 0;
    int answer=0;
    while(binary!=0)
    {
        answer = answer + binary%10*pow(2,count++);
        binary/=10;   
        
    }
    cout<<"Decimal of Binary is ";
    cout<<answer;
}