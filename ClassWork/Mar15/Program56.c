/*
    Accept number of rows and number of columns from user and display below
    pattern.
    Input : row= 4  ; col = 4
    Output : 1 $ $ $
             * 2 $ $
             * * 3 $ 
             * * * 4
    Program Layout :
 */

#include<stdio.h> 
void Pattern(int iRow, int iCol) 
{ 
    if(iRow != iCol)
    {
        return;
    }
    for (int i = 1; i <= iRow; i++)
    {
        for (int j = 1; j <= iCol; j++)
        {
            if (i == j)
            {
                printf("%d\t", j);
            }
            else if (i < j)
            {
                printf("$\t");
            }
            else
            {
                printf("*\t");
            }
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