// Accept no from user and return factorial

#include <stdio.h>
int Fact(int iNo1)
{
    int iCnt=0,iAns = 1;
    if(iNo1 < 0)
    {
        iNo1 = -iNo1;
    }
    for (iCnt = 1; iCnt <=iNo1; iCnt++)
    {
        iAns = iAns * iCnt;
    }
    return iAns;
}

int main()
{
    int iValue1 = 0;
    int iValue2 = 0;
    int iRet = 0;
    printf("Enter first number\n");
    scanf("%d" , &iValue1);
    iRet = Fact(iValue1);
    printf("%d", iRet);
    return 0;
}