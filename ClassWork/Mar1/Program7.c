//Accept number from user and check whether number is divisible by 3 and 5.

//I - 10
//O - No

//I - 15
//O - Yes
#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL CheckDivisible(int iNo)
{
    if ((iNo % 5)== 0 && (iNo % 3)== 0)
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
    int iValue = 0;
    BOOL bRet = FALSE;
    printf("Enter number\n");
    scanf("%d" , &iValue);
    bRet = CheckDivisible(iValue);
    
    if (bRet == TRUE)
    {
        printf("Yes", iValue);
    }
    else
    {
        printf("No", iValue);
    }
    return 0;
}