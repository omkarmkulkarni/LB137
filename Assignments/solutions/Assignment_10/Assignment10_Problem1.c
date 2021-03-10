/*
1. Accept number from user and display below pattern. 
Input : 5 
Output : A B C D E 
 
*/

#include<stdio.h> 
void Pattern(int iNo) 
{ 
    char c;
    for (c = 'A'; c < ('A'+ iNo); c++)
    {
        printf("%c ", c);
    }
} 
int main() 
{ 
    int iValue = 0; 
    printf("Enter number of elements"); 
    scanf("%d",&iValue); 
    Pattern(iValue); 
    return 0; 
}