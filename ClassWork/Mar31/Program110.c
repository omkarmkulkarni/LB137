//Accept no from user and check whether bit 5 is on or off

#include<stdio.h>
#include<stdbool.h>

bool CheckFifthBit(unsigned int iNo)
{
    unsigned int iMask = 0x00000010;
    unsigned int Result = 0;
    Result = iNo & iMask;
    if(Result == iMask)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    unsigned int iValue = 0;
    bool bRet;

    printf("Enter number\n");
    scanf("%u", &iValue);

    bRet = CheckFifthBit(iValue);

    if(bRet == true)
    {
        printf("5th bit is on\n");
    }
    else
    {
        printf("5th bit is off\n");
    }
    return 0;
}
