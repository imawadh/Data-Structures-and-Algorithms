# include<bits/stdc++.h>
using namespace std;
// Done 
vector <int> sorted_merge(vector<int> &arr1, vector<int> &arr2)
{
    vector <int> answer;

    int i = 0;
    int j = 0;

    while(i<arr1.size() && j<arr2.size() )
    {
        if(arr1[i]<=arr2[j])
        {
            
            answer.push_back(arr1[i]);
            i++;
        }
        else{
            answer.push_back(arr2[j]);
            j++;
        }
    }

    if(i==arr1.size())
        {
            for(;j<arr2.size();j++)
            {
                answer.push_back(arr2[j]);
            }

        }
    else{
        for(;i<arr1.size();i++)
            {
                answer.push_back(arr1[i]);
            }
        }
    // for (i = 0; i<answer.size(); i++)
    //     {
    //         cout<<answer[i]<<' ';

    //     }
        return answer;
    
}

int main()
{
    vector <int> v1 = {INT_MIN,1,2,3,4,5,6,7,90,167,567,18829,876543234};
    vector <int> v2 = {-123,-23,-11,0,89,98765,987654,INT_MAX};
    // sorted_merge(v1,v2);
    vector <int> answer = sorted_merge(v1,v2);
    for(int i =0 ; i<answer.size(); i++)
    {
        cout<<answer[i]<<' ';
    }


}