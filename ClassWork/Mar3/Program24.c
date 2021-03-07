//Accept two numbers from user and return frequency of the digits

#include <stdio.h>

int DigitFrequency(int iNo, int iSearchDigit)
{
    int iDigit = 0;
    int iCnt = 0;

    if ((iSearchDigit <0) || (iSearchDigit >9))
    {
        return -1;
    }
    
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while (iNo > 0)
    {
        iDigit = iNo % 10;
        if(iDigit == iSearchDigit)
        {
            iCnt++;
        }
        iNo = iNo / 10;
    }
    
    return iCnt;
}

int main()
{
    int iValue1 = 0, iValue2 = 0, iRet = 0;
    printf("Enter number\n");
    scanf("%d", &iValue1);
    printf("Enter digit to search\n");
    scanf("%d", &iValue2);
    iRet = DigitFrequency(iValue1, iValue2);
    if(iRet != -1)
    {
        printf ("No of given digits are: %d\n", iRet);
    }
    else
    {
        printf ("Search digit should be between 0 and 9", iRet);
    }
    return 0;
}