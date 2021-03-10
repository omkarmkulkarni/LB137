/*
Write a program which accept range from user and return addition of all numbers 
in between that range. (Range should contains positive numbers only) 
Input : 23 30 
Output : 212 
Input : 10 18 
Output : 126 
Input : -10 2 
Output : Invalid range 
Input : 90 18 
Output : Invalid range 
*/

#include<stdio.h> 
int RangeSum(int iStart , int iEnd) 
{ 
    int iSum = 0;
    if(iStart<0 || iStart > iEnd)
    {
        return -1;
    }
    else
    {
        for(int i=iStart; i <= iEnd; i++)
        {
            iSum = iSum + i ;
        }
        return iSum;
    }
} 
int main() 
{ 
    int iValue1 = 0, iValue2 = 0, iRet =0; 
    printf("Enter starting point"); 
    scanf("%d",&iValue1); 
    printf("Enter ending point"); 
    scanf("%d",&iValue2); 
    iRet = RangeSum(iValue1, iValue2);
    if(iRet != -1) 
    {
        printf("Addition is %d",iRet); 
    }
    else
    {
        printf("Invalid Range"); 
    }
    return 0;
}