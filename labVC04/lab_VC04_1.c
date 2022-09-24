#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
    int var_1,var_2,result;
    printf("input integer value_1:" );
    scanf("%d", &var_1);
    printf("input integer value_2:" );
    scanf("%d", &var_2);
    if(var_1 > var_2)
    {
        result = var_1 - var_2;
        printf("%d minus %d is %d",var_1,var_2,result);
    }
    if(var_1 <= var_2)
    {
        result = var_1 * var_2;
        printf("%d multiple %d is %d",var_1,var_2,result);
    }
    printf("\nEnd of Program");
}