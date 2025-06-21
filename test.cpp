#include<bits/stdc++.h>


using namespace std;


int main(){
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        long n;
        cin >> n;
        long long sum = 0;
        long long first = 0;
        long long second = 1;
        long long fib0 = 0;
         while(fib0 + second <= n) {
            fib0 = first + second;
            first = second;
            second = fib0;
            if (!(fib0 & 1)) { // check if fib0 is even
                cout<<fib0<<' ';
                sum += fib0;
            }
        }
        cout << sum << '\n';
    
    }
    return 0;
}
