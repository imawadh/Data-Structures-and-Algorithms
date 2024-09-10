# include <bits/stdc++.h>
using namespace std;
// Recursive function kuch aisa hi dikhata hai ---
//  1. Base case
//  2. Work to be done 
//  3. Call of Function 
//  4. Work Need to be done 
//  5 . return Statement 
void print(int n)
{   
    if(n==0) return; // Base Condition 
    print(n-1);
    cout<<n<<' ';
}
// int print(int n)
// {   
//     if(n==0) return 0; // Base Condition 
//     print(n-1);
//     cout<<n<<' ';
// }  This is an error   [-Wreturn-type]
int main(){
    int n;
    cin>>n;
    print(n);
}