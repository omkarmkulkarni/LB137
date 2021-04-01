//Accept no and one position off the bit from the position

#include<stdio.h>
#include<stdbool.h>

unsigned int OffBit(unsigned int iNo, int iPos)
{
    unsigned int iMask = 0x11110111;
    unsigned int Result = 0;
    if((iPos < 1) || (iPos > 32))
    {
        return -1;
    }
    iMask = iMask << iPos -1;
    iMask = ~iMask;
    Result = iNo & iMask;
    return Result;
}

int main()
{
    unsigned int iValue = 0; 
    int iPos = 0;
    unsigned int iRet;

    printf("Enter number\n");
    scanf("%u", &iValue);
    printf("Enter position\n");
    scanf("%d", &iPos);

    iRet = OffBit(iValue, iPos);
    printf("%u", iRet);
    return 0;
}