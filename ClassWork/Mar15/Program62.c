/*
    Accept number of rows and number of columns from user and display below
    pattern.
    Input : row= 4  ; col = 4
    Output : 
            *       *       *       *
            *       *       *
            *       *
            *
    Program Layout :
 */

#include<stdio.h> 
void Pattern(int iRow, int iCol) 
{ 
    if(iRow != iCol)
    {
        return;
    }
    for (int i = 4; i > 0; i--)
    {
        for (int j = 1; j <= i; j++)
        {
                printf("*\t");
        }
        printf("\n");
    }
} 
int main() 
{ 
 int iValue1 = 0, iValue2 = 0; 
 printf("Enter number of rows and columns"); 
 scanf("%d %d",&iValue1, &iValue2); 
 Pattern(iValue1, iValue2); 
 return 0; 
}