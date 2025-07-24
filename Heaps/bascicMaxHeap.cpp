# include <bits/stdc++.h>
using namespace std;
 
// Define
#define  loop(j) for(int i =0; i<j; i++) ;
 
// Typedef
typedef long long  ll;
 
void awadh_solution(){
 
    // Max Heap {By default}
    // priority_queue<int> pq;
    // pq.push(9);
    // cout<<"Current Max :: "<<pq.top()<<'\n';
    // pq.push(90);
    // cout<<"Current Max :: "<<pq.top()<<'\n';
    // pq.push(910);
    // cout<<"Current Max :: "<<pq.top()<<'\n';
    // pq.push(6 0);
    // cout<<"Current Max :: "<<pq.top()<<'\n';
    // pq.push(8);
    // cout<<"Current Max :: "<<pq.top()<<'\n';

    // MIN Heap
    priority_queue<int,vector<int>,greater<int>> pq;
    pq.push(9);
    cout<<"Current MIN :: "<<pq.top()<<'\n';
    pq.push(-9);
    cout<<"Current MIN :: "<<pq.top()<<'\n';
    pq.push(910);
    pq.pop();
    cout<<"Current MIN :: "<<pq.top()<<'\n';
    pq.push(60);
    cout<<"Current MIN :: "<<pq.top()<<'\n';
    pq.push(8);
    cout<<"Current MIN :: "<<pq.top()<<'\n';

 
}
 
int main(){
 
    ios::sync_with_stdio(false);
    cin.tie(NULL);
 
    int test=1;
    while(test--){
       awadh_solution();
    }
}