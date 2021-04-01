//Accept no from user and check whether bit 3rd, 5th and 7th is on or off

#include<stdio.h>
#include<stdbool.h>

bool CheckBit(unsigned int iNo, int iPos)
{
    unsigned int iMask = 0x00000001;
    unsigned int Result = 0;
    if((iPos < 1) || (iPos > 32))
    {
        return false;
    }
    iMask = iMask << iPos - 1;
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
    int iPos = 0;
    bool bRet;

    printf("Enter number\n");
    scanf("%u", &iValue);
    printf("Enter position\n");
    scanf("%d", &iPos);

    bRet = CheckBit(iValue, iPos);

    if(bRet == true)
    {
        printf("bit is on\n");
    }
    else
    {
        printf("bit is off\n");
    }
    return 0;
}