 #include<stdio.h>
int main()
{
  //Write a program in C to delete the element at the given index.
    int arr[100],n,p;
    printf("Enter the size of an array  : ");
    scanf("%d",&n);
    printf("Enter the values in the array : \n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Position to delete an element : ");
    scanf("%d",&p);
    n++;
    for (int i = p; i < n - 1; i++) 
    {
        arr[i] = arr[i + 1];
    }
    n-=2;
    printf("After Deleting : \n");
    for(int i=0;i<n;i++)
    {
        printf("%d, ",arr[i]);
    } 
}
