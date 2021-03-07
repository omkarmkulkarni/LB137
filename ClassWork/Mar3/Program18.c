// Check whether a number is perfect or not
#include <stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL CheckPrime(int iNo)
{
    int i = 0;
    if(iNo < 0)
    { 
        iNo = -iNo;
    }
    for(i = 2; i<= iNo/2 ;i++)
    {
        if((iNo % i) == 0)
        {
            break;
        }
    }
    if (i == (iNo/2)+1)
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
    bRet = CheckPrime(iValue);
    
    if (bRet == TRUE)
    {
        printf("%d is a prime number", iValue);
    }
    else
    {
        printf("%d is not a prime number", iValue);
    }

    return 0;
}