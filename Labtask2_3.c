#include<stdio.h>
int main()
{
    //Write a program in C to find the sum of all elements of the array
    int arr[100],n,sum=0;
    printf("size of an array:");
    scanf("%d",&n);
    printf("enter the values:\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++)
    {
        sum+=arr[i];
    }
    printf("sum of elements in an array: %d",sum);
}
