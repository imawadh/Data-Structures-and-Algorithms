# include <iostream>
using namespace std;
int main()
{
    int n;
    // At most of the palces variable size array throw an error 
    
    cout<<"Enter the size : ";
    cin>>n;
    int arr[n]={2,3,7,4};
    for (int x:arr) 
    {
        cout<<x<<' ';
        // printf("%d ",x);
    }
}