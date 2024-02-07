#include<stdio.h>
int main()
{
  //Write a program in C to insert an element into an array at a specifiedposition.
    int arr[100],n,x,s;
    printf("Enter the size of an array  : ");
    scanf("%d",&n);
    printf("Enter the values in the array : \n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Position to insert an element : ");
    scanf("%d",&x);
    printf("Enter the element to bwe inserted : ");
    scanf("%d",&s);
    n++;
    for (int i = n - 1; i > x; i--) 
    {
        arr[i] = arr[i - 1];
    }
    arr[x]=s;
    printf("After inserting : \n");
    for(int i=0;i<n;i++)
    {
        printf("%d, ",arr[i]);
    } 
}
