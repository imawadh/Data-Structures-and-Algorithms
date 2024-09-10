# include <bits/stdc++.h>
using namespace std;
// whenever we send array to function we send its reference to the function
// Array is pass by refernce means whenever we send its value we can modify it ...


// Accessing elements function 
void display(int a[],int size){ // Technically int a[] = int * a i.e: a pointer only 
    
    for(int i =0; i<size;i++)
    {
        cout<<a[i]<<' ';
    }
}


// Updation in a array by function 
void change(int b[])
// int b[] = int *b
{
    b[0]=99;
    cout<<endl;
}
int main()
{
    int arr[]={1,2,3,3,4,4,5};
    int size = sizeof(arr)/sizeof(arr[0]);
    display(arr,size);
    change(arr);
    display(arr,size);
    char arr[3]={'1','a','&'};

    // Array and Pointer 









}
