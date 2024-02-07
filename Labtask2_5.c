#include<stdio.h>
int main()
{
    int arr[100],n,c;
    printf("Enter the size of an array : ");
    scanf("%d",&n);
    printf("Enter the values of array :\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("The Unique elements : \n");
    for(int i=0;i<n;i++)
    {
        c=0;
        for(int j=0,k=n;j<k+1;j++)
        {
            if(i!=j)
            {
                if(arr[i]==arr[j])
                {
                    c++;
                }
            }
        }
        if(c==0)
        {
            printf("%d, ",arr[i]);
        }
    }
}
