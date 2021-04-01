//Accept no from user and check whether bit 3rd, 5th and 7th is on or off

#include<stdio.h>
#include<stdbool.h>

bool CheckBit(unsigned int iNo)
{
    unsigned int iMask = 0x00000054;
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

    bRet = CheckBit(iValue);

    if(bRet == true)
    {
        printf("3rd, 5th and 7th bit is on\n");
    }
    else
    {
        printf("3rd, 5th and 7th bit is off\n");
    }
    return 0;
}
