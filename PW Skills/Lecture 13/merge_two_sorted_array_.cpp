# include<bits/stdc++.h>
using namespace std;
// Done 
vector <int> sorted_merge(vector<int> &arr1, vector<int> &arr2)
{
    
    int i = arr1.size()-1;
    int j = arr2.size()-1;
    int index  = arr1.size()-1 +arr2.size();
    arr1.resize(index);
    while(i>-1 && j>-1)
    {
        if(arr1[i]>arr2[j])
        {
            arr1[index--] =arr1[i--];
        }

        else{
            arr1[index--]=arr2[j--];
        }
    }
    if(i>-1)
    {
        for(;j>-1;)
        {
            arr1[index--]=arr2[j--];
        }
    }
    else{
        for(;i>-1;)
        {
            arr1[index--]=arr1[i--];
        }
    }
    return arr1;
    
}

int main()
{
    vector <int> v1 = {INT_MIN,1,2,3,4,5,6,7,90,167,567,18829,876543234};
    vector <int> v2 = {-123,-23,-11,0,89,98765,987654,INT_MAX};
    
    vector <int> answer = sorted_merge(v1,v2);
    for(int i =0 ; i<answer.size(); i++)
    {
        cout<<answer[i]<<' ';
    }


}