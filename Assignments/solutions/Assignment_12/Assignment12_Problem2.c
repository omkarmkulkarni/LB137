/*
Accept number of rows and number of columns from user and display below 
pattern. 
Input : iRow = 4 iCol = 4 
Output : A B C D 
 a b c d 
 A B C D 
 a b c d 
 */

#include<stdio.h> 
void Pattern(int iRow, int iCol) 
{ 
    char cValueUpper = 'A';
    char cValueLower = 'a';
    for (int i =0; i < iRow; i++)
    {
        if(i%2 == 0)
        {
            for (int j = 0; j < iCol ; j++)
            {
                printf("%c\t", cValueUpper + j);
            }
        }
        else
        {
            for (int j = 0; j <iCol ; j++)
            {
                printf("%c\t", cValueLower + j);
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