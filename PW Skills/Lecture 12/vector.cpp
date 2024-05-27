# include <bits/stdc++.h>
using namespace std;


int main()
{
    // Vector because array has fixed size 
    // Vector is dynamic array.... 
    // Double size ka banayega jab koi naya size ka baneyega .... 
    // arary is faster than array ...

    vector <int> arr; // Declearation of array
    // We donot need to mention size in vector 
    arr.push_back(7);
    arr[1]=67; // This will not be append or pushed at back of the vector 

    arr.push_back(79);
    arr.push_back(54);
    // push_back mechanism is to double the size of vector  if place is not there at the end of it i.e; capacity 


    // int count = 0;
    // for(int *ptr ; count<arr.size(); ptr++)
    // {
    //     cout<<count[ptr]<<' ';
    //     // ptr++;
    //     count+=1;
    // } This is not true because it is not array it is vector 
    cout<<"By Size    : ";
    for(int i = 0; i<arr.size(); i++)
    {
        cout<<arr[i]<<' ';
    }
    cout<<endl<<"By Capatacity   : ";
    for(int i = 0; i<arr.capacity(); i++)
    {
        cout<<arr[i]<<' ';
    }
    arr.pop_back();
    arr.pop_back();
    //Once the capacity of vector is increased we it does reduces its capacity but can reduce its size only 
    cout<<endl<<"By Size    : ";
    for(int i = 0; i<arr.size(); i++)
    {
        cout<<arr[i]<<' ';
    }
    cout<<endl<<"By Capatacity   : ";
    for(int i = 0; i<arr.capacity(); i++)
    {
        cout<<arr[i]<<' ';
    }


    cout<<"\nThe size of the vector is "<<arr.size()<<"\nThe capacity of the vector is "<<arr.capacity()<<"\nWe are trying to access element outide the range of size of vector so the the garabge value is "<<arr[8];// It throws garbage value as like array thows garbage value 

    int arra1y[2]= {1,2};
    cout<<endl<<arra1y[67];
    cout<<endl;
    vector <int> v_input;
    for(int i = 0; i<5; i++)
    {
        int x;
        cin>>x;
        v_input.push_back(x);
    } 
    cout<<"Output :  "<<endl;
    for(int i = 0; i<5; i++)
    {
        cout<<v_input[i]<<' ';
    } 

    // Sized Vector 
cout<<endl;
    vector <int> v(4);
    for(int i = 0; i<5; i++)
    {
        cin>>v[i];
    } 
    cout<<endl<<"Output :  ";
    for(int i = 0; i<5; i++)
    {
        cout<<v[i]<<' ';
    } 




}
