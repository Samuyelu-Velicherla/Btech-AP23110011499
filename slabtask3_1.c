#include<stdio.h>
int main()
{
    int n,i,x;
    printf("enter the size of an array:");
    scanf("%d",&n);
    int arr[n];
    printf("enter %d the values: ",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("enter which element do you want:");
    scanf("%d",&x);
    for(i=0;i<n;i++)
    {
        if(arr[i]==x)
        {
            printf("element was found in %d:", i);
            break;
        }  
    }
    if(i==n)
    { 
        printf("element not found");
    }
}
