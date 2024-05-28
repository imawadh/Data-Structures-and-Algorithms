# include <bits/stdc++.h>
using namespace std;
// Done 
vector <int> swap (vector <int> &arr,int index1,int index2)
{
    int temp = arr[index1];
    arr[index1]=arr[index2];
    arr[index2]=temp;

    return arr;

}
int main()
{
    vector <int> v;
    v.push_back(0);
    v.push_back(1);
    v.push_back(1);
    v.push_back(0);
    v.push_back(1);
    v.push_back(0);
    cout<<"Original Array : ";
    for(int i =0; i<v.size();i++)
    {
        cout<<v[i]<<' ';
    }
    cout<<endl;
    cout<<"Sorted Arary : ";
    // Method 1
    // sort(v.begin(),v.end());
    // for(int i =0; i<v.size();i++)
    // {
    //     cout<<v[i]<<' ';
    // }




    // Method 2
    // int count0 = 0;
    // int count1 = 0;
    //  for(int i =0; i<v.size();i++)
    // {
    //     if(v[i]==0)
    //     {
    //         count0++;
    //     }
    //     else{
    //         count1++;
    //     }
    // }
    //  for(int i =0; i<v.size();i++)
    // {
    //     if(i<count0)
    //     {
    //         v[i]=0;
    //     }
    //     else{
    //         v[i]=1;
    //     }
    // }
    //  for(int i =0; i<v.size();i++)
    // {
    //     cout<<v[i]<<' ';
    // }



    // Method 3--- Two Pointers 
    int i=0,j=v.size()-1;
    while(i<j)
    {
        if(v[i]==0)
        {
            i++;
        }
        if(v[j]==1)
        {
            j--;
        }
        if(v[j]==0 && v[i]==1)
        {
            swap(v,i,j);
            j--;
            i++;
        }
    }

    for(int i =0; i<v.size();i++)
    {
        cout<<v[i]<<' ';
    }


}