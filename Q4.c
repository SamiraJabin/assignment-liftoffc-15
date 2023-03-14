#include<stdio.h>
void main()
{
    int a,b,sum,diff,prod,cas;
    float quo,rem;
    printf("enter two numbers");
    scanf("%d %d",&a,&b);
    printf("enter the case");
    scanf("%d",&cas);
    switch(cas)
    { 
        case 1  : 
        sum=a+b;
        printf("sum is %d",sum);
        break;
        case 2  : 
        diff=a-b;
        printf("difference is %d",diff);
        break;
        case 3 : 
        prod=a*b;
        printf("product is %d",prod);
        break;
        case 4   : 
        quo=a/b;
        printf("quotient is %f",quo);
        break;
        case 5  : 
        rem=a%b;
        printf("remainder is %f",rem);
        break;
    } 
    
} 