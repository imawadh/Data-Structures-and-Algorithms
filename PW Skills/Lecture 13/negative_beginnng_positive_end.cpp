# include<bits/stdc++.h>
using namespace std;
// Done 
vector <int> negative_postive (vector <int> &arr)
{
    int i =0,j=arr.size()-1;
    while(i<j)
    {
        if(arr[i]<0) i++;
        if(arr[j]>=0) j--;
        if(arr[i]>=0 && arr[j]<0)
        {
            int temp = arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
            i++;
            j--;
        }
    }

    return arr;
}
int main()
{
    vector <int> v;
    v.push_back(0);
    v.push_back(908);
    v.push_back(176);
    v.push_back(-45);
    v.push_back(90);
    v.push_back(890);
    v.push_back(87);
    v.push_back(-14);
    v.push_back(1);
    v.push_back(-48);
    v.push_back(-7);
    v.push_back(8);
    cout<<"Original Array : ";
    for(int i =0; i<v.size();i++)
    {
        cout<<v[i]<<' ';
    }
    cout<<endl;
    cout<<"Negative and Postive Arary : ";
    negative_postive(v);
    for(int i =0; i<v.size();i++)
    {
        cout<<v[i]<<' ';
    }

}