//Write a program takes a number from user and off 3rd and 7th bit from that number.

#include <stdio.h>

unsigned int OffBit(unsigned int iNo)
{
    unsigned int iMask = 0xFFFFFFBB;
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