#include<stdio.h>
int main()
{
    int arr[100],n,c=0;
    printf("Enter the size of an array : ");
    scanf("%d",&n);
    printf("Enter the values of array :\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr[i]==arr[j])
            {
                 c++;
                break;
            }
        }
    }
    printf("No.of duplicate elements : %d",c);
}
