// Check whether a number is perfect or not
#include <stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL CheckPerfect(int iNo)
{
    int i = 0;
    int iSum = 0;
    if(iNo < 0)
    { 
        iNo = -iNo;
    }
    for(i = 1; i<= iNo/2 ;i++)
    {
        if((iNo % i) == 0)
        {
            iSum = iSum + i;
        }
    }
    if(iSum == iNo)
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
    scanf("%d",&iValue);
    bRet = CheckPerfect(iValue);
    
    if (bRet == TRUE)
    {
        printf("%d is a perfect number", iValue);
    }
    else
    {
        printf("%d is not a perfect number", iValue);
    }

    return 0;
}