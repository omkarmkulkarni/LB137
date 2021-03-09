#include<stdio.h>
typedef int BOOL ;
# define TRUE 1
# define FALSE 0

BOOL CheckPalindrome(int iNo)
{
    int iDigit = 0;
    int iNum = iNo;
    int iRev = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for (;iNo > 0; iNo = iNo/10)
    {
        iDigit = iNo % 10;
        iRev = (iRev * 10) + iDigit;
    }

    if(iNum == iRev)
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
    BOOL bRet = 0;
    printf("Enter number\n");
    scanf("%d",&iValue);
    bRet = CheckPalindrome(iValue);
    if (bRet == TRUE)
    {
        printf("It is palindrome");
    }
    else
    {
        printf("It is not palindrome");
    }
    

    return 0;
}