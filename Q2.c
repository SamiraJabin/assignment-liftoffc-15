#include<stdio.h>
void main()
{
    int n;
    printf("enter a number");
    scanf("%d",&n);
    if(n<0)
    printf("number is negative");
    else if(n==0)
    {
    printf("number is zero");
    }
    else
    printf("number is positive");
}