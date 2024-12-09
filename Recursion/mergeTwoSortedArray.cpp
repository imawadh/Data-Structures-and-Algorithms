# include <bits/stdc++.h>
using namespace std;
 
// Define
#define  loop(j) for(int i =0; i<j; i++) ;
 
// Typedef

    void merge(vector<int>& nums1,  vector<int>& nums2) {
        
        int s = nums1.size()+nums2.size();
        vector <int> v(s,0);

        nums1.push_back(INT_MAX);
        nums2.push_back(INT_MAX);

        int i =0,j=0,k=0;
        while(k!=s){
            
            if(nums1[i]<nums2[j]){
                v[k]=nums1[i];
                i++;
            }
            else{
                v[k]=nums2[j];
                j++;
            }
            k++;
        }
        for(int i =0; i<s; i++)
        {
            cout<<v[i]<<' ';
        }
        
    }

 
void awadh_solution(){

    vector <int> nums1 = {1,2,3,4,5,9,67,34};
    vector <int> nums2 = {1,2,3,4,5,9,67,34};
    merge(nums1,nums2);

 
 
}
 
int main(){
 
    ios::sync_with_stdio(false);
    cin.tie(NULL);
 
    int test=1;
    while(test--){
       awadh_solution();
    }
}