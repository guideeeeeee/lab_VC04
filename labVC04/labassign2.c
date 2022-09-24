#include<stdio.h>
void main (){
    int a,b,c;
    printf("Enter A:");
    scanf("%d",&a);
    printf("Enter B:");
    scanf("%d",&b);
    printf("Enter C:");
    scanf("%d",&c);
    if(a>b)
    {
        if(b>c)
        {
            printf("result is %d %d %d",a,b,c);
        }
        else if(a>c)
        {
            printf("result is %d %d %d",a,c,b);
        }
    }
    if(b>c)
    {
        if(c>a)
        {
            printf("result is %d %d %d",b,c,a);
        }
        else if(b>a)
        {
            printf("result is %d %d %d",b,a,c);
        }
    }
    if(c>a)
    {
        if(a>b)
        {
            printf("result is %d %d %d",c,a,b);
        }
        else if(c>b)
        {
            printf("result is %d %d %d",c,b,a);
        }
    }
}