//Write a program takes a number from user and return no of on bits. removing if condition.

#include <stdio.h>

int CountOne(unsigned int iNo)
{
    unsigned int iDigit =0;
    int iCnt = 0;

    while (iNo > 0)
    {
        iDigit = iNo % 2;
        iCnt = iCnt + iDigit;
        iNo = iNo / 2;
    }
    return iCnt;
}

unsigned int OffBit(unsigned int iNo)
{
    unsigned int iMask = 0xFFFFFFFB;
    unsigned int Result = 0;
    Result = iNo & iMask;
    return Result;
}

int main()
{
    unsigned int iValue = 0;
    unsigned int iRet = 0;
    printf("Enter number\n");
    scanf("%u", &iValue);

    iRet = OffBit(iValue);
    printf("%u", iRet);
    return 0;
}