//Accept no from user and position from user and toggle the bit

#include<stdio.h>
#include<stdbool.h>

unsigned int ToggleBit(unsigned int iNo, int iPos)
{
    unsigned int iMask = 0x00000001;
    unsigned int Result = 0;
    if((iPos < 1) || (iPos > 32))
    {
        return -1;
    }
    iMask = iMask << iPos - 1;
    Result = iNo ^ iMask;
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

    iRet = ToggleBit(iValue, iPos);
    printf("%u", iRet);
    return 0;
}