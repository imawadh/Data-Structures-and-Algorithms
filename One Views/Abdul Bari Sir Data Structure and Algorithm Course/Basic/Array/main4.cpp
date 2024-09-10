# include <iostream>
using namespace std;
int main()
{
    int A[9];
    A[0]=1;
    A[2]=2;
    A[3]=3;
    A[4]=4;
    printf("%d",A[0]);

    for (int x:A)
    {
        printf("%d ",x);
    }
    // It thows some garbage value when this pattern is applied 

    int a[9] ={1};// If we put a single value  while declearation/initialisation the garbage value is not thrown then 


    a[1]=1;
    a[2]=2;
    a[3]=3;
    for (int x:a)
    {
        cout<<x<<' ';
    }





}