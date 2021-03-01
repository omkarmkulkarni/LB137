//Accept number from user and check whether number is divisible by 3 and 5.

//I - 10
//O - No

//I - 15
//O - Yes
#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL CheckDivisible(int iNo1, int iNo2)
{
    if ((iNo1 % iNo2)== 0 )
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}

int main()
{
    int iValue1 = 0;
    int iValue2 = 0;
    BOOL bRet = FALSE;
    printf("Enter first number\n");
    scanf("%d" , &iValue1);
    printf("Enter second number\n");
    scanf("%d" , &iValue2);    
    bRet = CheckDivisible(iValue1, iValue2);
    
    if (bRet == TRUE)
    {
        printf("%d is divisible by %d\n", iValue1, iValue2);
    }
    else
    {
        printf("%d is not divisible by %d\n", iValue1, iValue2);
    }
    return 0;
}