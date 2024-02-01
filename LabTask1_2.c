#include<stdio.h>
int main()
{
//Write a C program to swap the values of two integers using pointers

    int a,b,c,*p,*q;
    p=&a;
    q=&b;
    printf("enter the value of a & b\n");
    scanf("%d%d",&a,&b);
    c=*q;
    *q=*p;
    *p=c;
    printf("after swapping:\n");
    printf("a=%d,b=%d",*p,*q);
}
