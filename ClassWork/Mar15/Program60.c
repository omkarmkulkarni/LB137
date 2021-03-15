/*
    Accept number of rows and number of columns from user and display below
    pattern.
    Input : row= 4  ; col = 4
    Output : 
            #       #       #       #
            #       *       *       #
            #       *       *       #
            #       #       #       #
    Program Layout :
 */

#include<stdio.h> 
void Pattern(int iRow, int iCol) 
{ 
    char cValue = 'A';
    for (int i = 0; i < iRow; i++)
    {
        for (int j = 0; j < iCol; j++)
        {
            if (i>=j)
            {
                printf("%c\t", cValue + j);
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