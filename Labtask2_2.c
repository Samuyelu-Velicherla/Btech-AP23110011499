#include<stdio.h>
int main ()
{
  //Write a program in C to read n number of values in an array and display them in reverse order.
    int arr[100],n,c;
    printf("size of an array:");
    scanf("%d",&n);
    printf("enter the values:\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("reverse order: ");
    for(int i=0;i<n/2;i++)
    {
        c=arr[n-i-1];
        arr[n-i-1]=arr[i];
        arr[i]=c;
    }
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    
}
