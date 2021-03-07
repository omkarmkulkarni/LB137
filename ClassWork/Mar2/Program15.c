#include <stdio.h>
int FactorsSum(int iNo)
{
    int i = 0;
    int iSum = 0;
    if(iNo < 0)
    { 
        iNo = -iNo;
    }
    for(i = 1; i<= iNo/2 ;i++)
    {
        if((iNo % i) == 0)
        {
            iSum = iSum + i;
        }
    }
    return iSum;
}
int main()
{
    int iValue = 0, iRet =0;

    printf("Enter number\n");
    scanf("%d",&iValue);
    iRet = FactorsSum(iValue);
    printf ("%d", iRet);
    return 0;
}