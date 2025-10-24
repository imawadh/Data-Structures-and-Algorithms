# include <bits/stdc++.h>
using namespace std;
 
// Define
#define  loop(j) for(int i =0; i<j; i++) ;
 
// Typedef
typedef long long  ll;
vector<int> stockSpan(vector<int>&prices){
    int n = prices.size();
    vector<int> days(n,0); // It will store the index of previous greater element else 0 is the least   

    stack<int> st;
    for(int i = 0; i<n ; i++){

        // Pop
        while(st.size() && prices[st.top()]<=prices[i]){
            st.pop();
        }

        // Answer
        if(st.empty()){
            days[i] = 0;
        }else{
            days[i] = st.top();
        }

        // Push
        st.push(i);
    }

    days[0]=1; // day 1 need to be 1 Think why ? 
    for(int i = 1; i<n; i++){
        days[i] = i - days[i];
    }
    return days;

}
void awadh_solution(){
    vector<int> prices = {100,80,60,81,70,60,75,85};
    vector<int> days = stockSpan(prices);
    
    cout<<"Prices :: ";
    int n = prices.size();
    for(int i =0; i<n; i++){
        cout<<prices[i]<<' ';
    }
    cout<<"\nDays   :: ";
    for(int i =0; i<n; i++){
        cout<<days[i]<<' ';
    }
}
 
int main(){
 
    ios::sync_with_stdio(false);
    cin.tie(NULL);
 
    int test=1;
    while(test--){
       awadh_solution();
    }
}
