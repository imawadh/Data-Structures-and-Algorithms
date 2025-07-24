// NOT DONE
#include<bits/stdc++.h>
using namespace std;
void heapSort(vector<int> &v){
    int n = v.size();
    for(int i =0; i<n; i++){

            swap(v[0],v[n-1]);
            int correctIndex = 0;
            while(2*correctIndex+1 < n){
                int left = 2*correctIndex + 1;
                int right = 2*correctIndex + 2;
                if(left<n && right<n){
                    int minIndex = v[left]<v[right] ? left : right;
                    minIndex = v[minIndex]<v[correctIndex] ? minIndex : correctIndex;
                    swap(v[correctIndex],v[minIndex]);
                    correctIndex = minIndex;
                }else if(left<n){
                    int minIndex = v[correctIndex]<v[left] ? correctIndex : left;
                    swap(v[correctIndex],v[minIndex]);
                    correctIndex = minIndex;
                }else{
                    break;
                }
            }
        n-=1;
    }
    reverse(v.begin(),v.end());
}
int main(){
    vector <int> v {1,2,3,4,5,4,21,12};
    heapSort(v);
    for(int i =0; i<v.size(); i++){
        cout<<v[i]<<' ';
    }
    cout<<'\n';
}