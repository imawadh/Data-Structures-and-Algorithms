# include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[] = {1,2,3,4,5,7,9};
    // int arr1[]; //  This will throw error later on we can not access its its if we have not declared the size of array at the time of initialisation 
    arr[6];
    arr[0]=2;
    // simple method of output  like cout<<arr[0]; cout<<arr[1];

    // Printing using loop to each element with the help of index 


    // Simple method of initialisation 

    // Loop mehod of taking input 


    // !alert -- Important
    // int a(14) --- is wrong
    int size = 10, arr1[size]; // tHis is correct 
    // int c = {1,2,3}; // This is wrong because int is acting as primitive or non primitive wo humko [] ke se pata chalta hai 
    int c = {2};
    // --- This right
    // What does it maen ? arr[8]; and int arr[8];
    cout<<endl<<"arr[8]; means element at 8th index of the array arr and int arr[8];  we are declearing the array arr of size 8"<<endl;


    // Types of array --- one dimensional and two dimensional 

    // Size and size of operator in c++ 
    int arr2[]= {1,2,3,4,5,6,7};
    cout<<sizeof(arr)/sizeof(arr[0]);
    // we donot have size function for array in c++ we have only sizeof function to find it ... 


    // Memory Allocation in array 

    // It is contiguous memory allocation 


    // ! Proof for contiguous memory allocation  
    int arr3[4]={1,2,3,4};
    for(int i =0; i<4 ;i++)
    {
        cout<<&arr[i]<<' ';
    }
    



}