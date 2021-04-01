//Accept no from user and check whether bit 3rd, 5th and 7th is on or off

#include<stdio.h>
#include<stdbool.h>

bool CheckBit(unsigned int iNo, int iPos1, int iPos2)
{
    unsigned int iMask1 = 0x00000001, iMask2 = 0x00000001, iMask = 0x00000000;
    unsigned int Result = 0;
    if((iPos1 < 1) || (iPos1 > 32) || ((iPos2 <1) ||(iPos2 > 32)))
    {
        return false;
    }
    iMask = ((iMask1 << (iPos1 - 1)) | (iMask2 << (iPos2 -1)));
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
    int iPos1 = 0, iPos2 =0;
    bool bRet;

    printf("Enter number\n");
    scanf("%u", &iValue);
    printf("Enter position1\n");
    scanf("%d", &iPos1);
     printf("Enter position2\n");
    scanf("%d", &iPos2);

    bRet = CheckBit(iValue, iPos1, iPos2);

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