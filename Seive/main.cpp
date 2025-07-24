# include <bits/stdc++.h>
using namespace std;

// Define
#define  loop(j) for(int i =0; i<j; i++) ;

// Typedef
typedef long long  ll;
const int s = 1e4+50;

    vector<int> primes;
    void findPrimes() {
        cout<<s<<'\n';
        vector<bool> isPrime(s, true);
        isPrime[0] = isPrime[1] = false;
        
        for(int i = 2; i < s; i++) {
            if(isPrime[i]) {
                primes.push_back(i);
                for(int j = i*i; j < s; j += i) {
                    isPrime[j] = false;
                }
                // Why to start fro  i*i ? 
            }
        }
        for(int i = 0; i<primes.size(); i++){
            cout<<primes[i]<<' ';
        }
    }

void awadh_solution(){
    findPrimes();
}

int main(){

    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int test=1;
    while(test--){
        awadh_solution();
    }
}