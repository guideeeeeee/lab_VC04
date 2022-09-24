#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
    int press;
    printf(" Press (1,2,3,4,5) : ");
    scanf("%d", &press);
    switch(press)
    {
        case 1:
        printf("Press first = %d\n",press);
        case 2:
        printf("Press second = %d\n",press);
        case 3:
        printf("Press third = %d\n",press);
        case 4:
        printf("Press fourth = %d\n",press);
        case 5:
        printf("Press fifth = %d\n",press);
        default :
        printf("Press other key = %d\n",press);
    }
    printf("End of Program");
}