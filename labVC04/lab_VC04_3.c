#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main(){
    char ch;
    printf("Please input character :");
    ch = getche();
    if(ch == 'y')
    {
        printf("\n Statement of if ");
        ch -= 32;
        printf("\n Changed character to capital = %c",ch);
    }
    else{
        printf("Statement of else\n");
        if(ch =='n')
        {
            printf("internal statement of else\n");
            printf("your character %c = %d",ch ,ch);
        }
        printf("\n End of statement program");
    }
}