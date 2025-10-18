# include <bits/stdc++.h>
using namespace std;
 
// Define
#define  loop(j) for(int i =0; i<j; i++) ;
 
// Typedef
typedef long long  ll;

void displayRecusively(stack <int> &st){
    if(st.empty()) return;
    int ele = st.top();
    cout<<ele<<' ';
    st.pop();
    displayRecusively(st);
    st.push(ele);
}

void displayReverseRecusively(stack <int> &st){
    if(st.empty()) return;
    int ele = st.top();
    st.pop();
    displayRecusively(st);
    st.push(ele);
    cout<<ele<<' ';
}

 
void awadh_solution(){

    stack <int> s;
    s.push(17);
    s.push(10);
    s.push(17);
    s.push(21);
    s.push(56);

    // while (!s.empty())
    // {
    //     cout<<"Top Element of Stack is :: "<<s.top()<<'\n';
    //     s.pop();
    //     cout<<"Size of Stack :: " <<s.size()<<'\n';
    // }

    cout<<"Correct Order stack is ::: ";
    displayRecusively(s);
    cout<<"\nReverse stack is ::: ";
    displayReverseRecusively(s);
    // cout<<s.top(); 
 
 
}
 
int main(){
 
    ios::sync_with_stdio(false);
    cin.tie(NULL);
 
    int test=1;
    while(test--){
       awadh_solution();
    }
}