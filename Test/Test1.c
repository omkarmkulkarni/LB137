#include<stdio.h>
#include<stdbool.h>

bool HasZero(int iNo)
{
    int iDigit = 0;
    bool flag = false;
    if(iNo < 0)
    {
       iNo = -iNo;
    }
    while(iNo > 0)
    {
        iDigit = iNo % 10;
        if (iDigit == 0)
        {
            flag = true;
            break;
        }
        iNo = iNo / 10;
    }
    return flag;
}
int main()
{
    int iValue = 0;
    bool bRet = false;
    printf("Enter number\n");
    scanf("%d",&iValue);
    bRet = HasZero(iValue);
    if(bRet == true)
    {
        printf("It Contains Zero\n");
    }
    else
    {
        printf("There is no Zero\n");
    }
    return 0;
}