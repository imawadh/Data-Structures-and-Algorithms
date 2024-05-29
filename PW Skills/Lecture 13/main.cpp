#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector <int> arr;// Size need to be defined 
    
    arr[4]=56;
    for(int i = 0; i<arr.size();i++)
    {
        cout<<arr[i]<<' ';
    }
    
}