# include<bits/stdc++.h>
using namespace std;
int main()
{
    int num;
    cout<<"Enter the number of Student : ";
    cin>>num;
    int marks[num];
    cout<<"Enter the marks : ";
    for(int i = 0; i<num; i++)
    {
        cin>>marks[i];
    //     if(marks[i]<35)
    //     {
    //         cout<<"Marks Less than 35 of roll number " <<i<<"\n";
    //     }
    // 
    }
    cout<<"Marks Less than 35 of roll number " ;
    for(int i = 0; i<num; i++)
    {
        
        if(marks[i]<35)
        {
            cout<<i<<" ";
        }
    }
}