#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main(){
    char ch_var;
    int num1 , num2, total;
    printf("Do you want to calculate(y/n)? : ");
    ch_var = getche();
    if(ch_var =='y')
    {
        printf("\n input interger 1 :");
        scanf("%d",&num1);
        printf("input interger 2:");
        scanf("%d",&num2);
        if((num1 !=0) && (num2 !=0))
        {
            if(num1<num2)
                {
                    printf("can not show result");}
            if(num1>num2)
            {
                total = num1%num2;
                printf("\n%d modulo %d = %d",num1,num2,total);
            }
                
        }
    }
    printf("\nEnd of Program");
}