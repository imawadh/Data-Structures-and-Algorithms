# include <bits/stdc++.h>
using namespace std;
void fibonacci(int n)
{
    int a = 1;
    int b = 1;
    cout<<a<<'\n'<<b<<'\n';
    int sum = a+b;
    while(sum<n)
    {
        cout<<sum<<'\n';
        a = b;
        b = sum;
        sum = a+b;
    }
}
int main(){
    int num;
    cin>>num;
    fibonacci(num);
}