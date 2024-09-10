# include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[]={1,2,3,3,4,4,5};
    int * ptr1 = arr;
    // ! int *ptr1 = &arr; throws error 
    int *ptr2 = &arr[0]; 
    for (int i =0; i<7; i++)
    {
        cout<<i[arr]<<'='<<ptr2[i]<<' ';
        // arr[i]=i[arr];

    }
    
    ptr2[1]=90;
    for (int i =0; i<7; i++)
    {
        cout<<arr[i]<<'='<<ptr2[i]<<' ';

    }
    cout<<endl<<ptr1[1]; 
    cout<<ptr1<<' '<<ptr2;
    cout<<endl<<ptr1[0]<<' '<<ptr1[1];
    int * ptr3 =&arr[2];
    ptr3[1]=108;
    // for (int i =0; i<7; i++)
    // {
    //     cout<<arr[i]<<'='<<ptr3[i]<<' ';

    // }
    cout<<endl<<ptr1[1];
    cout<<endl;
    int arr1[]={1,2,89,3,34,67,5};
    int *pointer = arr1;
    for(int i =0 ;i<7; i++)
    {
        cout<<arr1[i]<<' ';
    }
    cout<<endl;
    // Printing with pointer
    for(int i =0 ;i<7; i++)
    {
        cout<<*pointer<<' ';
        pointer++;
    }



    // One other way of printing 
    int count =0;
    cout<<endl;
    int *ptr;
    for (ptr = arr1; count<7; ptr++)
    {
        cout<<*ptr<<' ';
        count++;
    }
    cout<<endl<<*ptr;
    // jab ye ptr phir loop se bahar aayega to kho jayega is liye koi bhi value de dega 
    // To avoid such situation we can make use of ptr = arr; to make it reinitialising of pointing to first elemnt of array
    ptr = arr;
    cout<<endl<<*ptr;
    




    
    








}
