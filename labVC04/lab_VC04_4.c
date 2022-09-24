#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
void main(){
    int a,b,c,x;
    char f;
    printf("input number for calculate (1,2,3)::");
    scanf("%d",&x);
    if(x==1)
    { printf("plus method\n");
    x += x+1;
    printf("Do you want to show result for plus(y/n)?");
    f = getche();
    if(f =='y')
    printf("\n x+= x+1 is %d",x);
    else
    exit(0);
    }
    else if(x==2)
    {
        printf("minus method\n");
        x -= x-1;
        printf("Do you want to show result for minus(y/n)?");
        f = getche();
        if(f == 'y')
        printf(" \n x -= x-1 is %d",x);
        else
        exit(0);
    }
    else if (x==3)
    {
        printf("multiple method\n");
        x *= x*2;
        printf("Do you want to show result for mutiple(y/n)?");
        f = getche();
        if(f=='y')
        printf("\n x *= x*2 is %d",x);
        else
        exit(0);
    }
    printf("\n End Program \n");
}