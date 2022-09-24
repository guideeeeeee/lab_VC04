#include<stdio.h>
void main(){
    int a;
    printf("Enter your number:");
    scanf("%d",&a);
    if (a>=0 && a<=9)
    {
        printf("\ninterval value is 0-9");
    }
    if (a>=10 && a<=19)
    {
        printf("\ninterval value is 10-19");
    }
    if (a>=20 && a<=29)
    {
        printf("\ninterval value is 20-29");
    }
    if (a>=30 && a<=39)
    {
        printf("\ninterval value is 30-39");
    }
    if (a>=40 && a<=49)
    {
        printf("\ninterval value is 40-49");
    }
}