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