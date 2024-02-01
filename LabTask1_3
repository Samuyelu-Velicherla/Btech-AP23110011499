#include<stdio.h>
#include<string.h>
int main()
{
//write a C program to reverse a string using pointers
    char arr[100],temp,*ptr;
    ptr=arr;
    printf("Enter the string:");
    scanf("%s",&arr);
    int n=strlen(arr);
    for(int i=0;i<n/2;i++)
    {
        temp=arr[n-i-1];
        arr[n-i-1]=arr[i];
        arr[i]=temp; 
    }
    printf("Reverse of the string : %s",ptr);
}
