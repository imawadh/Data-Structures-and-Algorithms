# include <bits/stdc++.h>
using namespace std;
 
// Define
#define  loop(j) for(int i =0; i<j; i++) ;
 
// Typedef
typedef long long  ll;


// pop ans push --> Inorder type 
void greaterEle(int arr[], int nge[], int size){
    nge[size-1]= -1;
    stack<int> st;
    st.push(arr[size-1]);
    for(int i = size-2; i>=0; i--){
        // Pop the element till the point where top is less than the array of i / ith element  
        while(st.size() && st.top()<=arr[i]){
            st.pop();
        }

        // Mark The ans 
        if(st.empty()){
            nge[i]= -1;
        }else{
            nge[i]=st.top();
        }

        // Push the remaining element /here remaining means the current element 
        st.push(arr[i]);
    }


}

void awadh_solution(){
    int arr[] = {1,2,3,4,5,8,3,2,4,5,8,7,1,2,3};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<"Original Array :: ";
    for(int i = 0;i<n; i++){
        cout<<arr[i]<<' ';
    }
    int nge[n];
    greaterEle(arr,nge,n);
    cout<<"\nNGE  Array :: ";
    for(int i = 0;i<n; i++){
        cout<<nge[i]<<' ';
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