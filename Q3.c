#include<stdio.h>
void main()
{
    int n,x,sum=0;
    printf("enter a number");
    scanf("%d",&n);
    do{
        x=n%10;
        sum=sum+x;
        n=n/10;
    }while(n>0);
    printf("sum of digit is %d",sum);

}