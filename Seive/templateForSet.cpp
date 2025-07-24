set<int>st;
void findPrimes(int s) {
    vector<bool> isPrime(s, true);
    isPrime[0] = isPrime[1] = false;
    
    for(int i = 2; i < s; i++) {
        if(isPrime[i]) {
            st.insert(i);
            for(long long j = (long long)i*i; j < s; j += i) {
                isPrime[j] = false;
            }
        }
    }
    for(auto it:st){
        cout<<it<<' ';
    }
}