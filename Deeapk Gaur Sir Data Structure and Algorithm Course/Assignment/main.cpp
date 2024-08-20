# include <iostream>
 
using namespace std;

int main(){
    long long n;
    cin>>n;
    long long sum = 0;
    while(n>0)
    {
        sum+=n--;
    }
    cout<<sum;
}