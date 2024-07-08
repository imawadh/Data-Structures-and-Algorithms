# include <bits/stdc++.h>
using namespace std;
int print_sum(int num)
{
    if (num==0) return 0;
    print_sum(num-1);
    cout<<(num*(num+1))/2<<' ';
    return 0;
}
int main(){
    int n;
    cin>>n;
    print_sum(n);
}