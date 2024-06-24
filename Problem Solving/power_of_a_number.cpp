# include <bits/stdc++.h>
using namespace std;
// Done 
int main()
{
    cout<<"Eneter the number and power :  ";
    int num,pow;
    cin>>num>>pow;
    int answer = 1;
    while(pow!=0)
    {
        answer = answer*num;
        pow--;
    }
    cout<<answer;
}