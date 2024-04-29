# include <stdio.h>
int main()
{
    // int a = 5;
    // printf("%d",a);

    int arr[90] = {1,2,3,6,7};
    int i;
    for (i=0; i<7; i++)
    {
        printf("%d ",arr[i]);
    }


    // By default values are taken as 0


    printf("\n");
    
    printf("%d",sizeof(arr));
    return 0;
}