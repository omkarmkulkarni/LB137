/*
1.Write a program which accept number from user and print that number of $ & * 
on screen. 
Input : 5 
Output : $ * $ * $ * $ * $ * 
Input : 3 
Output : $ * $ * $ * 
Input : -3 
Output : $ * $ * $ * 
*/

#include<stdio.h> 
void Pattern(int iNo) 
{
    for(int i=0; i < iNo; i++)
    {
        printf("$ * ");
    }
}
int main() 
{
    int iValue = 0; 
    printf("Enter number"); 
    scanf("%d",&iValue); 
    Pattern(iValue); 
    return 0;
}